# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.21

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.3.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.3.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\haight4u\CLionProjects\acc-cosc-1337-spring-2022-hanku4u

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\haight4u\CLionProjects\acc-cosc-1337-spring-2022-hanku4u\cmake-build-debug

# Include any dependencies generated for this target.
include src/examples/03_module/01_if/CMakeFiles/ex_03_01_library.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/examples/03_module/01_if/CMakeFiles/ex_03_01_library.dir/compiler_depend.make

# Include the progress variables for this target.
include src/examples/03_module/01_if/CMakeFiles/ex_03_01_library.dir/progress.make

# Include the compile flags for this target's objects.
include src/examples/03_module/01_if/CMakeFiles/ex_03_01_library.dir/flags.make

src/examples/03_module/01_if/CMakeFiles/ex_03_01_library.dir/if.cpp.obj: src/examples/03_module/01_if/CMakeFiles/ex_03_01_library.dir/flags.make
src/examples/03_module/01_if/CMakeFiles/ex_03_01_library.dir/if.cpp.obj: src/examples/03_module/01_if/CMakeFiles/ex_03_01_library.dir/includes_CXX.rsp
src/examples/03_module/01_if/CMakeFiles/ex_03_01_library.dir/if.cpp.obj: ../src/examples/03_module/01_if/if.cpp
src/examples/03_module/01_if/CMakeFiles/ex_03_01_library.dir/if.cpp.obj: src/examples/03_module/01_if/CMakeFiles/ex_03_01_library.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\haight4u\CLionProjects\acc-cosc-1337-spring-2022-hanku4u\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/examples/03_module/01_if/CMakeFiles/ex_03_01_library.dir/if.cpp.obj"
	cd /d C:\Users\haight4u\CLionProjects\acc-cosc-1337-spring-2022-hanku4u\cmake-build-debug\src\examples\03_module\01_if && C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/examples/03_module/01_if/CMakeFiles/ex_03_01_library.dir/if.cpp.obj -MF CMakeFiles\ex_03_01_library.dir\if.cpp.obj.d -o CMakeFiles\ex_03_01_library.dir\if.cpp.obj -c C:\Users\haight4u\CLionProjects\acc-cosc-1337-spring-2022-hanku4u\src\examples\03_module\01_if\if.cpp

src/examples/03_module/01_if/CMakeFiles/ex_03_01_library.dir/if.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex_03_01_library.dir/if.cpp.i"
	cd /d C:\Users\haight4u\CLionProjects\acc-cosc-1337-spring-2022-hanku4u\cmake-build-debug\src\examples\03_module\01_if && C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\haight4u\CLionProjects\acc-cosc-1337-spring-2022-hanku4u\src\examples\03_module\01_if\if.cpp > CMakeFiles\ex_03_01_library.dir\if.cpp.i

src/examples/03_module/01_if/CMakeFiles/ex_03_01_library.dir/if.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex_03_01_library.dir/if.cpp.s"
	cd /d C:\Users\haight4u\CLionProjects\acc-cosc-1337-spring-2022-hanku4u\cmake-build-debug\src\examples\03_module\01_if && C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\haight4u\CLionProjects\acc-cosc-1337-spring-2022-hanku4u\src\examples\03_module\01_if\if.cpp -o CMakeFiles\ex_03_01_library.dir\if.cpp.s

# Object files for target ex_03_01_library
ex_03_01_library_OBJECTS = \
"CMakeFiles/ex_03_01_library.dir/if.cpp.obj"

# External object files for target ex_03_01_library
ex_03_01_library_EXTERNAL_OBJECTS =

src/examples/03_module/01_if/libex_03_01_library.a: src/examples/03_module/01_if/CMakeFiles/ex_03_01_library.dir/if.cpp.obj
src/examples/03_module/01_if/libex_03_01_library.a: src/examples/03_module/01_if/CMakeFiles/ex_03_01_library.dir/build.make
src/examples/03_module/01_if/libex_03_01_library.a: src/examples/03_module/01_if/CMakeFiles/ex_03_01_library.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\haight4u\CLionProjects\acc-cosc-1337-spring-2022-hanku4u\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libex_03_01_library.a"
	cd /d C:\Users\haight4u\CLionProjects\acc-cosc-1337-spring-2022-hanku4u\cmake-build-debug\src\examples\03_module\01_if && $(CMAKE_COMMAND) -P CMakeFiles\ex_03_01_library.dir\cmake_clean_target.cmake
	cd /d C:\Users\haight4u\CLionProjects\acc-cosc-1337-spring-2022-hanku4u\cmake-build-debug\src\examples\03_module\01_if && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ex_03_01_library.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/examples/03_module/01_if/CMakeFiles/ex_03_01_library.dir/build: src/examples/03_module/01_if/libex_03_01_library.a
.PHONY : src/examples/03_module/01_if/CMakeFiles/ex_03_01_library.dir/build

src/examples/03_module/01_if/CMakeFiles/ex_03_01_library.dir/clean:
	cd /d C:\Users\haight4u\CLionProjects\acc-cosc-1337-spring-2022-hanku4u\cmake-build-debug\src\examples\03_module\01_if && $(CMAKE_COMMAND) -P CMakeFiles\ex_03_01_library.dir\cmake_clean.cmake
.PHONY : src/examples/03_module/01_if/CMakeFiles/ex_03_01_library.dir/clean

src/examples/03_module/01_if/CMakeFiles/ex_03_01_library.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\haight4u\CLionProjects\acc-cosc-1337-spring-2022-hanku4u C:\Users\haight4u\CLionProjects\acc-cosc-1337-spring-2022-hanku4u\src\examples\03_module\01_if C:\Users\haight4u\CLionProjects\acc-cosc-1337-spring-2022-hanku4u\cmake-build-debug C:\Users\haight4u\CLionProjects\acc-cosc-1337-spring-2022-hanku4u\cmake-build-debug\src\examples\03_module\01_if C:\Users\haight4u\CLionProjects\acc-cosc-1337-spring-2022-hanku4u\cmake-build-debug\src\examples\03_module\01_if\CMakeFiles\ex_03_01_library.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : src/examples/03_module/01_if/CMakeFiles/ex_03_01_library.dir/depend
