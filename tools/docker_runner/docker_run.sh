#!/usr/bin/env bash

source "../../include/color.sh"

color_echo "$GREEN" "-------------docker build begins-------------"

# $()命令是运行括号中输入命令，然后将结果作为返回值。
# 在此处，首先是cd命令进入文件夹，进入哪个文件夹呢？
# ${BASH_SOURCE[0]}表示该脚本所在目录。
# 也就是进入了脚本所在的文件夹并返回两层后的文件夹，之后运行pwd命令输出路径
# 最后，将输出的路径作为返回值，赋值给PROJECT_HOME_DIR.
# 注意，在$()两边加上双引号，代表不运行命令，只是获取输出结果。
PROJECT_HOME_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")/../../" && pwd)"
echo "project path: $PROJECT_HOME_DIR"

display=""

# -z表示判断是否为空，此处意为判断DISPLAY环境变量是否为空
# 如果为空，则赋值为":1"，这是一个典型的X Window System中的显示器编号，用于指定图形界面的显示屏
if [ -z ${DISPLAY} ];then
    display=":1"
else
    display="${DISPLAY}"
fi

# 主机名
local_host="$(hostname)"
# 用户名
user="${USER}" 
# uid用来表示用户的唯一id，root的id为0，本账户为1000
uid="$(id -u)"
#组名
group="$(id -g -n)"
# gid组id
gid="$(id -g)"


echo "stop and remove docker"

# 停止正在运行的docker并删除
# > /dev/null 表示将输出结果重定向到/dev/null 这是linux的特殊的设备文件，会将一切写入的数据丢弃，不会在终端上显示，这在自动化脚本中很有用
# 注意，这个操作只会重定向标准输出，不会重定向标准错误stderr。因此如果报错就会在终端显示
# 如果报错都不想看，那么在要使用 docker stop linux_monitor > /dev/null 2>&1
# rm -v -f    -v参数表示删除相关联的数据卷，-f表示强制删除
docker stop rpc_monitor > /dev/null 2&>1
docker rm -v -f rpc_monitor > /dev/null 2&>1

echo "docker building"

# -it表示交互模式，会打开一个交互式终端。it一般连用，i表示交互，t表示Teletypewriter，表示伪终端。-d表示后台运行
# docker支持参数连写，所以itd既可以连在一起也可以分开
# --name rpc_monitor表示容器名字。
# -e表示设置环境变量
# -v表示挂载文件夹，-v ${PROJECT_HOME_DIR}:/work 即把项目文件夹挂载到容器的work下。也就是映射到那里
# -v ${XDG_RUNTIME_DIR}:${XDG_RUNTIME_DIR}：XDG_RUNTIME_DIR 是一个环境变量，通常在Linux系统中用于指定用户运行时文件的目录。
# XDG_RUNTIME_DIR 的默认值是/run/user/<user_id>
# 这个目录在用户登录时创建，并在用户注销时删除，因此它是一个安全的临时目录，用于存储运行时文件。
# 这一行用于将当前用户的 XDG_RUNTIME_DIR 环境变量传递给Docker容器，以便容器内的应用程序可以使用它来访问正确的运行时目录。
# 这对于运行需要图形界面或进程间通信的应用程序非常重要，以确保它们可以正常工作。
# --net host表示将容器连接到主机网络
# rpc_monitor:1.0 表示使用名字为rpc_monitor:1.0的镜像来创建容器
docker run -itd --name rpc_monitor \
-e DISPLAY="${display}" \
-e DOCKER_USER="${user}" \
-e USER="${user}" \
-e DOCKER_USER_ID="${uid}" \
-e DOCKER_GRP="${group}" \
-e DOCKER_GRP_ID="${gid}" \
-e XDG_RUNTIME_DIR="${XDG_RUNTIME_DIR}" \
-v ${PROJECT_HOME_DIR}:/work \
-v ${XDG_RUNTIME_DIR}:${XDG_RUNTIME_DIR} \
-v /proc:/tmp_proc \
--net host \
rpc_monitor:1.0
