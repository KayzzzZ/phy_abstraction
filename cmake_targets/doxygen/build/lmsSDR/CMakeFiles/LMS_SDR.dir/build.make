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
CMAKE_SOURCE_DIR = /home/kay/openairinterface5g/cmake_targets/doxygen

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kay/openairinterface5g/cmake_targets/doxygen/build

# Include any dependencies generated for this target.
include lmsSDR/CMakeFiles/LMS_SDR.dir/depend.make

# Include the progress variables for this target.
include lmsSDR/CMakeFiles/LMS_SDR.dir/progress.make

# Include the compile flags for this target's objects.
include lmsSDR/CMakeFiles/LMS_SDR.dir/flags.make

lmsSDR/CMakeFiles/LMS_SDR.dir/LMS_SDR.cpp.o: lmsSDR/CMakeFiles/LMS_SDR.dir/flags.make
lmsSDR/CMakeFiles/LMS_SDR.dir/LMS_SDR.cpp.o: /home/kay/openairinterface5g/targets/ARCH/LMSSDR/USERSPACE/LIB/lmsSDR/LMS_SDR.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kay/openairinterface5g/cmake_targets/doxygen/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lmsSDR/CMakeFiles/LMS_SDR.dir/LMS_SDR.cpp.o"
	cd /home/kay/openairinterface5g/cmake_targets/doxygen/build/lmsSDR && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LMS_SDR.dir/LMS_SDR.cpp.o -c /home/kay/openairinterface5g/targets/ARCH/LMSSDR/USERSPACE/LIB/lmsSDR/LMS_SDR.cpp

lmsSDR/CMakeFiles/LMS_SDR.dir/LMS_SDR.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LMS_SDR.dir/LMS_SDR.cpp.i"
	cd /home/kay/openairinterface5g/cmake_targets/doxygen/build/lmsSDR && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kay/openairinterface5g/targets/ARCH/LMSSDR/USERSPACE/LIB/lmsSDR/LMS_SDR.cpp > CMakeFiles/LMS_SDR.dir/LMS_SDR.cpp.i

lmsSDR/CMakeFiles/LMS_SDR.dir/LMS_SDR.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LMS_SDR.dir/LMS_SDR.cpp.s"
	cd /home/kay/openairinterface5g/cmake_targets/doxygen/build/lmsSDR && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kay/openairinterface5g/targets/ARCH/LMSSDR/USERSPACE/LIB/lmsSDR/LMS_SDR.cpp -o CMakeFiles/LMS_SDR.dir/LMS_SDR.cpp.s

lmsSDR/CMakeFiles/LMS_SDR.dir/LMS_SDR.cpp.o.requires:

.PHONY : lmsSDR/CMakeFiles/LMS_SDR.dir/LMS_SDR.cpp.o.requires

lmsSDR/CMakeFiles/LMS_SDR.dir/LMS_SDR.cpp.o.provides: lmsSDR/CMakeFiles/LMS_SDR.dir/LMS_SDR.cpp.o.requires
	$(MAKE) -f lmsSDR/CMakeFiles/LMS_SDR.dir/build.make lmsSDR/CMakeFiles/LMS_SDR.dir/LMS_SDR.cpp.o.provides.build
.PHONY : lmsSDR/CMakeFiles/LMS_SDR.dir/LMS_SDR.cpp.o.provides

lmsSDR/CMakeFiles/LMS_SDR.dir/LMS_SDR.cpp.o.provides.build: lmsSDR/CMakeFiles/LMS_SDR.dir/LMS_SDR.cpp.o


# Object files for target LMS_SDR
LMS_SDR_OBJECTS = \
"CMakeFiles/LMS_SDR.dir/LMS_SDR.cpp.o"

# External object files for target LMS_SDR
LMS_SDR_EXTERNAL_OBJECTS =

lmsSDR/libLMS_SDR.so: lmsSDR/CMakeFiles/LMS_SDR.dir/LMS_SDR.cpp.o
lmsSDR/libLMS_SDR.so: lmsSDR/CMakeFiles/LMS_SDR.dir/build.make
lmsSDR/libLMS_SDR.so: lmsSDR/LMS_StreamBoard/libLMS_StreamBoard.a
lmsSDR/libLMS_SDR.so: lmsSDR/connectionManager/libConnectionManager.a
lmsSDR/libLMS_SDR.so: lmsSDR/CMakeFiles/LMS_SDR.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kay/openairinterface5g/cmake_targets/doxygen/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library libLMS_SDR.so"
	cd /home/kay/openairinterface5g/cmake_targets/doxygen/build/lmsSDR && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LMS_SDR.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lmsSDR/CMakeFiles/LMS_SDR.dir/build: lmsSDR/libLMS_SDR.so

.PHONY : lmsSDR/CMakeFiles/LMS_SDR.dir/build

lmsSDR/CMakeFiles/LMS_SDR.dir/requires: lmsSDR/CMakeFiles/LMS_SDR.dir/LMS_SDR.cpp.o.requires

.PHONY : lmsSDR/CMakeFiles/LMS_SDR.dir/requires

lmsSDR/CMakeFiles/LMS_SDR.dir/clean:
	cd /home/kay/openairinterface5g/cmake_targets/doxygen/build/lmsSDR && $(CMAKE_COMMAND) -P CMakeFiles/LMS_SDR.dir/cmake_clean.cmake
.PHONY : lmsSDR/CMakeFiles/LMS_SDR.dir/clean

lmsSDR/CMakeFiles/LMS_SDR.dir/depend:
	cd /home/kay/openairinterface5g/cmake_targets/doxygen/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kay/openairinterface5g/cmake_targets/doxygen /home/kay/openairinterface5g/targets/ARCH/LMSSDR/USERSPACE/LIB/lmsSDR /home/kay/openairinterface5g/cmake_targets/doxygen/build /home/kay/openairinterface5g/cmake_targets/doxygen/build/lmsSDR /home/kay/openairinterface5g/cmake_targets/doxygen/build/lmsSDR/CMakeFiles/LMS_SDR.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lmsSDR/CMakeFiles/LMS_SDR.dir/depend

