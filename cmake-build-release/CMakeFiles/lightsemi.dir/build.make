# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = "D:\Clion\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Clion\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Project\QtProject\lightsemi-rf-test-tool

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Project\QtProject\lightsemi-rf-test-tool\cmake-build-release

# Include any dependencies generated for this target.
include CMakeFiles/lightsemi.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/lightsemi.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lightsemi.dir/flags.make

CMakeFiles/lightsemi.dir/lightsemi_autogen/mocs_compilation.cpp.obj: CMakeFiles/lightsemi.dir/flags.make
CMakeFiles/lightsemi.dir/lightsemi_autogen/mocs_compilation.cpp.obj: CMakeFiles/lightsemi.dir/includes_CXX.rsp
CMakeFiles/lightsemi.dir/lightsemi_autogen/mocs_compilation.cpp.obj: lightsemi_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Project\QtProject\lightsemi-rf-test-tool\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lightsemi.dir/lightsemi_autogen/mocs_compilation.cpp.obj"
	D:\QT\Qt5.14.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\lightsemi.dir\lightsemi_autogen\mocs_compilation.cpp.obj -c D:\Project\QtProject\lightsemi-rf-test-tool\cmake-build-release\lightsemi_autogen\mocs_compilation.cpp

CMakeFiles/lightsemi.dir/lightsemi_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lightsemi.dir/lightsemi_autogen/mocs_compilation.cpp.i"
	D:\QT\Qt5.14.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Project\QtProject\lightsemi-rf-test-tool\cmake-build-release\lightsemi_autogen\mocs_compilation.cpp > CMakeFiles\lightsemi.dir\lightsemi_autogen\mocs_compilation.cpp.i

CMakeFiles/lightsemi.dir/lightsemi_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lightsemi.dir/lightsemi_autogen/mocs_compilation.cpp.s"
	D:\QT\Qt5.14.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Project\QtProject\lightsemi-rf-test-tool\cmake-build-release\lightsemi_autogen\mocs_compilation.cpp -o CMakeFiles\lightsemi.dir\lightsemi_autogen\mocs_compilation.cpp.s

CMakeFiles/lightsemi.dir/src/PortReadThread.cpp.obj: CMakeFiles/lightsemi.dir/flags.make
CMakeFiles/lightsemi.dir/src/PortReadThread.cpp.obj: CMakeFiles/lightsemi.dir/includes_CXX.rsp
CMakeFiles/lightsemi.dir/src/PortReadThread.cpp.obj: ../src/PortReadThread.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Project\QtProject\lightsemi-rf-test-tool\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/lightsemi.dir/src/PortReadThread.cpp.obj"
	D:\QT\Qt5.14.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\lightsemi.dir\src\PortReadThread.cpp.obj -c D:\Project\QtProject\lightsemi-rf-test-tool\src\PortReadThread.cpp

CMakeFiles/lightsemi.dir/src/PortReadThread.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lightsemi.dir/src/PortReadThread.cpp.i"
	D:\QT\Qt5.14.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Project\QtProject\lightsemi-rf-test-tool\src\PortReadThread.cpp > CMakeFiles\lightsemi.dir\src\PortReadThread.cpp.i

CMakeFiles/lightsemi.dir/src/PortReadThread.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lightsemi.dir/src/PortReadThread.cpp.s"
	D:\QT\Qt5.14.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Project\QtProject\lightsemi-rf-test-tool\src\PortReadThread.cpp -o CMakeFiles\lightsemi.dir\src\PortReadThread.cpp.s

CMakeFiles/lightsemi.dir/src/PortWriteThread.cpp.obj: CMakeFiles/lightsemi.dir/flags.make
CMakeFiles/lightsemi.dir/src/PortWriteThread.cpp.obj: CMakeFiles/lightsemi.dir/includes_CXX.rsp
CMakeFiles/lightsemi.dir/src/PortWriteThread.cpp.obj: ../src/PortWriteThread.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Project\QtProject\lightsemi-rf-test-tool\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/lightsemi.dir/src/PortWriteThread.cpp.obj"
	D:\QT\Qt5.14.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\lightsemi.dir\src\PortWriteThread.cpp.obj -c D:\Project\QtProject\lightsemi-rf-test-tool\src\PortWriteThread.cpp

