# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /home/naama/clion-2017.2.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/naama/clion-2017.2.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/naama/CLionProjects/ex3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/naama/CLionProjects/ex3/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ex3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ex3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ex3.dir/flags.make

CMakeFiles/ex3.dir/src/client/main.cpp.o: CMakeFiles/ex3.dir/flags.make
CMakeFiles/ex3.dir/src/client/main.cpp.o: ../src/client/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/naama/CLionProjects/ex3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ex3.dir/src/client/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex3.dir/src/client/main.cpp.o -c /home/naama/CLionProjects/ex3/src/client/main.cpp

CMakeFiles/ex3.dir/src/client/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex3.dir/src/client/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/naama/CLionProjects/ex3/src/client/main.cpp > CMakeFiles/ex3.dir/src/client/main.cpp.i

CMakeFiles/ex3.dir/src/client/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex3.dir/src/client/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/naama/CLionProjects/ex3/src/client/main.cpp -o CMakeFiles/ex3.dir/src/client/main.cpp.s

CMakeFiles/ex3.dir/src/client/main.cpp.o.requires:

.PHONY : CMakeFiles/ex3.dir/src/client/main.cpp.o.requires

CMakeFiles/ex3.dir/src/client/main.cpp.o.provides: CMakeFiles/ex3.dir/src/client/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/ex3.dir/build.make CMakeFiles/ex3.dir/src/client/main.cpp.o.provides.build
.PHONY : CMakeFiles/ex3.dir/src/client/main.cpp.o.provides

CMakeFiles/ex3.dir/src/client/main.cpp.o.provides.build: CMakeFiles/ex3.dir/src/client/main.cpp.o


CMakeFiles/ex3.dir/src/client/BoardConsole.cpp.o: CMakeFiles/ex3.dir/flags.make
CMakeFiles/ex3.dir/src/client/BoardConsole.cpp.o: ../src/client/BoardConsole.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/naama/CLionProjects/ex3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ex3.dir/src/client/BoardConsole.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex3.dir/src/client/BoardConsole.cpp.o -c /home/naama/CLionProjects/ex3/src/client/BoardConsole.cpp

CMakeFiles/ex3.dir/src/client/BoardConsole.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex3.dir/src/client/BoardConsole.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/naama/CLionProjects/ex3/src/client/BoardConsole.cpp > CMakeFiles/ex3.dir/src/client/BoardConsole.cpp.i

CMakeFiles/ex3.dir/src/client/BoardConsole.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex3.dir/src/client/BoardConsole.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/naama/CLionProjects/ex3/src/client/BoardConsole.cpp -o CMakeFiles/ex3.dir/src/client/BoardConsole.cpp.s

CMakeFiles/ex3.dir/src/client/BoardConsole.cpp.o.requires:

.PHONY : CMakeFiles/ex3.dir/src/client/BoardConsole.cpp.o.requires

CMakeFiles/ex3.dir/src/client/BoardConsole.cpp.o.provides: CMakeFiles/ex3.dir/src/client/BoardConsole.cpp.o.requires
	$(MAKE) -f CMakeFiles/ex3.dir/build.make CMakeFiles/ex3.dir/src/client/BoardConsole.cpp.o.provides.build
.PHONY : CMakeFiles/ex3.dir/src/client/BoardConsole.cpp.o.provides

CMakeFiles/ex3.dir/src/client/BoardConsole.cpp.o.provides.build: CMakeFiles/ex3.dir/src/client/BoardConsole.cpp.o


CMakeFiles/ex3.dir/src/client/PersonP.cpp.o: CMakeFiles/ex3.dir/flags.make
CMakeFiles/ex3.dir/src/client/PersonP.cpp.o: ../src/client/PersonP.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/naama/CLionProjects/ex3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/ex3.dir/src/client/PersonP.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex3.dir/src/client/PersonP.cpp.o -c /home/naama/CLionProjects/ex3/src/client/PersonP.cpp

CMakeFiles/ex3.dir/src/client/PersonP.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex3.dir/src/client/PersonP.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/naama/CLionProjects/ex3/src/client/PersonP.cpp > CMakeFiles/ex3.dir/src/client/PersonP.cpp.i

CMakeFiles/ex3.dir/src/client/PersonP.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex3.dir/src/client/PersonP.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/naama/CLionProjects/ex3/src/client/PersonP.cpp -o CMakeFiles/ex3.dir/src/client/PersonP.cpp.s

