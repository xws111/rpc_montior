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
include src/monitor/CMakeFiles/monitor.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/monitor/CMakeFiles/monitor.dir/compiler_depend.make

# Include the progress variables for this target.
include src/monitor/CMakeFiles/monitor.dir/progress.make

# Include the compile flags for this target's objects.
include src/monitor/CMakeFiles/monitor.dir/flags.make

src/monitor/CMakeFiles/monitor.dir/main.cpp.o: src/monitor/CMakeFiles/monitor.dir/flags.make
src/monitor/CMakeFiles/monitor.dir/main.cpp.o: /work/src/monitor/main.cpp
src/monitor/CMakeFiles/monitor.dir/main.cpp.o: src/monitor/CMakeFiles/monitor.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/monitor/CMakeFiles/monitor.dir/main.cpp.o"
	cd /work/cmake/src/monitor && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/monitor/CMakeFiles/monitor.dir/main.cpp.o -MF CMakeFiles/monitor.dir/main.cpp.o.d -o CMakeFiles/monitor.dir/main.cpp.o -c /work/src/monitor/main.cpp

src/monitor/CMakeFiles/monitor.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/monitor.dir/main.cpp.i"
	cd /work/cmake/src/monitor && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/src/monitor/main.cpp > CMakeFiles/monitor.dir/main.cpp.i

src/monitor/CMakeFiles/monitor.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/monitor.dir/main.cpp.s"
	cd /work/cmake/src/monitor && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/src/monitor/main.cpp -o CMakeFiles/monitor.dir/main.cpp.s

src/monitor/CMakeFiles/monitor.dir/cpu_softirq_monitor.cpp.o: src/monitor/CMakeFiles/monitor.dir/flags.make
src/monitor/CMakeFiles/monitor.dir/cpu_softirq_monitor.cpp.o: /work/src/monitor/cpu_softirq_monitor.cpp
src/monitor/CMakeFiles/monitor.dir/cpu_softirq_monitor.cpp.o: src/monitor/CMakeFiles/monitor.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/monitor/CMakeFiles/monitor.dir/cpu_softirq_monitor.cpp.o"
	cd /work/cmake/src/monitor && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/monitor/CMakeFiles/monitor.dir/cpu_softirq_monitor.cpp.o -MF CMakeFiles/monitor.dir/cpu_softirq_monitor.cpp.o.d -o CMakeFiles/monitor.dir/cpu_softirq_monitor.cpp.o -c /work/src/monitor/cpu_softirq_monitor.cpp

src/monitor/CMakeFiles/monitor.dir/cpu_softirq_monitor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/monitor.dir/cpu_softirq_monitor.cpp.i"
	cd /work/cmake/src/monitor && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/src/monitor/cpu_softirq_monitor.cpp > CMakeFiles/monitor.dir/cpu_softirq_monitor.cpp.i

src/monitor/CMakeFiles/monitor.dir/cpu_softirq_monitor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/monitor.dir/cpu_softirq_monitor.cpp.s"
	cd /work/cmake/src/monitor && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/src/monitor/cpu_softirq_monitor.cpp -o CMakeFiles/monitor.dir/cpu_softirq_monitor.cpp.s

src/monitor/CMakeFiles/monitor.dir/cpu_load_monitor.cpp.o: src/monitor/CMakeFiles/monitor.dir/flags.make
src/monitor/CMakeFiles/monitor.dir/cpu_load_monitor.cpp.o: /work/src/monitor/cpu_load_monitor.cpp
src/monitor/CMakeFiles/monitor.dir/cpu_load_monitor.cpp.o: src/monitor/CMakeFiles/monitor.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/monitor/CMakeFiles/monitor.dir/cpu_load_monitor.cpp.o"
	cd /work/cmake/src/monitor && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/monitor/CMakeFiles/monitor.dir/cpu_load_monitor.cpp.o -MF CMakeFiles/monitor.dir/cpu_load_monitor.cpp.o.d -o CMakeFiles/monitor.dir/cpu_load_monitor.cpp.o -c /work/src/monitor/cpu_load_monitor.cpp

src/monitor/CMakeFiles/monitor.dir/cpu_load_monitor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/monitor.dir/cpu_load_monitor.cpp.i"
	cd /work/cmake/src/monitor && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/src/monitor/cpu_load_monitor.cpp > CMakeFiles/monitor.dir/cpu_load_monitor.cpp.i

src/monitor/CMakeFiles/monitor.dir/cpu_load_monitor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/monitor.dir/cpu_load_monitor.cpp.s"
	cd /work/cmake/src/monitor && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/src/monitor/cpu_load_monitor.cpp -o CMakeFiles/monitor.dir/cpu_load_monitor.cpp.s