CMakeFiles/lightsemi.dir/src/PortWriteThread.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lightsemi.dir/src/PortWriteThread.cpp.i"
	D:\QT\Qt5.14.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Project\QtProject\lightsemi-rf-test-tool\src\PortWriteThread.cpp > CMakeFiles\lightsemi.dir\src\PortWriteThread.cpp.i

CMakeFiles/lightsemi.dir/src/PortWriteThread.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lightsemi.dir/src/PortWriteThread.cpp.s"
	D:\QT\Qt5.14.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Project\QtProject\lightsemi-rf-test-tool\src\PortWriteThread.cpp -o CMakeFiles\lightsemi.dir\src\PortWriteThread.cpp.s

CMakeFiles/lightsemi.dir/src/SerialPort.cpp.obj: CMakeFiles/lightsemi.dir/flags.make
CMakeFiles/lightsemi.dir/src/SerialPort.cpp.obj: CMakeFiles/lightsemi.dir/includes_CXX.rsp
CMakeFiles/lightsemi.dir/src/SerialPort.cpp.obj: ../src/SerialPort.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Project\QtProject\lightsemi-rf-test-tool\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/lightsemi.dir/src/SerialPort.cpp.obj"
	D:\QT\Qt5.14.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\lightsemi.dir\src\SerialPort.cpp.obj -c D:\Project\QtProject\lightsemi-rf-test-tool\src\SerialPort.cpp

CMakeFiles/lightsemi.dir/src/SerialPort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lightsemi.dir/src/SerialPort.cpp.i"
	D:\QT\Qt5.14.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Project\QtProject\lightsemi-rf-test-tool\src\SerialPort.cpp > CMakeFiles\lightsemi.dir\src\SerialPort.cpp.i

CMakeFiles/lightsemi.dir/src/SerialPort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lightsemi.dir/src/SerialPort.cpp.s"
	D:\QT\Qt5.14.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Project\QtProject\lightsemi-rf-test-tool\src\SerialPort.cpp -o CMakeFiles\lightsemi.dir\src\SerialPort.cpp.s

CMakeFiles/lightsemi.dir/src/lightningsemi.cpp.obj: CMakeFiles/lightsemi.dir/flags.make
CMakeFiles/lightsemi.dir/src/lightningsemi.cpp.obj: CMakeFiles/lightsemi.dir/includes_CXX.rsp
CMakeFiles/lightsemi.dir/src/lightningsemi.cpp.obj: ../src/lightningsemi.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Project\QtProject\lightsemi-rf-test-tool\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/lightsemi.dir/src/lightningsemi.cpp.obj"
	D:\QT\Qt5.14.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\lightsemi.dir\src\lightningsemi.cpp.obj -c D:\Project\QtProject\lightsemi-rf-test-tool\src\lightningsemi.cpp

CMakeFiles/lightsemi.dir/src/lightningsemi.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lightsemi.dir/src/lightningsemi.cpp.i"
	D:\QT\Qt5.14.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Project\QtProject\lightsemi-rf-test-tool\src\lightningsemi.cpp > CMakeFiles\lightsemi.dir\src\lightningsemi.cpp.i

CMakeFiles/lightsemi.dir/src/lightningsemi.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lightsemi.dir/src/lightningsemi.cpp.s"
	D:\QT\Qt5.14.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Project\QtProject\lightsemi-rf-test-tool\src\lightningsemi.cpp -o CMakeFiles\lightsemi.dir\src\lightningsemi.cpp.s

