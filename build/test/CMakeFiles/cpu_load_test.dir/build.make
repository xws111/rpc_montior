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
include test/CMakeFiles/cpu_load_test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include test/CMakeFiles/cpu_load_test.dir/compiler_depend.make

# Include the progress variables for this target.
include test/CMakeFiles/cpu_load_test.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/cpu_load_test.dir/flags.make

test/CMakeFiles/cpu_load_test.dir/cpu_load/cpu_load_test.cpp.o: test/CMakeFiles/cpu_load_test.dir/flags.make
test/CMakeFiles/cpu_load_test.dir/cpu_load/cpu_load_test.cpp.o: ../test/cpu_load/cpu_load_test.cpp
test/CMakeFiles/cpu_load_test.dir/cpu_load/cpu_load_test.cpp.o: test/CMakeFiles/cpu_load_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xg/work/rpc_montior/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/CMakeFiles/cpu_load_test.dir/cpu_load/cpu_load_test.cpp.o"
	cd /home/xg/work/rpc_montior/build/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT test/CMakeFiles/cpu_load_test.dir/cpu_load/cpu_load_test.cpp.o -MF CMakeFiles/cpu_load_test.dir/cpu_load/cpu_load_test.cpp.o.d -o CMakeFiles/cpu_load_test.dir/cpu_load/cpu_load_test.cpp.o -c /home/xg/work/rpc_montior/test/cpu_load/cpu_load_test.cpp

test/CMakeFiles/cpu_load_test.dir/cpu_load/cpu_load_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpu_load_test.dir/cpu_load/cpu_load_test.cpp.i"
	cd /home/xg/work/rpc_montior/build/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/xg/work/rpc_montior/test/cpu_load/cpu_load_test.cpp > CMakeFiles/cpu_load_test.dir/cpu_load/cpu_load_test.cpp.i

test/CMakeFiles/cpu_load_test.dir/cpu_load/cpu_load_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpu_load_test.dir/cpu_load/cpu_load_test.cpp.s"
	cd /home/xg/work/rpc_montior/build/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/xg/work/rpc_montior/test/cpu_load/cpu_load_test.cpp -o CMakeFiles/cpu_load_test.dir/cpu_load/cpu_load_test.cpp.s

test/CMakeFiles/cpu_load_test.dir/__/src/monitor/cpu_load_monitor.cpp.o: test/CMakeFiles/cpu_load_test.dir/flags.make
test/CMakeFiles/cpu_load_test.dir/__/src/monitor/cpu_load_monitor.cpp.o: ../src/monitor/cpu_load_monitor.cpp
test/CMakeFiles/cpu_load_test.dir/__/src/monitor/cpu_load_monitor.cpp.o: test/CMakeFiles/cpu_load_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xg/work/rpc_montior/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object test/CMakeFiles/cpu_load_test.dir/__/src/monitor/cpu_load_monitor.cpp.o"
	cd /home/xg/work/rpc_montior/build/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT test/CMakeFiles/cpu_load_test.dir/__/src/monitor/cpu_load_monitor.cpp.o -MF CMakeFiles/cpu_load_test.dir/__/src/monitor/cpu_load_monitor.cpp.o.d -o CMakeFiles/cpu_load_test.dir/__/src/monitor/cpu_load_monitor.cpp.o -c /home/xg/work/rpc_montior/src/monitor/cpu_load_monitor.cpp

test/CMakeFiles/cpu_load_test.dir/__/src/monitor/cpu_load_monitor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpu_load_test.dir/__/src/monitor/cpu_load_monitor.cpp.i"
	cd /home/xg/work/rpc_montior/build/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/xg/work/rpc_montior/src/monitor/cpu_load_monitor.cpp > CMakeFiles/cpu_load_test.dir/__/src/monitor/cpu_load_monitor.cpp.i

test/CMakeFiles/cpu_load_test.dir/__/src/monitor/cpu_load_monitor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpu_load_test.dir/__/src/monitor/cpu_load_monitor.cpp.s"
	cd /home/xg/work/rpc_montior/build/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/xg/work/rpc_montior/src/monitor/cpu_load_monitor.cpp -o CMakeFiles/cpu_load_test.dir/__/src/monitor/cpu_load_monitor.cpp.s