CMakeFiles/ex3.dir/src/client/PersonP.cpp.o.requires:

.PHONY : CMakeFiles/ex3.dir/src/client/PersonP.cpp.o.requires

CMakeFiles/ex3.dir/src/client/PersonP.cpp.o.provides: CMakeFiles/ex3.dir/src/client/PersonP.cpp.o.requires
	$(MAKE) -f CMakeFiles/ex3.dir/build.make CMakeFiles/ex3.dir/src/client/PersonP.cpp.o.provides.build
.PHONY : CMakeFiles/ex3.dir/src/client/PersonP.cpp.o.provides

CMakeFiles/ex3.dir/src/client/PersonP.cpp.o.provides.build: CMakeFiles/ex3.dir/src/client/PersonP.cpp.o


CMakeFiles/ex3.dir/src/client/StandartLogic.cpp.o: CMakeFiles/ex3.dir/flags.make
CMakeFiles/ex3.dir/src/client/StandartLogic.cpp.o: ../src/client/StandartLogic.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/naama/CLionProjects/ex3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/ex3.dir/src/client/StandartLogic.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex3.dir/src/client/StandartLogic.cpp.o -c /home/naama/CLionProjects/ex3/src/client/StandartLogic.cpp

CMakeFiles/ex3.dir/src/client/StandartLogic.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex3.dir/src/client/StandartLogic.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/naama/CLionProjects/ex3/src/client/StandartLogic.cpp > CMakeFiles/ex3.dir/src/client/StandartLogic.cpp.i

CMakeFiles/ex3.dir/src/client/StandartLogic.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex3.dir/src/client/StandartLogic.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/naama/CLionProjects/ex3/src/client/StandartLogic.cpp -o CMakeFiles/ex3.dir/src/client/StandartLogic.cpp.s

CMakeFiles/ex3.dir/src/client/StandartLogic.cpp.o.requires:

.PHONY : CMakeFiles/ex3.dir/src/client/StandartLogic.cpp.o.requires

CMakeFiles/ex3.dir/src/client/StandartLogic.cpp.o.provides: CMakeFiles/ex3.dir/src/client/StandartLogic.cpp.o.requires
	$(MAKE) -f CMakeFiles/ex3.dir/build.make CMakeFiles/ex3.dir/src/client/StandartLogic.cpp.o.provides.build
.PHONY : CMakeFiles/ex3.dir/src/client/StandartLogic.cpp.o.provides

CMakeFiles/ex3.dir/src/client/StandartLogic.cpp.o.provides.build: CMakeFiles/ex3.dir/src/client/StandartLogic.cpp.o


CMakeFiles/ex3.dir/src/client/Point.cpp.o: CMakeFiles/ex3.dir/flags.make
CMakeFiles/ex3.dir/src/client/Point.cpp.o: ../src/client/Point.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/naama/CLionProjects/ex3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/ex3.dir/src/client/Point.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex3.dir/src/client/Point.cpp.o -c /home/naama/CLionProjects/ex3/src/client/Point.cpp

CMakeFiles/ex3.dir/src/client/Point.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex3.dir/src/client/Point.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/naama/CLionProjects/ex3/src/client/Point.cpp > CMakeFiles/ex3.dir/src/client/Point.cpp.i

CMakeFiles/ex3.dir/src/client/Point.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex3.dir/src/client/Point.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/naama/CLionProjects/ex3/src/client/Point.cpp -o CMakeFiles/ex3.dir/src/client/Point.cpp.s

CMakeFiles/ex3.dir/src/client/Point.cpp.o.requires:

.PHONY : CMakeFiles/ex3.dir/src/client/Point.cpp.o.requires

CMakeFiles/ex3.dir/src/client/Point.cpp.o.provides: CMakeFiles/ex3.dir/src/client/Point.cpp.o.requires
	$(MAKE) -f CMakeFiles/ex3.dir/build.make CMakeFiles/ex3.dir/src/client/Point.cpp.o.provides.build
.PHONY : CMakeFiles/ex3.dir/src/client/Point.cpp.o.provides

CMakeFiles/ex3.dir/src/client/Point.cpp.o.provides.build: CMakeFiles/ex3.dir/src/client/Point.cpp.o


CMakeFiles/ex3.dir/src/client/Game.cpp.o: CMakeFiles/ex3.dir/flags.make
CMakeFiles/ex3.dir/src/client/Game.cpp.o: ../src/client/Game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/naama/CLionProjects/ex3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/ex3.dir/src/client/Game.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex3.dir/src/client/Game.cpp.o -c /home/naama/CLionProjects/ex3/src/client/Game.cpp