src/monitor/CMakeFiles/monitor.dir/cpu_stat_monitor.cpp.o: src/monitor/CMakeFiles/monitor.dir/flags.make
src/monitor/CMakeFiles/monitor.dir/cpu_stat_monitor.cpp.o: /work/src/monitor/cpu_stat_monitor.cpp
src/monitor/CMakeFiles/monitor.dir/cpu_stat_monitor.cpp.o: src/monitor/CMakeFiles/monitor.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/monitor/CMakeFiles/monitor.dir/cpu_stat_monitor.cpp.o"
	cd /work/cmake/src/monitor && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/monitor/CMakeFiles/monitor.dir/cpu_stat_monitor.cpp.o -MF CMakeFiles/monitor.dir/cpu_stat_monitor.cpp.o.d -o CMakeFiles/monitor.dir/cpu_stat_monitor.cpp.o -c /work/src/monitor/cpu_stat_monitor.cpp

src/monitor/CMakeFiles/monitor.dir/cpu_stat_monitor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/monitor.dir/cpu_stat_monitor.cpp.i"
	cd /work/cmake/src/monitor && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/src/monitor/cpu_stat_monitor.cpp > CMakeFiles/monitor.dir/cpu_stat_monitor.cpp.i

src/monitor/CMakeFiles/monitor.dir/cpu_stat_monitor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/monitor.dir/cpu_stat_monitor.cpp.s"
	cd /work/cmake/src/monitor && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/src/monitor/cpu_stat_monitor.cpp -o CMakeFiles/monitor.dir/cpu_stat_monitor.cpp.s

src/monitor/CMakeFiles/monitor.dir/mem_monitor.cpp.o: src/monitor/CMakeFiles/monitor.dir/flags.make
src/monitor/CMakeFiles/monitor.dir/mem_monitor.cpp.o: /work/src/monitor/mem_monitor.cpp
src/monitor/CMakeFiles/monitor.dir/mem_monitor.cpp.o: src/monitor/CMakeFiles/monitor.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/monitor/CMakeFiles/monitor.dir/mem_monitor.cpp.o"
	cd /work/cmake/src/monitor && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/monitor/CMakeFiles/monitor.dir/mem_monitor.cpp.o -MF CMakeFiles/monitor.dir/mem_monitor.cpp.o.d -o CMakeFiles/monitor.dir/mem_monitor.cpp.o -c /work/src/monitor/mem_monitor.cpp

src/monitor/CMakeFiles/monitor.dir/mem_monitor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/monitor.dir/mem_monitor.cpp.i"
	cd /work/cmake/src/monitor && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/src/monitor/mem_monitor.cpp > CMakeFiles/monitor.dir/mem_monitor.cpp.i

src/monitor/CMakeFiles/monitor.dir/mem_monitor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/monitor.dir/mem_monitor.cpp.s"
	cd /work/cmake/src/monitor && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/src/monitor/mem_monitor.cpp -o CMakeFiles/monitor.dir/mem_monitor.cpp.s

src/monitor/CMakeFiles/monitor.dir/net_monitor.cpp.o: src/monitor/CMakeFiles/monitor.dir/flags.make
src/monitor/CMakeFiles/monitor.dir/net_monitor.cpp.o: /work/src/monitor/net_monitor.cpp
src/monitor/CMakeFiles/monitor.dir/net_monitor.cpp.o: src/monitor/CMakeFiles/monitor.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/monitor/CMakeFiles/monitor.dir/net_monitor.cpp.o"
	cd /work/cmake/src/monitor && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/monitor/CMakeFiles/monitor.dir/net_monitor.cpp.o -MF CMakeFiles/monitor.dir/net_monitor.cpp.o.d -o CMakeFiles/monitor.dir/net_monitor.cpp.o -c /work/src/monitor/net_monitor.cpp

src/monitor/CMakeFiles/monitor.dir/net_monitor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/monitor.dir/net_monitor.cpp.i"
	cd /work/cmake/src/monitor && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/src/monitor/net_monitor.cpp > CMakeFiles/monitor.dir/net_monitor.cpp.i

src/monitor/CMakeFiles/monitor.dir/net_monitor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/monitor.dir/net_monitor.cpp.s"
	cd /work/cmake/src/monitor && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/src/monitor/net_monitor.cpp -o CMakeFiles/monitor.dir/net_monitor.cpp.s

src/monitor/CMakeFiles/monitor.dir/__/utils/read_file.cpp.o: src/monitor/CMakeFiles/monitor.dir/flags.make
src/monitor/CMakeFiles/monitor.dir/__/utils/read_file.cpp.o: /work/src/utils/read_file.cpp
src/monitor/CMakeFiles/monitor.dir/__/utils/read_file.cpp.o: src/monitor/CMakeFiles/monitor.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object src/monitor/CMakeFiles/monitor.dir/__/utils/read_file.cpp.o"
	cd /work/cmake/src/monitor && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/monitor/CMakeFiles/monitor.dir/__/utils/read_file.cpp.o -MF CMakeFiles/monitor.dir/__/utils/read_file.cpp.o.d -o CMakeFiles/monitor.dir/__/utils/read_file.cpp.o -c /work/src/utils/read_file.cpp

src/monitor/CMakeFiles/monitor.dir/__/utils/read_file.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/monitor.dir/__/utils/read_file.cpp.i"
	cd /work/cmake/src/monitor && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/src/utils/read_file.cpp > CMakeFiles/monitor.dir/__/utils/read_file.cpp.i

