# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/xg/work/rpc_montior

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/xg/work/rpc_montior/build

# Include any dependencies generated for this target.
include src/client/CMakeFiles/client.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/client/CMakeFiles/client.dir/compiler_depend.make

# Include the progress variables for this target.
include src/client/CMakeFiles/client.dir/progress.make

# Include the compile flags for this target's objects.
include src/client/CMakeFiles/client.dir/flags.make

src/client/CMakeFiles/client.dir/rpc_client.cpp.o: src/client/CMakeFiles/client.dir/flags.make
src/client/CMakeFiles/client.dir/rpc_client.cpp.o: ../src/client/rpc_client.cpp
src/client/CMakeFiles/client.dir/rpc_client.cpp.o: src/client/CMakeFiles/client.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xg/work/rpc_montior/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/client/CMakeFiles/client.dir/rpc_client.cpp.o"
	cd /home/xg/work/rpc_montior/build/src/client && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/client/CMakeFiles/client.dir/rpc_client.cpp.o -MF CMakeFiles/client.dir/rpc_client.cpp.o.d -o CMakeFiles/client.dir/rpc_client.cpp.o -c /home/xg/work/rpc_montior/src/client/rpc_client.cpp

src/client/CMakeFiles/client.dir/rpc_client.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/client.dir/rpc_client.cpp.i"
	cd /home/xg/work/rpc_montior/build/src/client && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/xg/work/rpc_montior/src/client/rpc_client.cpp > CMakeFiles/client.dir/rpc_client.cpp.i

src/client/CMakeFiles/client.dir/rpc_client.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/client.dir/rpc_client.cpp.s"
	cd /home/xg/work/rpc_montior/build/src/client && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/xg/work/rpc_montior/src/client/rpc_client.cpp -o CMakeFiles/client.dir/rpc_client.cpp.s

# Object files for target client
client_OBJECTS = \
"CMakeFiles/client.dir/rpc_client.cpp.o"

# External object files for target client
client_EXTERNAL_OBJECTS =

src/client/libclient.a: src/client/CMakeFiles/client.dir/rpc_client.cpp.o
src/client/libclient.a: src/client/CMakeFiles/client.dir/build.make
src/client/libclient.a: src/client/CMakeFiles/client.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/xg/work/rpc_montior/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libclient.a"
	cd /home/xg/work/rpc_montior/build/src/client && $(CMAKE_COMMAND) -P CMakeFiles/client.dir/cmake_clean_target.cmake
	cd /home/xg/work/rpc_montior/build/src/client && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/client.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/client/CMakeFiles/client.dir/build: src/client/libclient.a
.PHONY : src/client/CMakeFiles/client.dir/build

src/client/CMakeFiles/client.dir/clean:
	cd /home/xg/work/rpc_montior/build/src/client && $(CMAKE_COMMAND) -P CMakeFiles/client.dir/cmake_clean.cmake
.PHONY : src/client/CMakeFiles/client.dir/clean

src/client/CMakeFiles/client.dir/depend:
	cd /home/xg/work/rpc_montior/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/xg/work/rpc_montior /home/xg/work/rpc_montior/src/client /home/xg/work/rpc_montior/build /home/xg/work/rpc_montior/build/src/client /home/xg/work/rpc_montior/build/src/client/CMakeFiles/client.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/client/CMakeFiles/client.dir/depend
