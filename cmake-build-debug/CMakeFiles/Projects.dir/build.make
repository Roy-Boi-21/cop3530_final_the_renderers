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
include CMakeFiles/Projects.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Projects.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Projects.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Projects.dir/flags.make

CMakeFiles/Projects.dir/main.cpp.obj: CMakeFiles/Projects.dir/flags.make
CMakeFiles/Projects.dir/main.cpp.obj: CMakeFiles/Projects.dir/includes_CXX.rsp
CMakeFiles/Projects.dir/main.cpp.obj: C:/Users/JohnB/OneDrive\ -\ University\ of\ Florida/cop3530_final_the_renderers/main.cpp
CMakeFiles/Projects.dir/main.cpp.obj: CMakeFiles/Projects.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\JohnB\OneDrive - University of Florida\cop3530_final_the_renderers\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Projects.dir/main.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Projects.dir/main.cpp.obj -MF CMakeFiles\Projects.dir\main.cpp.obj.d -o CMakeFiles\Projects.dir\main.cpp.obj -c "C:\Users\JohnB\OneDrive - University of Florida\cop3530_final_the_renderers\main.cpp"

CMakeFiles/Projects.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Projects.dir/main.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\JohnB\OneDrive - University of Florida\cop3530_final_the_renderers\main.cpp" > CMakeFiles\Projects.dir\main.cpp.i

CMakeFiles/Projects.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Projects.dir/main.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\JohnB\OneDrive - University of Florida\cop3530_final_the_renderers\main.cpp" -o CMakeFiles\Projects.dir\main.cpp.s

CMakeFiles/Projects.dir/triangle.cpp.obj: CMakeFiles/Projects.dir/flags.make
CMakeFiles/Projects.dir/triangle.cpp.obj: CMakeFiles/Projects.dir/includes_CXX.rsp
CMakeFiles/Projects.dir/triangle.cpp.obj: C:/Users/JohnB/OneDrive\ -\ University\ of\ Florida/cop3530_final_the_renderers/triangle.cpp
CMakeFiles/Projects.dir/triangle.cpp.obj: CMakeFiles/Projects.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\JohnB\OneDrive - University of Florida\cop3530_final_the_renderers\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Projects.dir/triangle.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Projects.dir/triangle.cpp.obj -MF CMakeFiles\Projects.dir\triangle.cpp.obj.d -o CMakeFiles\Projects.dir\triangle.cpp.obj -c "C:\Users\JohnB\OneDrive - University of Florida\cop3530_final_the_renderers\triangle.cpp"

CMakeFiles/Projects.dir/triangle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Projects.dir/triangle.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\JohnB\OneDrive - University of Florida\cop3530_final_the_renderers\triangle.cpp" > CMakeFiles\Projects.dir\triangle.cpp.i

CMakeFiles/Projects.dir/triangle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Projects.dir/triangle.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\JohnB\OneDrive - University of Florida\cop3530_final_the_renderers\triangle.cpp" -o CMakeFiles\Projects.dir\triangle.cpp.s

CMakeFiles/Projects.dir/scene.cpp.obj: CMakeFiles/Projects.dir/flags.make
CMakeFiles/Projects.dir/scene.cpp.obj: CMakeFiles/Projects.dir/includes_CXX.rsp
CMakeFiles/Projects.dir/scene.cpp.obj: C:/Users/JohnB/OneDrive\ -\ University\ of\ Florida/cop3530_final_the_renderers/scene.cpp
CMakeFiles/Projects.dir/scene.cpp.obj: CMakeFiles/Projects.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\JohnB\OneDrive - University of Florida\cop3530_final_the_renderers\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Projects.dir/scene.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Projects.dir/scene.cpp.obj -MF CMakeFiles\Projects.dir\scene.cpp.obj.d -o CMakeFiles\Projects.dir\scene.cpp.obj -c "C:\Users\JohnB\OneDrive - University of Florida\cop3530_final_the_renderers\scene.cpp"

CMakeFiles/Projects.dir/scene.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Projects.dir/scene.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\JohnB\OneDrive - University of Florida\cop3530_final_the_renderers\scene.cpp" > CMakeFiles\Projects.dir\scene.cpp.i

CMakeFiles/Projects.dir/scene.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Projects.dir/scene.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\JohnB\OneDrive - University of Florida\cop3530_final_the_renderers\scene.cpp" -o CMakeFiles\Projects.dir\scene.cpp.s

CMakeFiles/Projects.dir/ray_tracing.cpp.obj: CMakeFiles/Projects.dir/flags.make
CMakeFiles/Projects.dir/ray_tracing.cpp.obj: CMakeFiles/Projects.dir/includes_CXX.rsp
CMakeFiles/Projects.dir/ray_tracing.cpp.obj: C:/Users/JohnB/OneDrive\ -\ University\ of\ Florida/cop3530_final_the_renderers/ray_tracing.cpp
CMakeFiles/Projects.dir/ray_tracing.cpp.obj: CMakeFiles/Projects.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\JohnB\OneDrive - University of Florida\cop3530_final_the_renderers\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Projects.dir/ray_tracing.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Projects.dir/ray_tracing.cpp.obj -MF CMakeFiles\Projects.dir\ray_tracing.cpp.obj.d -o CMakeFiles\Projects.dir\ray_tracing.cpp.obj -c "C:\Users\JohnB\OneDrive - University of Florida\cop3530_final_the_renderers\ray_tracing.cpp"

