#!/bin/bash

# 颜色输出
color_echo()
{
    local color="$1"
    local text="$2"
    echo -e "\e[${color}m${text}\e[0m"
}

#定义颜色
RED="1;31"
GREEN="1;32"