CMakeFiles/ex3.dir/src/client/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex3.dir/src/client/Game.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/naama/CLionProjects/ex3/src/client/Game.cpp > CMakeFiles/ex3.dir/src/client/Game.cpp.i

CMakeFiles/ex3.dir/src/client/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex3.dir/src/client/Game.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/naama/CLionProjects/ex3/src/client/Game.cpp -o CMakeFiles/ex3.dir/src/client/Game.cpp.s

CMakeFiles/ex3.dir/src/client/Game.cpp.o.requires:

.PHONY : CMakeFiles/ex3.dir/src/client/Game.cpp.o.requires

CMakeFiles/ex3.dir/src/client/Game.cpp.o.provides: CMakeFiles/ex3.dir/src/client/Game.cpp.o.requires
	$(MAKE) -f CMakeFiles/ex3.dir/build.make CMakeFiles/ex3.dir/src/client/Game.cpp.o.provides.build
.PHONY : CMakeFiles/ex3.dir/src/client/Game.cpp.o.provides

CMakeFiles/ex3.dir/src/client/Game.cpp.o.provides.build: CMakeFiles/ex3.dir/src/client/Game.cpp.o


CMakeFiles/ex3.dir/src/client/AIPlayer.cpp.o: CMakeFiles/ex3.dir/flags.make
CMakeFiles/ex3.dir/src/client/AIPlayer.cpp.o: ../src/client/AIPlayer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/naama/CLionProjects/ex3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/ex3.dir/src/client/AIPlayer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex3.dir/src/client/AIPlayer.cpp.o -c /home/naama/CLionProjects/ex3/src/client/AIPlayer.cpp

CMakeFiles/ex3.dir/src/client/AIPlayer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex3.dir/src/client/AIPlayer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/naama/CLionProjects/ex3/src/client/AIPlayer.cpp > CMakeFiles/ex3.dir/src/client/AIPlayer.cpp.i

CMakeFiles/ex3.dir/src/client/AIPlayer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex3.dir/src/client/AIPlayer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/naama/CLionProjects/ex3/src/client/AIPlayer.cpp -o CMakeFiles/ex3.dir/src/client/AIPlayer.cpp.s

CMakeFiles/ex3.dir/src/client/AIPlayer.cpp.o.requires:

.PHONY : CMakeFiles/ex3.dir/src/client/AIPlayer.cpp.o.requires

CMakeFiles/ex3.dir/src/client/AIPlayer.cpp.o.provides: CMakeFiles/ex3.dir/src/client/AIPlayer.cpp.o.requires
	$(MAKE) -f CMakeFiles/ex3.dir/build.make CMakeFiles/ex3.dir/src/client/AIPlayer.cpp.o.provides.build
.PHONY : CMakeFiles/ex3.dir/src/client/AIPlayer.cpp.o.provides

CMakeFiles/ex3.dir/src/client/AIPlayer.cpp.o.provides.build: CMakeFiles/ex3.dir/src/client/AIPlayer.cpp.o


CMakeFiles/ex3.dir/src/client/tests/Board_test.cpp.o: CMakeFiles/ex3.dir/flags.make
CMakeFiles/ex3.dir/src/client/tests/Board_test.cpp.o: ../src/client/tests/Board_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/naama/CLionProjects/ex3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/ex3.dir/src/client/tests/Board_test.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex3.dir/src/client/tests/Board_test.cpp.o -c /home/naama/CLionProjects/ex3/src/client/tests/Board_test.cpp

CMakeFiles/ex3.dir/src/client/tests/Board_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex3.dir/src/client/tests/Board_test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/naama/CLionProjects/ex3/src/client/tests/Board_test.cpp > CMakeFiles/ex3.dir/src/client/tests/Board_test.cpp.i

CMakeFiles/ex3.dir/src/client/tests/Board_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex3.dir/src/client/tests/Board_test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/naama/CLionProjects/ex3/src/client/tests/Board_test.cpp -o CMakeFiles/ex3.dir/src/client/tests/Board_test.cpp.s

CMakeFiles/ex3.dir/src/client/tests/Board_test.cpp.o.requires:

.PHONY : CMakeFiles/ex3.dir/src/client/tests/Board_test.cpp.o.requires