CMakeFiles/lightsemi.dir/src/main.cpp.obj: CMakeFiles/lightsemi.dir/flags.make
CMakeFiles/lightsemi.dir/src/main.cpp.obj: CMakeFiles/lightsemi.dir/includes_CXX.rsp
CMakeFiles/lightsemi.dir/src/main.cpp.obj: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Project\QtProject\lightsemi-rf-test-tool\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/lightsemi.dir/src/main.cpp.obj"
	D:\QT\Qt5.14.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\lightsemi.dir\src\main.cpp.obj -c D:\Project\QtProject\lightsemi-rf-test-tool\src\main.cpp

CMakeFiles/lightsemi.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lightsemi.dir/src/main.cpp.i"
	D:\QT\Qt5.14.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Project\QtProject\lightsemi-rf-test-tool\src\main.cpp > CMakeFiles\lightsemi.dir\src\main.cpp.i

CMakeFiles/lightsemi.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lightsemi.dir/src/main.cpp.s"
	D:\QT\Qt5.14.2\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Project\QtProject\lightsemi-rf-test-tool\src\main.cpp -o CMakeFiles\lightsemi.dir\src\main.cpp.s

# Object files for target lightsemi
lightsemi_OBJECTS = \
"CMakeFiles/lightsemi.dir/lightsemi_autogen/mocs_compilation.cpp.obj" \
"CMakeFiles/lightsemi.dir/src/PortReadThread.cpp.obj" \
"CMakeFiles/lightsemi.dir/src/PortWriteThread.cpp.obj" \
"CMakeFiles/lightsemi.dir/src/SerialPort.cpp.obj" \
"CMakeFiles/lightsemi.dir/src/lightningsemi.cpp.obj" \
"CMakeFiles/lightsemi.dir/src/main.cpp.obj"

# External object files for target lightsemi
lightsemi_EXTERNAL_OBJECTS =

lightsemi.exe: CMakeFiles/lightsemi.dir/lightsemi_autogen/mocs_compilation.cpp.obj
lightsemi.exe: CMakeFiles/lightsemi.dir/src/PortReadThread.cpp.obj
lightsemi.exe: CMakeFiles/lightsemi.dir/src/PortWriteThread.cpp.obj
lightsemi.exe: CMakeFiles/lightsemi.dir/src/SerialPort.cpp.obj
lightsemi.exe: CMakeFiles/lightsemi.dir/src/lightningsemi.cpp.obj
lightsemi.exe: CMakeFiles/lightsemi.dir/src/main.cpp.obj
lightsemi.exe: CMakeFiles/lightsemi.dir/build.make
lightsemi.exe: D:/QT/Qt5.14.2/5.14.2/mingw73_64/lib/libQt5Widgets.a
lightsemi.exe: D:/QT/Qt5.14.2/5.14.2/mingw73_64/lib/libQt5SerialPort.a
lightsemi.exe: D:/QT/Qt5.14.2/5.14.2/mingw73_64/lib/libQt5Gui.a
lightsemi.exe: D:/QT/Qt5.14.2/5.14.2/mingw73_64/lib/libQt5Core.a
lightsemi.exe: CMakeFiles/lightsemi.dir/linklibs.rsp
lightsemi.exe: CMakeFiles/lightsemi.dir/objects1.rsp
lightsemi.exe: CMakeFiles/lightsemi.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Project\QtProject\lightsemi-rf-test-tool\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable lightsemi.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\lightsemi.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lightsemi.dir/build: lightsemi.exe
.PHONY : CMakeFiles/lightsemi.dir/build

CMakeFiles/lightsemi.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\lightsemi.dir\cmake_clean.cmake
.PHONY : CMakeFiles/lightsemi.dir/clean

CMakeFiles/lightsemi.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Project\QtProject\lightsemi-rf-test-tool D:\Project\QtProject\lightsemi-rf-test-tool D:\Project\QtProject\lightsemi-rf-test-tool\cmake-build-release D:\Project\QtProject\lightsemi-rf-test-tool\cmake-build-release D:\Project\QtProject\lightsemi-rf-test-tool\cmake-build-release\CMakeFiles\lightsemi.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lightsemi.dir/depend

