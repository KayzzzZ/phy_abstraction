# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
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
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/kay/openairinterface5g/cmake_targets/oaisim_noS1_build_oai

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kay/openairinterface5g/cmake_targets/oaisim_noS1_build_oai/build

# Include any dependencies generated for this target.
include CMakeFiles/oai_bladerfdevif.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/oai_bladerfdevif.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/oai_bladerfdevif.dir/flags.make

CMakeFiles/oai_bladerfdevif.dir/home/kay/openairinterface5g/targets/ARCH/BLADERF/USERSPACE/LIB/bladerf_lib.c.o: CMakeFiles/oai_bladerfdevif.dir/flags.make
CMakeFiles/oai_bladerfdevif.dir/home/kay/openairinterface5g/targets/ARCH/BLADERF/USERSPACE/LIB/bladerf_lib.c.o: /home/kay/openairinterface5g/targets/ARCH/BLADERF/USERSPACE/LIB/bladerf_lib.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kay/openairinterface5g/cmake_targets/oaisim_noS1_build_oai/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/oai_bladerfdevif.dir/home/kay/openairinterface5g/targets/ARCH/BLADERF/USERSPACE/LIB/bladerf_lib.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/oai_bladerfdevif.dir/home/kay/openairinterface5g/targets/ARCH/BLADERF/USERSPACE/LIB/bladerf_lib.c.o   -c /home/kay/openairinterface5g/targets/ARCH/BLADERF/USERSPACE/LIB/bladerf_lib.c

CMakeFiles/oai_bladerfdevif.dir/home/kay/openairinterface5g/targets/ARCH/BLADERF/USERSPACE/LIB/bladerf_lib.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/oai_bladerfdevif.dir/home/kay/openairinterface5g/targets/ARCH/BLADERF/USERSPACE/LIB/bladerf_lib.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/kay/openairinterface5g/targets/ARCH/BLADERF/USERSPACE/LIB/bladerf_lib.c > CMakeFiles/oai_bladerfdevif.dir/home/kay/openairinterface5g/targets/ARCH/BLADERF/USERSPACE/LIB/bladerf_lib.c.i

CMakeFiles/oai_bladerfdevif.dir/home/kay/openairinterface5g/targets/ARCH/BLADERF/USERSPACE/LIB/bladerf_lib.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/oai_bladerfdevif.dir/home/kay/openairinterface5g/targets/ARCH/BLADERF/USERSPACE/LIB/bladerf_lib.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/kay/openairinterface5g/targets/ARCH/BLADERF/USERSPACE/LIB/bladerf_lib.c -o CMakeFiles/oai_bladerfdevif.dir/home/kay/openairinterface5g/targets/ARCH/BLADERF/USERSPACE/LIB/bladerf_lib.c.s

CMakeFiles/oai_bladerfdevif.dir/home/kay/openairinterface5g/targets/ARCH/BLADERF/USERSPACE/LIB/bladerf_lib.c.o.requires:

.PHONY : CMakeFiles/oai_bladerfdevif.dir/home/kay/openairinterface5g/targets/ARCH/BLADERF/USERSPACE/LIB/bladerf_lib.c.o.requires

CMakeFiles/oai_bladerfdevif.dir/home/kay/openairinterface5g/targets/ARCH/BLADERF/USERSPACE/LIB/bladerf_lib.c.o.provides: CMakeFiles/oai_bladerfdevif.dir/home/kay/openairinterface5g/targets/ARCH/BLADERF/USERSPACE/LIB/bladerf_lib.c.o.requires
	$(MAKE) -f CMakeFiles/oai_bladerfdevif.dir/build.make CMakeFiles/oai_bladerfdevif.dir/home/kay/openairinterface5g/targets/ARCH/BLADERF/USERSPACE/LIB/bladerf_lib.c.o.provides.build
.PHONY : CMakeFiles/oai_bladerfdevif.dir/home/kay/openairinterface5g/targets/ARCH/BLADERF/USERSPACE/LIB/bladerf_lib.c.o.provides

CMakeFiles/oai_bladerfdevif.dir/home/kay/openairinterface5g/targets/ARCH/BLADERF/USERSPACE/LIB/bladerf_lib.c.o.provides.build: CMakeFiles/oai_bladerfdevif.dir/home/kay/openairinterface5g/targets/ARCH/BLADERF/USERSPACE/LIB/bladerf_lib.c.o


# Object files for target oai_bladerfdevif
oai_bladerfdevif_OBJECTS = \
"CMakeFiles/oai_bladerfdevif.dir/home/kay/openairinterface5g/targets/ARCH/BLADERF/USERSPACE/LIB/bladerf_lib.c.o"

# External object files for target oai_bladerfdevif
oai_bladerfdevif_EXTERNAL_OBJECTS =

liboai_bladerfdevif.so: CMakeFiles/oai_bladerfdevif.dir/home/kay/openairinterface5g/targets/ARCH/BLADERF/USERSPACE/LIB/bladerf_lib.c.o
liboai_bladerfdevif.so: CMakeFiles/oai_bladerfdevif.dir/build.make
liboai_bladerfdevif.so: CMakeFiles/oai_bladerfdevif.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kay/openairinterface5g/cmake_targets/oaisim_noS1_build_oai/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C shared module liboai_bladerfdevif.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/oai_bladerfdevif.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/oai_bladerfdevif.dir/build: liboai_bladerfdevif.so

.PHONY : CMakeFiles/oai_bladerfdevif.dir/build

CMakeFiles/oai_bladerfdevif.dir/requires: CMakeFiles/oai_bladerfdevif.dir/home/kay/openairinterface5g/targets/ARCH/BLADERF/USERSPACE/LIB/bladerf_lib.c.o.requires

.PHONY : CMakeFiles/oai_bladerfdevif.dir/requires

CMakeFiles/oai_bladerfdevif.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/oai_bladerfdevif.dir/cmake_clean.cmake
.PHONY : CMakeFiles/oai_bladerfdevif.dir/clean

CMakeFiles/oai_bladerfdevif.dir/depend:
	cd /home/kay/openairinterface5g/cmake_targets/oaisim_noS1_build_oai/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kay/openairinterface5g/cmake_targets/oaisim_noS1_build_oai /home/kay/openairinterface5g/cmake_targets/oaisim_noS1_build_oai /home/kay/openairinterface5g/cmake_targets/oaisim_noS1_build_oai/build /home/kay/openairinterface5g/cmake_targets/oaisim_noS1_build_oai/build /home/kay/openairinterface5g/cmake_targets/oaisim_noS1_build_oai/build/CMakeFiles/oai_bladerfdevif.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/oai_bladerfdevif.dir/depend