CMakeFiles/ex3.dir/src/client/tests/Board_test.cpp.o.provides: CMakeFiles/ex3.dir/src/client/tests/Board_test.cpp.o.requires
	$(MAKE) -f CMakeFiles/ex3.dir/build.make CMakeFiles/ex3.dir/src/client/tests/Board_test.cpp.o.provides.build
.PHONY : CMakeFiles/ex3.dir/src/client/tests/Board_test.cpp.o.provides

CMakeFiles/ex3.dir/src/client/tests/Board_test.cpp.o.provides.build: CMakeFiles/ex3.dir/src/client/tests/Board_test.cpp.o


CMakeFiles/ex3.dir/src/client/tests/StandartLogic_test.cpp.o: CMakeFiles/ex3.dir/flags.make
CMakeFiles/ex3.dir/src/client/tests/StandartLogic_test.cpp.o: ../src/client/tests/StandartLogic_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/naama/CLionProjects/ex3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/ex3.dir/src/client/tests/StandartLogic_test.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex3.dir/src/client/tests/StandartLogic_test.cpp.o -c /home/naama/CLionProjects/ex3/src/client/tests/StandartLogic_test.cpp

CMakeFiles/ex3.dir/src/client/tests/StandartLogic_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex3.dir/src/client/tests/StandartLogic_test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/naama/CLionProjects/ex3/src/client/tests/StandartLogic_test.cpp > CMakeFiles/ex3.dir/src/client/tests/StandartLogic_test.cpp.i

CMakeFiles/ex3.dir/src/client/tests/StandartLogic_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex3.dir/src/client/tests/StandartLogic_test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/naama/CLionProjects/ex3/src/client/tests/StandartLogic_test.cpp -o CMakeFiles/ex3.dir/src/client/tests/StandartLogic_test.cpp.s

CMakeFiles/ex3.dir/src/client/tests/StandartLogic_test.cpp.o.requires:

.PHONY : CMakeFiles/ex3.dir/src/client/tests/StandartLogic_test.cpp.o.requires

CMakeFiles/ex3.dir/src/client/tests/StandartLogic_test.cpp.o.provides: CMakeFiles/ex3.dir/src/client/tests/StandartLogic_test.cpp.o.requires
	$(MAKE) -f CMakeFiles/ex3.dir/build.make CMakeFiles/ex3.dir/src/client/tests/StandartLogic_test.cpp.o.provides.build
.PHONY : CMakeFiles/ex3.dir/src/client/tests/StandartLogic_test.cpp.o.provides

CMakeFiles/ex3.dir/src/client/tests/StandartLogic_test.cpp.o.provides.build: CMakeFiles/ex3.dir/src/client/tests/StandartLogic_test.cpp.o


CMakeFiles/ex3.dir/src/client/tests/AIPlayer_test.cpp.o: CMakeFiles/ex3.dir/flags.make
CMakeFiles/ex3.dir/src/client/tests/AIPlayer_test.cpp.o: ../src/client/tests/AIPlayer_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/naama/CLionProjects/ex3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/ex3.dir/src/client/tests/AIPlayer_test.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex3.dir/src/client/tests/AIPlayer_test.cpp.o -c /home/naama/CLionProjects/ex3/src/client/tests/AIPlayer_test.cpp

CMakeFiles/ex3.dir/src/client/tests/AIPlayer_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex3.dir/src/client/tests/AIPlayer_test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/naama/CLionProjects/ex3/src/client/tests/AIPlayer_test.cpp > CMakeFiles/ex3.dir/src/client/tests/AIPlayer_test.cpp.i

CMakeFiles/ex3.dir/src/client/tests/AIPlayer_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex3.dir/src/client/tests/AIPlayer_test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/naama/CLionProjects/ex3/src/client/tests/AIPlayer_test.cpp -o CMakeFiles/ex3.dir/src/client/tests/AIPlayer_test.cpp.s

CMakeFiles/ex3.dir/src/client/tests/AIPlayer_test.cpp.o.requires:

.PHONY : CMakeFiles/ex3.dir/src/client/tests/AIPlayer_test.cpp.o.requires

CMakeFiles/ex3.dir/src/client/tests/AIPlayer_test.cpp.o.provides: CMakeFiles/ex3.dir/src/client/tests/AIPlayer_test.cpp.o.requires
	$(MAKE) -f CMakeFiles/ex3.dir/build.make CMakeFiles/ex3.dir/src/client/tests/AIPlayer_test.cpp.o.provides.build