test/CMakeFiles/cpu_load_test.dir/__/src/utils/read_file.cpp.o: test/CMakeFiles/cpu_load_test.dir/flags.make
test/CMakeFiles/cpu_load_test.dir/__/src/utils/read_file.cpp.o: ../src/utils/read_file.cpp
test/CMakeFiles/cpu_load_test.dir/__/src/utils/read_file.cpp.o: test/CMakeFiles/cpu_load_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xg/work/rpc_montior/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object test/CMakeFiles/cpu_load_test.dir/__/src/utils/read_file.cpp.o"
	cd /home/xg/work/rpc_montior/build/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT test/CMakeFiles/cpu_load_test.dir/__/src/utils/read_file.cpp.o -MF CMakeFiles/cpu_load_test.dir/__/src/utils/read_file.cpp.o.d -o CMakeFiles/cpu_load_test.dir/__/src/utils/read_file.cpp.o -c /home/xg/work/rpc_montior/src/utils/read_file.cpp

test/CMakeFiles/cpu_load_test.dir/__/src/utils/read_file.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpu_load_test.dir/__/src/utils/read_file.cpp.i"
	cd /home/xg/work/rpc_montior/build/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/xg/work/rpc_montior/src/utils/read_file.cpp > CMakeFiles/cpu_load_test.dir/__/src/utils/read_file.cpp.i

test/CMakeFiles/cpu_load_test.dir/__/src/utils/read_file.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpu_load_test.dir/__/src/utils/read_file.cpp.s"
	cd /home/xg/work/rpc_montior/build/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/xg/work/rpc_montior/src/utils/read_file.cpp -o CMakeFiles/cpu_load_test.dir/__/src/utils/read_file.cpp.s

# Object files for target cpu_load_test
cpu_load_test_OBJECTS = \
"CMakeFiles/cpu_load_test.dir/cpu_load/cpu_load_test.cpp.o" \
"CMakeFiles/cpu_load_test.dir/__/src/monitor/cpu_load_monitor.cpp.o" \
"CMakeFiles/cpu_load_test.dir/__/src/utils/read_file.cpp.o"

# External object files for target cpu_load_test
cpu_load_test_EXTERNAL_OBJECTS =