src/monitor/CMakeFiles/monitor.dir/__/utils/read_file.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/monitor.dir/__/utils/read_file.cpp.s"
	cd /work/cmake/src/monitor && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/src/utils/read_file.cpp -o CMakeFiles/monitor.dir/__/utils/read_file.cpp.s

# Object files for target monitor
monitor_OBJECTS = \
"CMakeFiles/monitor.dir/main.cpp.o" \
"CMakeFiles/monitor.dir/cpu_softirq_monitor.cpp.o" \
"CMakeFiles/monitor.dir/cpu_load_monitor.cpp.o" \
"CMakeFiles/monitor.dir/cpu_stat_monitor.cpp.o" \
"CMakeFiles/monitor.dir/mem_monitor.cpp.o" \
"CMakeFiles/monitor.dir/net_monitor.cpp.o" \
"CMakeFiles/monitor.dir/__/utils/read_file.cpp.o"

# External object files for target monitor
monitor_EXTERNAL_OBJECTS =

src/monitor/monitor: src/monitor/CMakeFiles/monitor.dir/main.cpp.o
src/monitor/monitor: src/monitor/CMakeFiles/monitor.dir/cpu_softirq_monitor.cpp.o
src/monitor/monitor: src/monitor/CMakeFiles/monitor.dir/cpu_load_monitor.cpp.o
src/monitor/monitor: src/monitor/CMakeFiles/monitor.dir/cpu_stat_monitor.cpp.o
src/monitor/monitor: src/monitor/CMakeFiles/monitor.dir/mem_monitor.cpp.o
src/monitor/monitor: src/monitor/CMakeFiles/monitor.dir/net_monitor.cpp.o
src/monitor/monitor: src/monitor/CMakeFiles/monitor.dir/__/utils/read_file.cpp.o
src/monitor/monitor: src/monitor/CMakeFiles/monitor.dir/build.make
src/monitor/monitor: tools/proto/libmonitor_proto.a
src/monitor/monitor: src/client/libclient.a
src/monitor/monitor: tools/proto/libmonitor_proto.a
src/monitor/monitor: /usr/local/lib/libgrpc++.so.1.30.0
src/monitor/monitor: /usr/local/lib/libprotobuf.so.3.14.0.0
src/monitor/monitor: /usr/local/lib/libgrpc.so.10.0.0
src/monitor/monitor: /usr/lib/x86_64-linux-gnu/libz.so
src/monitor/monitor: /usr/lib/x86_64-linux-gnu/libssl.so
src/monitor/monitor: /usr/lib/x86_64-linux-gnu/libcrypto.so
src/monitor/monitor: /usr/lib/x86_64-linux-gnu/libcares.so
src/monitor/monitor: /usr/local/lib/libabsl_bad_optional_access.so
src/monitor/monitor: /usr/local/lib/libaddress_sorting.so.10.0.0
src/monitor/monitor: /usr/local/lib/libupb.so.10.0.0
src/monitor/monitor: /usr/local/lib/libgpr.so.10.0.0
src/monitor/monitor: /usr/local/lib/libabsl_time.so
src/monitor/monitor: /usr/local/lib/libabsl_civil_time.so
src/monitor/monitor: /usr/local/lib/libabsl_time_zone.so
src/monitor/monitor: /usr/local/lib/libabsl_str_format_internal.so
src/monitor/monitor: /usr/local/lib/libabsl_strings.so
src/monitor/monitor: /usr/local/lib/libabsl_strings_internal.so
src/monitor/monitor: /usr/local/lib/libabsl_base.so
src/monitor/monitor: /usr/local/lib/libabsl_dynamic_annotations.so
src/monitor/monitor: /usr/local/lib/libabsl_spinlock_wait.so
src/monitor/monitor: /usr/local/lib/libabsl_int128.so
src/monitor/monitor: /usr/local/lib/libabsl_throw_delegate.so
src/monitor/monitor: /usr/local/lib/libabsl_raw_logging_internal.so
src/monitor/monitor: /usr/local/lib/libabsl_log_severity.so
src/monitor/monitor: src/monitor/CMakeFiles/monitor.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/work/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable monitor"
	cd /work/cmake/src/monitor && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/monitor.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/monitor/CMakeFiles/monitor.dir/build: src/monitor/monitor
.PHONY : src/monitor/CMakeFiles/monitor.dir/build

src/monitor/CMakeFiles/monitor.dir/clean:
	cd /work/cmake/src/monitor && $(CMAKE_COMMAND) -P CMakeFiles/monitor.dir/cmake_clean.cmake
.PHONY : src/monitor/CMakeFiles/monitor.dir/clean

src/monitor/CMakeFiles/monitor.dir/depend:
	cd /work/cmake && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /work /work/src/monitor /work/cmake /work/cmake/src/monitor /work/cmake/src/monitor/CMakeFiles/monitor.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/monitor/CMakeFiles/monitor.dir/depend