.PHONY : CMakeFiles/ex3.dir/src/client/tests/AIPlayer_test.cpp.o.provides

CMakeFiles/ex3.dir/src/client/tests/AIPlayer_test.cpp.o.provides.build: CMakeFiles/ex3.dir/src/client/tests/AIPlayer_test.cpp.o


CMakeFiles/ex3.dir/src/client/tests/PersonP_teset.cpp.o: CMakeFiles/ex3.dir/flags.make
CMakeFiles/ex3.dir/src/client/tests/PersonP_teset.cpp.o: ../src/client/tests/PersonP_teset.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/naama/CLionProjects/ex3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/ex3.dir/src/client/tests/PersonP_teset.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex3.dir/src/client/tests/PersonP_teset.cpp.o -c /home/naama/CLionProjects/ex3/src/client/tests/PersonP_teset.cpp

CMakeFiles/ex3.dir/src/client/tests/PersonP_teset.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex3.dir/src/client/tests/PersonP_teset.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/naama/CLionProjects/ex3/src/client/tests/PersonP_teset.cpp > CMakeFiles/ex3.dir/src/client/tests/PersonP_teset.cpp.i

CMakeFiles/ex3.dir/src/client/tests/PersonP_teset.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex3.dir/src/client/tests/PersonP_teset.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/naama/CLionProjects/ex3/src/client/tests/PersonP_teset.cpp -o CMakeFiles/ex3.dir/src/client/tests/PersonP_teset.cpp.s

CMakeFiles/ex3.dir/src/client/tests/PersonP_teset.cpp.o.requires:

.PHONY : CMakeFiles/ex3.dir/src/client/tests/PersonP_teset.cpp.o.requires

CMakeFiles/ex3.dir/src/client/tests/PersonP_teset.cpp.o.provides: CMakeFiles/ex3.dir/src/client/tests/PersonP_teset.cpp.o.requires
	$(MAKE) -f CMakeFiles/ex3.dir/build.make CMakeFiles/ex3.dir/src/client/tests/PersonP_teset.cpp.o.provides.build
.PHONY : CMakeFiles/ex3.dir/src/client/tests/PersonP_teset.cpp.o.provides

CMakeFiles/ex3.dir/src/client/tests/PersonP_teset.cpp.o.provides.build: CMakeFiles/ex3.dir/src/client/tests/PersonP_teset.cpp.o


CMakeFiles/ex3.dir/src/client/Client.cpp.o: CMakeFiles/ex3.dir/flags.make
CMakeFiles/ex3.dir/src/client/Client.cpp.o: ../src/client/Client.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/naama/CLionProjects/ex3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/ex3.dir/src/client/Client.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex3.dir/src/client/Client.cpp.o -c /home/naama/CLionProjects/ex3/src/client/Client.cpp

CMakeFiles/ex3.dir/src/client/Client.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex3.dir/src/client/Client.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/naama/CLionProjects/ex3/src/client/Client.cpp > CMakeFiles/ex3.dir/src/client/Client.cpp.i

CMakeFiles/ex3.dir/src/client/Client.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex3.dir/src/client/Client.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/naama/CLionProjects/ex3/src/client/Client.cpp -o CMakeFiles/ex3.dir/src/client/Client.cpp.s

CMakeFiles/ex3.dir/src/client/Client.cpp.o.requires:

.PHONY : CMakeFiles/ex3.dir/src/client/Client.cpp.o.requires

CMakeFiles/ex3.dir/src/client/Client.cpp.o.provides: CMakeFiles/ex3.dir/src/client/Client.cpp.o.requires
	$(MAKE) -f CMakeFiles/ex3.dir/build.make CMakeFiles/ex3.dir/src/client/Client.cpp.o.provides.build
.PHONY : CMakeFiles/ex3.dir/src/client/Client.cpp.o.provides

CMakeFiles/ex3.dir/src/client/Client.cpp.o.provides.build: CMakeFiles/ex3.dir/src/client/Client.cpp.o


CMakeFiles/ex3.dir/src/client/RemotePlayer.cpp.o: CMakeFiles/ex3.dir/flags.make
CMakeFiles/ex3.dir/src/client/RemotePlayer.cpp.o: ../src/client/RemotePlayer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/naama/CLionProjects/ex3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/ex3.dir/src/client/RemotePlayer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex3.dir/src/client/RemotePlayer.cpp.o -c /home/naama/CLionProjects/ex3/src/client/RemotePlayer.cpp

