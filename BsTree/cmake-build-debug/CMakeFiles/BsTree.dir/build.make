# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.13

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "H:\Clion\CLion 2018.3.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "H:\Clion\CLion 2018.3.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "H:\Clion\Data Structure\BsTree"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "H:\Clion\Data Structure\BsTree\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/BSTree.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/BSTree.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BSTree.dir/flags.make

CMakeFiles/BSTree.dir/main.cpp.obj: CMakeFiles/BSTree.dir/flags.make
CMakeFiles/BSTree.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="H:\Clion\Data Structure\BsTree\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/BSTree.dir/main.cpp.obj"
	H:\Clion\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\BSTree.dir\main.cpp.obj -c "H:\Clion\Data Structure\BsTree\main.cpp"

CMakeFiles/BSTree.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BSTree.dir/main.cpp.i"
	H:\Clion\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "H:\Clion\Data Structure\BsTree\main.cpp" > CMakeFiles\BSTree.dir\main.cpp.i

CMakeFiles/BSTree.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BSTree.dir/main.cpp.s"
	H:\Clion\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "H:\Clion\Data Structure\BsTree\main.cpp" -o CMakeFiles\BSTree.dir\main.cpp.s

CMakeFiles/BSTree.dir/BSTree.cpp.obj: CMakeFiles/BSTree.dir/flags.make
CMakeFiles/BSTree.dir/BSTree.cpp.obj: ../BSTree.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="H:\Clion\Data Structure\BsTree\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/BSTree.dir/BSTree.cpp.obj"
	H:\Clion\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\BSTree.dir\BSTree.cpp.obj -c "H:\Clion\Data Structure\BsTree\BSTree.cpp"

CMakeFiles/BSTree.dir/BSTree.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BSTree.dir/BSTree.cpp.i"
	H:\Clion\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "H:\Clion\Data Structure\BsTree\BSTree.cpp" > CMakeFiles\BSTree.dir\BSTree.cpp.i

CMakeFiles/BSTree.dir/BSTree.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BSTree.dir/BSTree.cpp.s"
	H:\Clion\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "H:\Clion\Data Structure\BsTree\BSTree.cpp" -o CMakeFiles\BSTree.dir\BSTree.cpp.s

# Object files for target BSTree
BSTree_OBJECTS = \
"CMakeFiles/BSTree.dir/main.cpp.obj" \
"CMakeFiles/BSTree.dir/BSTree.cpp.obj"

# External object files for target BSTree
BSTree_EXTERNAL_OBJECTS =

BSTree.exe: CMakeFiles/BSTree.dir/main.cpp.obj
BSTree.exe: CMakeFiles/BSTree.dir/BSTree.cpp.obj
BSTree.exe: CMakeFiles/BSTree.dir/build.make
BSTree.exe: CMakeFiles/BSTree.dir/linklibs.rsp
BSTree.exe: CMakeFiles/BSTree.dir/objects1.rsp
BSTree.exe: CMakeFiles/BSTree.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="H:\Clion\Data Structure\BsTree\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable BSTree.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\BSTree.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BSTree.dir/build: BSTree.exe

.PHONY : CMakeFiles/BSTree.dir/build

CMakeFiles/BSTree.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\BSTree.dir\cmake_clean.cmake
.PHONY : CMakeFiles/BSTree.dir/clean

CMakeFiles/BSTree.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "H:\Clion\Data Structure\BsTree" "H:\Clion\Data Structure\BsTree" "H:\Clion\Data Structure\BsTree\cmake-build-debug" "H:\Clion\Data Structure\BsTree\cmake-build-debug" "H:\Clion\Data Structure\BsTree\cmake-build-debug\CMakeFiles\BsTree.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/BSTree.dir/depend