CMakeFiles/Projects.dir/ray_tracing.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Projects.dir/ray_tracing.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\JohnB\OneDrive - University of Florida\cop3530_final_the_renderers\ray_tracing.cpp" > CMakeFiles\Projects.dir\ray_tracing.cpp.i

CMakeFiles/Projects.dir/ray_tracing.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Projects.dir/ray_tracing.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\JohnB\OneDrive - University of Florida\cop3530_final_the_renderers\ray_tracing.cpp" -o CMakeFiles\Projects.dir\ray_tracing.cpp.s

CMakeFiles/Projects.dir/rasterization.cpp.obj: CMakeFiles/Projects.dir/flags.make
CMakeFiles/Projects.dir/rasterization.cpp.obj: CMakeFiles/Projects.dir/includes_CXX.rsp
CMakeFiles/Projects.dir/rasterization.cpp.obj: C:/Users/JohnB/OneDrive\ -\ University\ of\ Florida/cop3530_final_the_renderers/rasterization.cpp
CMakeFiles/Projects.dir/rasterization.cpp.obj: CMakeFiles/Projects.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\JohnB\OneDrive - University of Florida\cop3530_final_the_renderers\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Projects.dir/rasterization.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Projects.dir/rasterization.cpp.obj -MF CMakeFiles\Projects.dir\rasterization.cpp.obj.d -o CMakeFiles\Projects.dir\rasterization.cpp.obj -c "C:\Users\JohnB\OneDrive - University of Florida\cop3530_final_the_renderers\rasterization.cpp"

CMakeFiles/Projects.dir/rasterization.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Projects.dir/rasterization.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\JohnB\OneDrive - University of Florida\cop3530_final_the_renderers\rasterization.cpp" > CMakeFiles\Projects.dir\rasterization.cpp.i

CMakeFiles/Projects.dir/rasterization.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Projects.dir/rasterization.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\JohnB\OneDrive - University of Florida\cop3530_final_the_renderers\rasterization.cpp" -o CMakeFiles\Projects.dir\rasterization.cpp.s

# Object files for target Projects
Projects_OBJECTS = \
"CMakeFiles/Projects.dir/main.cpp.obj" \
"CMakeFiles/Projects.dir/triangle.cpp.obj" \
"CMakeFiles/Projects.dir/scene.cpp.obj" \
"CMakeFiles/Projects.dir/ray_tracing.cpp.obj" \
"CMakeFiles/Projects.dir/rasterization.cpp.obj"

# External object files for target Projects
Projects_EXTERNAL_OBJECTS =

Projects.exe: CMakeFiles/Projects.dir/main.cpp.obj
Projects.exe: CMakeFiles/Projects.dir/triangle.cpp.obj
Projects.exe: CMakeFiles/Projects.dir/scene.cpp.obj
Projects.exe: CMakeFiles/Projects.dir/ray_tracing.cpp.obj
Projects.exe: CMakeFiles/Projects.dir/rasterization.cpp.obj
Projects.exe: CMakeFiles/Projects.dir/build.make
Projects.exe: C:/SFML/lib/libsfml-graphics-d.a
Projects.exe: C:/SFML/lib/libsfml-audio-d.a
Projects.exe: C:/SFML/lib/libsfml-window-d.a
Projects.exe: C:/SFML/lib/libsfml-system-d.a
Projects.exe: CMakeFiles/Projects.dir/linkLibs.rsp
Projects.exe: CMakeFiles/Projects.dir/objects1.rsp
Projects.exe: CMakeFiles/Projects.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="C:\Users\JohnB\OneDrive - University of Florida\cop3530_final_the_renderers\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable Projects.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Projects.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Projects.dir/build: Projects.exe
.PHONY : CMakeFiles/Projects.dir/build

CMakeFiles/Projects.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Projects.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Projects.dir/clean

CMakeFiles/Projects.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\JohnB\OneDrive - University of Florida\cop3530_final_the_renderers" "C:\Users\JohnB\OneDrive - University of Florida\cop3530_final_the_renderers" "C:\Users\JohnB\OneDrive - University of Florida\cop3530_final_the_renderers\cmake-build-debug" "C:\Users\JohnB\OneDrive - University of Florida\cop3530_final_the_renderers\cmake-build-debug" "C:\Users\JohnB\OneDrive - University of Florida\cop3530_final_the_renderers\cmake-build-debug\CMakeFiles\Projects.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/Projects.dir/depend