CMakeFiles/ex3.dir/src/client/RemotePlayer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex3.dir/src/client/RemotePlayer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/naama/CLionProjects/ex3/src/client/RemotePlayer.cpp > CMakeFiles/ex3.dir/src/client/RemotePlayer.cpp.i

CMakeFiles/ex3.dir/src/client/RemotePlayer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex3.dir/src/client/RemotePlayer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/naama/CLionProjects/ex3/src/client/RemotePlayer.cpp -o CMakeFiles/ex3.dir/src/client/RemotePlayer.cpp.s

CMakeFiles/ex3.dir/src/client/RemotePlayer.cpp.o.requires:

.PHONY : CMakeFiles/ex3.dir/src/client/RemotePlayer.cpp.o.requires

CMakeFiles/ex3.dir/src/client/RemotePlayer.cpp.o.provides: CMakeFiles/ex3.dir/src/client/RemotePlayer.cpp.o.requires
	$(MAKE) -f CMakeFiles/ex3.dir/build.make CMakeFiles/ex3.dir/src/client/RemotePlayer.cpp.o.provides.build
.PHONY : CMakeFiles/ex3.dir/src/client/RemotePlayer.cpp.o.provides

CMakeFiles/ex3.dir/src/client/RemotePlayer.cpp.o.provides.build: CMakeFiles/ex3.dir/src/client/RemotePlayer.cpp.o


CMakeFiles/ex3.dir/src/client/PersonPServer.cpp.o: CMakeFiles/ex3.dir/flags.make
CMakeFiles/ex3.dir/src/client/PersonPServer.cpp.o: ../src/client/PersonPServer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/naama/CLionProjects/ex3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/ex3.dir/src/client/PersonPServer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex3.dir/src/client/PersonPServer.cpp.o -c /home/naama/CLionProjects/ex3/src/client/PersonPServer.cpp

CMakeFiles/ex3.dir/src/client/PersonPServer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex3.dir/src/client/PersonPServer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/naama/CLionProjects/ex3/src/client/PersonPServer.cpp > CMakeFiles/ex3.dir/src/client/PersonPServer.cpp.i

CMakeFiles/ex3.dir/src/client/PersonPServer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex3.dir/src/client/PersonPServer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/naama/CLionProjects/ex3/src/client/PersonPServer.cpp -o CMakeFiles/ex3.dir/src/client/PersonPServer.cpp.s

CMakeFiles/ex3.dir/src/client/PersonPServer.cpp.o.requires:

.PHONY : CMakeFiles/ex3.dir/src/client/PersonPServer.cpp.o.requires

CMakeFiles/ex3.dir/src/client/PersonPServer.cpp.o.provides: CMakeFiles/ex3.dir/src/client/PersonPServer.cpp.o.requires
	$(MAKE) -f CMakeFiles/ex3.dir/build.make CMakeFiles/ex3.dir/src/client/PersonPServer.cpp.o.provides.build
.PHONY : CMakeFiles/ex3.dir/src/client/PersonPServer.cpp.o.provides

CMakeFiles/ex3.dir/src/client/PersonPServer.cpp.o.provides.build: CMakeFiles/ex3.dir/src/client/PersonPServer.cpp.o


CMakeFiles/ex3.dir/src/client/MenuConsole.cpp.o: CMakeFiles/ex3.dir/flags.make
CMakeFiles/ex3.dir/src/client/MenuConsole.cpp.o: ../src/client/MenuConsole.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/naama/CLionProjects/ex3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/ex3.dir/src/client/MenuConsole.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex3.dir/src/client/MenuConsole.cpp.o -c /home/naama/CLionProjects/ex3/src/client/MenuConsole.cpp

CMakeFiles/ex3.dir/src/client/MenuConsole.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex3.dir/src/client/MenuConsole.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/naama/CLionProjects/ex3/src/client/MenuConsole.cpp > CMakeFiles/ex3.dir/src/client/MenuConsole.cpp.i

CMakeFiles/ex3.dir/src/client/MenuConsole.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex3.dir/src/client/MenuConsole.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/naama/CLionProjects/ex3/src/client/MenuConsole.cpp -o CMakeFiles/ex3.dir/src/client/MenuConsole.cpp.s

CMakeFiles/ex3.dir/src/client/MenuConsole.cpp.o.requires:

