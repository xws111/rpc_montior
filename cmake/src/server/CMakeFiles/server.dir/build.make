# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /work

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /work/cmake

# Include any dependencies generated for this target.
include src/server/CMakeFiles/server.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/server/CMakeFiles/server.dir/compiler_depend.make

# Include the progress variables for this target.
include src/server/CMakeFiles/server.dir/progress.make

# Include the compile flags for this target's objects.
include src/server/CMakeFiles/server.dir/flags.make

src/server/CMakeFiles/server.dir/main.cpp.o: src/server/CMakeFiles/server.dir/flags.make
src/server/CMakeFiles/server.dir/main.cpp.o: /work/src/server/main.cpp
src/server/CMakeFiles/server.dir/main.cpp.o: src/server/CMakeFiles/server.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/server/CMakeFiles/server.dir/main.cpp.o"
	cd /work/cmake/src/server && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/server/CMakeFiles/server.dir/main.cpp.o -MF CMakeFiles/server.dir/main.cpp.o.d -o CMakeFiles/server.dir/main.cpp.o -c /work/src/server/main.cpp

src/server/CMakeFiles/server.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server.dir/main.cpp.i"
	cd /work/cmake/src/server && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/src/server/main.cpp > CMakeFiles/server.dir/main.cpp.i

src/server/CMakeFiles/server.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server.dir/main.cpp.s"
	cd /work/cmake/src/server && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/src/server/main.cpp -o CMakeFiles/server.dir/main.cpp.s

src/server/CMakeFiles/server.dir/rpc_manager.cpp.o: src/server/CMakeFiles/server.dir/flags.make
src/server/CMakeFiles/server.dir/rpc_manager.cpp.o: /work/src/server/rpc_manager.cpp
src/server/CMakeFiles/server.dir/rpc_manager.cpp.o: src/server/CMakeFiles/server.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/server/CMakeFiles/server.dir/rpc_manager.cpp.o"
	cd /work/cmake/src/server && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/server/CMakeFiles/server.dir/rpc_manager.cpp.o -MF CMakeFiles/server.dir/rpc_manager.cpp.o.d -o CMakeFiles/server.dir/rpc_manager.cpp.o -c /work/src/server/rpc_manager.cpp

src/server/CMakeFiles/server.dir/rpc_manager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server.dir/rpc_manager.cpp.i"
	cd /work/cmake/src/server && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/src/server/rpc_manager.cpp > CMakeFiles/server.dir/rpc_manager.cpp.i

src/server/CMakeFiles/server.dir/rpc_manager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server.dir/rpc_manager.cpp.s"
	cd /work/cmake/src/server && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/src/server/rpc_manager.cpp -o CMakeFiles/server.dir/rpc_manager.cpp.s

# Object files for target server
server_OBJECTS = \
"CMakeFiles/server.dir/main.cpp.o" \
"CMakeFiles/server.dir/rpc_manager.cpp.o"

# External object files for target server
server_EXTERNAL_OBJECTS =

src/server/server: src/server/CMakeFiles/server.dir/main.cpp.o
src/server/server: src/server/CMakeFiles/server.dir/rpc_manager.cpp.o
src/server/server: src/server/CMakeFiles/server.dir/build.make
src/server/server: tools/proto/libmonitor_proto.a
src/server/server: /usr/local/lib/libgrpc++.so.1.30.0
src/server/server: /usr/local/lib/libprotobuf.so.3.14.0.0
src/server/server: /usr/local/lib/libgrpc.so.10.0.0
src/server/server: /usr/lib/x86_64-linux-gnu/libz.so
src/server/server: /usr/lib/x86_64-linux-gnu/libssl.so
src/server/server: /usr/lib/x86_64-linux-gnu/libcrypto.so
src/server/server: /usr/lib/x86_64-linux-gnu/libcares.so
src/server/server: /usr/local/lib/libabsl_bad_optional_access.so
src/server/server: /usr/local/lib/libaddress_sorting.so.10.0.0
src/server/server: /usr/local/lib/libupb.so.10.0.0
src/server/server: /usr/local/lib/libgpr.so.10.0.0
src/server/server: /usr/local/lib/libabsl_time.so
src/server/server: /usr/local/lib/libabsl_civil_time.so
src/server/server: /usr/local/lib/libabsl_time_zone.so
src/server/server: /usr/local/lib/libabsl_str_format_internal.so
src/server/server: /usr/local/lib/libabsl_strings.so
src/server/server: /usr/local/lib/libabsl_strings_internal.so
src/server/server: /usr/local/lib/libabsl_base.so
src/server/server: /usr/local/lib/libabsl_dynamic_annotations.so
src/server/server: /usr/local/lib/libabsl_spinlock_wait.so
src/server/server: /usr/local/lib/libabsl_int128.so
src/server/server: /usr/local/lib/libabsl_throw_delegate.so
src/server/server: /usr/local/lib/libabsl_raw_logging_internal.so
src/server/server: /usr/local/lib/libabsl_log_severity.so
src/server/server: src/server/CMakeFiles/server.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/work/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable server"
	cd /work/cmake/src/server && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/server.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/server/CMakeFiles/server.dir/build: src/server/server
.PHONY : src/server/CMakeFiles/server.dir/build

src/server/CMakeFiles/server.dir/clean:
	cd /work/cmake/src/server && $(CMAKE_COMMAND) -P CMakeFiles/server.dir/cmake_clean.cmake
.PHONY : src/server/CMakeFiles/server.dir/clean

src/server/CMakeFiles/server.dir/depend:
	cd /work/cmake && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /work /work/src/server /work/cmake /work/cmake/src/server /work/cmake/src/server/CMakeFiles/server.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/server/CMakeFiles/server.dir/depend

