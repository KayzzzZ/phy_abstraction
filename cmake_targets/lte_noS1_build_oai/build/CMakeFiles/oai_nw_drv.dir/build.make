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
CMAKE_SOURCE_DIR = /home/kay/openairinterface5g/cmake_targets/lte_noS1_build_oai

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kay/openairinterface5g/cmake_targets/lte_noS1_build_oai/build

# Utility rule file for oai_nw_drv.

# Include the progress variables for this target.
include CMakeFiles/oai_nw_drv.dir/progress.make

CMakeFiles/oai_nw_drv: oai_nw_drv.ko


oai_nw_drv.ko:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/kay/openairinterface5g/cmake_targets/lte_noS1_build_oai/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) /home/kay/openairinterface5g/openair2/NETWORK_DRIVER/LITE/netlink.c
	cd /home/kay/openairinterface5g/cmake_targets/lte_noS1_build_oai/build/CMakeFiles/oai_nw_drv && make -C /lib/modules/4.10.0-28-generic/build M=/home/kay/openairinterface5g/cmake_targets/lte_noS1_build_oai/build/CMakeFiles/oai_nw_drv

oai_nw_drv: CMakeFiles/oai_nw_drv
oai_nw_drv: oai_nw_drv.ko
oai_nw_drv: CMakeFiles/oai_nw_drv.dir/build.make

.PHONY : oai_nw_drv

# Rule to build all files generated by this target.
CMakeFiles/oai_nw_drv.dir/build: oai_nw_drv

.PHONY : CMakeFiles/oai_nw_drv.dir/build

CMakeFiles/oai_nw_drv.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/oai_nw_drv.dir/cmake_clean.cmake
.PHONY : CMakeFiles/oai_nw_drv.dir/clean

CMakeFiles/oai_nw_drv.dir/depend:
	cd /home/kay/openairinterface5g/cmake_targets/lte_noS1_build_oai/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kay/openairinterface5g/cmake_targets/lte_noS1_build_oai /home/kay/openairinterface5g/cmake_targets/lte_noS1_build_oai /home/kay/openairinterface5g/cmake_targets/lte_noS1_build_oai/build /home/kay/openairinterface5g/cmake_targets/lte_noS1_build_oai/build /home/kay/openairinterface5g/cmake_targets/lte_noS1_build_oai/build/CMakeFiles/oai_nw_drv.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/oai_nw_drv.dir/depend