.PHONY : CMakeFiles/ex3.dir/src/client/MenuConsole.cpp.o.requires

CMakeFiles/ex3.dir/src/client/MenuConsole.cpp.o.provides: CMakeFiles/ex3.dir/src/client/MenuConsole.cpp.o.requires
	$(MAKE) -f CMakeFiles/ex3.dir/build.make CMakeFiles/ex3.dir/src/client/MenuConsole.cpp.o.provides.build
.PHONY : CMakeFiles/ex3.dir/src/client/MenuConsole.cpp.o.provides

CMakeFiles/ex3.dir/src/client/MenuConsole.cpp.o.provides.build: CMakeFiles/ex3.dir/src/client/MenuConsole.cpp.o


CMakeFiles/ex3.dir/src/client/PrintConsole.cpp.o: CMakeFiles/ex3.dir/flags.make
CMakeFiles/ex3.dir/src/client/PrintConsole.cpp.o: ../src/client/PrintConsole.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/naama/CLionProjects/ex3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object CMakeFiles/ex3.dir/src/client/PrintConsole.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex3.dir/src/client/PrintConsole.cpp.o -c /home/naama/CLionProjects/ex3/src/client/PrintConsole.cpp

CMakeFiles/ex3.dir/src/client/PrintConsole.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex3.dir/src/client/PrintConsole.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/naama/CLionProjects/ex3/src/client/PrintConsole.cpp > CMakeFiles/ex3.dir/src/client/PrintConsole.cpp.i

CMakeFiles/ex3.dir/src/client/PrintConsole.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex3.dir/src/client/PrintConsole.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/naama/CLionProjects/ex3/src/client/PrintConsole.cpp -o CMakeFiles/ex3.dir/src/client/PrintConsole.cpp.s

CMakeFiles/ex3.dir/src/client/PrintConsole.cpp.o.requires:

.PHONY : CMakeFiles/ex3.dir/src/client/PrintConsole.cpp.o.requires

CMakeFiles/ex3.dir/src/client/PrintConsole.cpp.o.provides: CMakeFiles/ex3.dir/src/client/PrintConsole.cpp.o.requires
	$(MAKE) -f CMakeFiles/ex3.dir/build.make CMakeFiles/ex3.dir/src/client/PrintConsole.cpp.o.provides.build
.PHONY : CMakeFiles/ex3.dir/src/client/PrintConsole.cpp.o.provides

CMakeFiles/ex3.dir/src/client/PrintConsole.cpp.o.provides.build: CMakeFiles/ex3.dir/src/client/PrintConsole.cpp.o


# Object files for target ex3
ex3_OBJECTS = \
"CMakeFiles/ex3.dir/src/client/main.cpp.o" \
"CMakeFiles/ex3.dir/src/client/BoardConsole.cpp.o" \
"CMakeFiles/ex3.dir/src/client/PersonP.cpp.o" \
"CMakeFiles/ex3.dir/src/client/StandartLogic.cpp.o" \
"CMakeFiles/ex3.dir/src/client/Point.cpp.o" \
"CMakeFiles/ex3.dir/src/client/Game.cpp.o" \
"CMakeFiles/ex3.dir/src/client/AIPlayer.cpp.o" \
"CMakeFiles/ex3.dir/src/client/tests/Board_test.cpp.o" \
"CMakeFiles/ex3.dir/src/client/tests/StandartLogic_test.cpp.o" \
"CMakeFiles/ex3.dir/src/client/tests/AIPlayer_test.cpp.o" \
"CMakeFiles/ex3.dir/src/client/tests/PersonP_teset.cpp.o" \
"CMakeFiles/ex3.dir/src/client/Client.cpp.o" \
"CMakeFiles/ex3.dir/src/client/RemotePlayer.cpp.o" \
"CMakeFiles/ex3.dir/src/client/PersonPServer.cpp.o" \
"CMakeFiles/ex3.dir/src/client/MenuConsole.cpp.o" \
"CMakeFiles/ex3.dir/src/client/PrintConsole.cpp.o"

# External object files for target ex3
ex3_EXTERNAL_OBJECTS =

