# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.27

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2023.3.2\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2023.3.2\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\JohnB\OneDrive - University of Florida\cop3530_final_the_renderers"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\JohnB\OneDrive - University of Florida\cop3530_final_the_renderers\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/ray_tracing.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/ray_tracing.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ray_tracing.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ray_tracing.dir/flags.make

CMakeFiles/ray_tracing.dir/ray_tracing.cpp.obj: CMakeFiles/ray_tracing.dir/flags.make
CMakeFiles/ray_tracing.dir/ray_tracing.cpp.obj: CMakeFiles/ray_tracing.dir/includes_CXX.rsp
CMakeFiles/ray_tracing.dir/ray_tracing.cpp.obj: C:/Users/JohnB/OneDrive\ -\ University\ of\ Florida/cop3530_final_the_renderers/ray_tracing.cpp
CMakeFiles/ray_tracing.dir/ray_tracing.cpp.obj: CMakeFiles/ray_tracing.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\JohnB\OneDrive - University of Florida\cop3530_final_the_renderers\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ray_tracing.dir/ray_tracing.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ray_tracing.dir/ray_tracing.cpp.obj -MF CMakeFiles\ray_tracing.dir\ray_tracing.cpp.obj.d -o CMakeFiles\ray_tracing.dir\ray_tracing.cpp.obj -c "C:\Users\JohnB\OneDrive - University of Florida\cop3530_final_the_renderers\ray_tracing.cpp"

CMakeFiles/ray_tracing.dir/ray_tracing.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/ray_tracing.dir/ray_tracing.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\JohnB\OneDrive - University of Florida\cop3530_final_the_renderers\ray_tracing.cpp" > CMakeFiles\ray_tracing.dir\ray_tracing.cpp.i

CMakeFiles/ray_tracing.dir/ray_tracing.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/ray_tracing.dir/ray_tracing.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\JohnB\OneDrive - University of Florida\cop3530_final_the_renderers\ray_tracing.cpp" -o CMakeFiles\ray_tracing.dir\ray_tracing.cpp.s

# Object files for target ray_tracing
ray_tracing_OBJECTS = \
"CMakeFiles/ray_tracing.dir/ray_tracing.cpp.obj"

# External object files for target ray_tracing
ray_tracing_EXTERNAL_OBJECTS =

libray_tracing.a: CMakeFiles/ray_tracing.dir/ray_tracing.cpp.obj
libray_tracing.a: CMakeFiles/ray_tracing.dir/build.make
libray_tracing.a: CMakeFiles/ray_tracing.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="C:\Users\JohnB\OneDrive - University of Florida\cop3530_final_the_renderers\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libray_tracing.a"
	$(CMAKE_COMMAND) -P CMakeFiles\ray_tracing.dir\cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ray_tracing.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ray_tracing.dir/build: libray_tracing.a
.PHONY : CMakeFiles/ray_tracing.dir/build

CMakeFiles/ray_tracing.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ray_tracing.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ray_tracing.dir/clean

CMakeFiles/ray_tracing.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\JohnB\OneDrive - University of Florida\cop3530_final_the_renderers" "C:\Users\JohnB\OneDrive - University of Florida\cop3530_final_the_renderers" "C:\Users\JohnB\OneDrive - University of Florida\cop3530_final_the_renderers\cmake-build-debug" "C:\Users\JohnB\OneDrive - University of Florida\cop3530_final_the_renderers\cmake-build-debug" "C:\Users\JohnB\OneDrive - University of Florida\cop3530_final_the_renderers\cmake-build-debug\CMakeFiles\ray_tracing.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/ray_tracing.dir/depend