test/cpu_load_test: test/CMakeFiles/cpu_load_test.dir/cpu_load/cpu_load_test.cpp.o
test/cpu_load_test: test/CMakeFiles/cpu_load_test.dir/__/src/monitor/cpu_load_monitor.cpp.o
test/cpu_load_test: test/CMakeFiles/cpu_load_test.dir/__/src/utils/read_file.cpp.o
test/cpu_load_test: test/CMakeFiles/cpu_load_test.dir/build.make
test/cpu_load_test: lib/libgtest_main.a
test/cpu_load_test: tools/proto/libmonitor_proto.a
test/cpu_load_test: lib/libgtest.a
test/cpu_load_test: /lib/libgrpc++.a
test/cpu_load_test: /usr/local/lib/libprotobuf.so.3.14.0.0
test/cpu_load_test: /usr/lib/x86_64-linux-gnu/libz.so
test/cpu_load_test: /lib/libgrpc.a
test/cpu_load_test: /lib/libre2.a
test/cpu_load_test: /lib/libupb_json_lib.a
test/cpu_load_test: /lib/libupb_textformat_lib.a
test/cpu_load_test: /lib/libupb_collections_lib.a
test/cpu_load_test: /lib/libupb.a
test/cpu_load_test: /lib/libutf8_range_lib.a
test/cpu_load_test: /lib/libz.a
test/cpu_load_test: /lib/libabsl_statusor.a
test/cpu_load_test: /lib/libcares.a
test/cpu_load_test: /lib/libgpr.a
test/cpu_load_test: /lib/libabsl_status.a
test/cpu_load_test: /lib/libabsl_strerror.a
test/cpu_load_test: /lib/libabsl_flags.a
test/cpu_load_test: /lib/libabsl_flags_internal.a
test/cpu_load_test: /lib/libabsl_flags_reflection.a
test/cpu_load_test: /lib/libabsl_raw_hash_set.a
test/cpu_load_test: /lib/libabsl_hash.a
test/cpu_load_test: /lib/libabsl_city.a
test/cpu_load_test: /lib/libabsl_bad_variant_access.a
test/cpu_load_test: /lib/libabsl_low_level_hash.a
test/cpu_load_test: /lib/libabsl_hashtablez_sampler.a
test/cpu_load_test: /lib/libabsl_flags_config.a
test/cpu_load_test: /lib/libabsl_flags_program_name.a
test/cpu_load_test: /lib/libabsl_flags_private_handle_accessor.a
test/cpu_load_test: /lib/libabsl_flags_commandlineflag.a
test/cpu_load_test: /lib/libabsl_flags_commandlineflag_internal.a
test/cpu_load_test: /lib/libabsl_flags_marshalling.a
test/cpu_load_test: /lib/libabsl_random_distributions.a
test/cpu_load_test: /lib/libabsl_random_seed_sequences.a
test/cpu_load_test: /lib/libabsl_random_internal_pool_urbg.a
test/cpu_load_test: /lib/libabsl_random_internal_randen.a
test/cpu_load_test: /lib/libabsl_random_internal_randen_hwaes.a
test/cpu_load_test: /lib/libabsl_random_internal_randen_hwaes_impl.a
test/cpu_load_test: /lib/libabsl_random_internal_randen_slow.a
test/cpu_load_test: /lib/libabsl_random_internal_platform.a
test/cpu_load_test: /lib/libabsl_random_internal_seed_material.a
test/cpu_load_test: /lib/libabsl_random_seed_gen_exception.a
test/cpu_load_test: /lib/libabsl_cord.a
test/cpu_load_test: /lib/libabsl_bad_optional_access.a
test/cpu_load_test: /lib/libabsl_cordz_info.a
test/cpu_load_test: /lib/libabsl_cord_internal.a
test/cpu_load_test: /lib/libabsl_cordz_functions.a
test/cpu_load_test: /lib/libabsl_exponential_biased.a
test/cpu_load_test: /lib/libabsl_cordz_handle.a
test/cpu_load_test: /lib/libabsl_crc_cord_state.a
test/cpu_load_test: /lib/libabsl_crc32c.a
test/cpu_load_test: /lib/libabsl_crc_internal.a
test/cpu_load_test: /lib/libabsl_crc_cpu_detect.a
test/cpu_load_test: /lib/libabsl_str_format_internal.a
test/cpu_load_test: /lib/libabsl_synchronization.a
test/cpu_load_test: /lib/libabsl_stacktrace.a
test/cpu_load_test: /lib/libabsl_symbolize.a
test/cpu_load_test: /lib/libabsl_debugging_internal.a
test/cpu_load_test: /lib/libabsl_demangle_internal.a
test/cpu_load_test: /lib/libabsl_graphcycles_internal.a
test/cpu_load_test: /lib/libabsl_kernel_timeout_internal.a
test/cpu_load_test: /lib/libabsl_malloc_internal.a
test/cpu_load_test: /lib/libabsl_time.a
test/cpu_load_test: /lib/libabsl_strings.a
test/cpu_load_test: /lib/libabsl_int128.a
test/cpu_load_test: /lib/libabsl_string_view.a
test/cpu_load_test: /lib/libabsl_throw_delegate.a
test/cpu_load_test: /lib/libabsl_strings_internal.a
test/cpu_load_test: /lib/libabsl_base.a
test/cpu_load_test: /lib/libabsl_spinlock_wait.a
test/cpu_load_test: /lib/libabsl_raw_logging_internal.a
test/cpu_load_test: /lib/libabsl_log_severity.a
test/cpu_load_test: /lib/libabsl_civil_time.a
test/cpu_load_test: /lib/libabsl_time_zone.a
test/cpu_load_test: /lib/libssl.a
test/cpu_load_test: /lib/libcrypto.a
test/cpu_load_test: /lib/libaddress_sorting.a
test/cpu_load_test: /usr/lib/x86_64-linux-gnu/libsystemd.so
test/cpu_load_test: test/CMakeFiles/cpu_load_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/xg/work/rpc_montior/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable cpu_load_test"
	cd /home/xg/work/rpc_montior/build/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cpu_load_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/cpu_load_test.dir/build: test/cpu_load_test
.PHONY : test/CMakeFiles/cpu_load_test.dir/build

test/CMakeFiles/cpu_load_test.dir/clean:
	cd /home/xg/work/rpc_montior/build/test && $(CMAKE_COMMAND) -P CMakeFiles/cpu_load_test.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/cpu_load_test.dir/clean

test/CMakeFiles/cpu_load_test.dir/depend:
	cd /home/xg/work/rpc_montior/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/xg/work/rpc_montior /home/xg/work/rpc_montior/test /home/xg/work/rpc_montior/build /home/xg/work/rpc_montior/build/test /home/xg/work/rpc_montior/build/test/CMakeFiles/cpu_load_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/cpu_load_test.dir/depend