ex3: CMakeFiles/ex3.dir/src/client/main.cpp.o
ex3: CMakeFiles/ex3.dir/src/client/BoardConsole.cpp.o
ex3: CMakeFiles/ex3.dir/src/client/PersonP.cpp.o
ex3: CMakeFiles/ex3.dir/src/client/StandartLogic.cpp.o
ex3: CMakeFiles/ex3.dir/src/client/Point.cpp.o
ex3: CMakeFiles/ex3.dir/src/client/Game.cpp.o
ex3: CMakeFiles/ex3.dir/src/client/AIPlayer.cpp.o
ex3: CMakeFiles/ex3.dir/src/client/tests/Board_test.cpp.o
ex3: CMakeFiles/ex3.dir/src/client/tests/StandartLogic_test.cpp.o
ex3: CMakeFiles/ex3.dir/src/client/tests/AIPlayer_test.cpp.o
ex3: CMakeFiles/ex3.dir/src/client/tests/PersonP_teset.cpp.o
ex3: CMakeFiles/ex3.dir/src/client/Client.cpp.o
ex3: CMakeFiles/ex3.dir/src/client/RemotePlayer.cpp.o
ex3: CMakeFiles/ex3.dir/src/client/PersonPServer.cpp.o
ex3: CMakeFiles/ex3.dir/src/client/MenuConsole.cpp.o
ex3: CMakeFiles/ex3.dir/src/client/PrintConsole.cpp.o
ex3: CMakeFiles/ex3.dir/build.make
ex3: src/client/lib/googletest-release-1.8.0/googlemock/gtest/libgtest.a
ex3: src/client/lib/googletest-release-1.8.0/googlemock/gtest/libgtest_main.a
ex3: src/client/lib/googletest-release-1.8.0/googlemock/libgmock.a
ex3: src/client/lib/googletest-release-1.8.0/googlemock/gtest/libgtest.a
ex3: CMakeFiles/ex3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/naama/CLionProjects/ex3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Linking CXX executable ex3"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ex3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ex3.dir/build: ex3

.PHONY : CMakeFiles/ex3.dir/build

CMakeFiles/ex3.dir/requires: CMakeFiles/ex3.dir/src/client/main.cpp.o.requires
CMakeFiles/ex3.dir/requires: CMakeFiles/ex3.dir/src/client/BoardConsole.cpp.o.requires
CMakeFiles/ex3.dir/requires: CMakeFiles/ex3.dir/src/client/PersonP.cpp.o.requires
CMakeFiles/ex3.dir/requires: CMakeFiles/ex3.dir/src/client/StandartLogic.cpp.o.requires
CMakeFiles/ex3.dir/requires: CMakeFiles/ex3.dir/src/client/Point.cpp.o.requires
CMakeFiles/ex3.dir/requires: CMakeFiles/ex3.dir/src/client/Game.cpp.o.requires
CMakeFiles/ex3.dir/requires: CMakeFiles/ex3.dir/src/client/AIPlayer.cpp.o.requires
CMakeFiles/ex3.dir/requires: CMakeFiles/ex3.dir/src/client/tests/Board_test.cpp.o.requires
CMakeFiles/ex3.dir/requires: CMakeFiles/ex3.dir/src/client/tests/StandartLogic_test.cpp.o.requires
CMakeFiles/ex3.dir/requires: CMakeFiles/ex3.dir/src/client/tests/AIPlayer_test.cpp.o.requires
CMakeFiles/ex3.dir/requires: CMakeFiles/ex3.dir/src/client/tests/PersonP_teset.cpp.o.requires
CMakeFiles/ex3.dir/requires: CMakeFiles/ex3.dir/src/client/Client.cpp.o.requires
CMakeFiles/ex3.dir/requires: CMakeFiles/ex3.dir/src/client/RemotePlayer.cpp.o.requires
CMakeFiles/ex3.dir/requires: CMakeFiles/ex3.dir/src/client/PersonPServer.cpp.o.requires
CMakeFiles/ex3.dir/requires: CMakeFiles/ex3.dir/src/client/MenuConsole.cpp.o.requires
CMakeFiles/ex3.dir/requires: CMakeFiles/ex3.dir/src/client/PrintConsole.cpp.o.requires

.PHONY : CMakeFiles/ex3.dir/requires

CMakeFiles/ex3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ex3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ex3.dir/clean

CMakeFiles/ex3.dir/depend:
	cd /home/naama/CLionProjects/ex3/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/naama/CLionProjects/ex3 /home/naama/CLionProjects/ex3 /home/naama/CLionProjects/ex3/cmake-build-debug /home/naama/CLionProjects/ex3/cmake-build-debug /home/naama/CLionProjects/ex3/cmake-build-debug/CMakeFiles/ex3.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ex3.dir/depend

