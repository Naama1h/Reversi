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
CMAKE_COMMAND = /home/tchelet/clion-2017.2.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/tchelet/clion-2017.2.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/tchelet/CLionProjects/ex3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tchelet/CLionProjects/ex3/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ex3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ex3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ex3.dir/flags.make

CMakeFiles/ex3.dir/main.cpp.o: CMakeFiles/ex3.dir/flags.make
CMakeFiles/ex3.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tchelet/CLionProjects/ex3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ex3.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex3.dir/main.cpp.o -c /home/tchelet/CLionProjects/ex3/main.cpp

CMakeFiles/ex3.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex3.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tchelet/CLionProjects/ex3/main.cpp > CMakeFiles/ex3.dir/main.cpp.i

CMakeFiles/ex3.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex3.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tchelet/CLionProjects/ex3/main.cpp -o CMakeFiles/ex3.dir/main.cpp.s

CMakeFiles/ex3.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/ex3.dir/main.cpp.o.requires

CMakeFiles/ex3.dir/main.cpp.o.provides: CMakeFiles/ex3.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/ex3.dir/build.make CMakeFiles/ex3.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/ex3.dir/main.cpp.o.provides

CMakeFiles/ex3.dir/main.cpp.o.provides.build: CMakeFiles/ex3.dir/main.cpp.o


CMakeFiles/ex3.dir/BoardConsole.cpp.o: CMakeFiles/ex3.dir/flags.make
CMakeFiles/ex3.dir/BoardConsole.cpp.o: ../BoardConsole.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tchelet/CLionProjects/ex3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ex3.dir/BoardConsole.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex3.dir/BoardConsole.cpp.o -c /home/tchelet/CLionProjects/ex3/BoardConsole.cpp

CMakeFiles/ex3.dir/BoardConsole.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex3.dir/BoardConsole.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tchelet/CLionProjects/ex3/BoardConsole.cpp > CMakeFiles/ex3.dir/BoardConsole.cpp.i

CMakeFiles/ex3.dir/BoardConsole.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex3.dir/BoardConsole.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tchelet/CLionProjects/ex3/BoardConsole.cpp -o CMakeFiles/ex3.dir/BoardConsole.cpp.s

CMakeFiles/ex3.dir/BoardConsole.cpp.o.requires:

.PHONY : CMakeFiles/ex3.dir/BoardConsole.cpp.o.requires

CMakeFiles/ex3.dir/BoardConsole.cpp.o.provides: CMakeFiles/ex3.dir/BoardConsole.cpp.o.requires
	$(MAKE) -f CMakeFiles/ex3.dir/build.make CMakeFiles/ex3.dir/BoardConsole.cpp.o.provides.build
.PHONY : CMakeFiles/ex3.dir/BoardConsole.cpp.o.provides

CMakeFiles/ex3.dir/BoardConsole.cpp.o.provides.build: CMakeFiles/ex3.dir/BoardConsole.cpp.o


CMakeFiles/ex3.dir/PersonP.cpp.o: CMakeFiles/ex3.dir/flags.make
CMakeFiles/ex3.dir/PersonP.cpp.o: ../PersonP.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tchelet/CLionProjects/ex3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/ex3.dir/PersonP.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex3.dir/PersonP.cpp.o -c /home/tchelet/CLionProjects/ex3/PersonP.cpp

CMakeFiles/ex3.dir/PersonP.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex3.dir/PersonP.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tchelet/CLionProjects/ex3/PersonP.cpp > CMakeFiles/ex3.dir/PersonP.cpp.i

CMakeFiles/ex3.dir/PersonP.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex3.dir/PersonP.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tchelet/CLionProjects/ex3/PersonP.cpp -o CMakeFiles/ex3.dir/PersonP.cpp.s

CMakeFiles/ex3.dir/PersonP.cpp.o.requires:

.PHONY : CMakeFiles/ex3.dir/PersonP.cpp.o.requires

CMakeFiles/ex3.dir/PersonP.cpp.o.provides: CMakeFiles/ex3.dir/PersonP.cpp.o.requires
	$(MAKE) -f CMakeFiles/ex3.dir/build.make CMakeFiles/ex3.dir/PersonP.cpp.o.provides.build
.PHONY : CMakeFiles/ex3.dir/PersonP.cpp.o.provides

CMakeFiles/ex3.dir/PersonP.cpp.o.provides.build: CMakeFiles/ex3.dir/PersonP.cpp.o


CMakeFiles/ex3.dir/StandartLogic.cpp.o: CMakeFiles/ex3.dir/flags.make
CMakeFiles/ex3.dir/StandartLogic.cpp.o: ../StandartLogic.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tchelet/CLionProjects/ex3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/ex3.dir/StandartLogic.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex3.dir/StandartLogic.cpp.o -c /home/tchelet/CLionProjects/ex3/StandartLogic.cpp

CMakeFiles/ex3.dir/StandartLogic.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex3.dir/StandartLogic.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tchelet/CLionProjects/ex3/StandartLogic.cpp > CMakeFiles/ex3.dir/StandartLogic.cpp.i

CMakeFiles/ex3.dir/StandartLogic.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex3.dir/StandartLogic.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tchelet/CLionProjects/ex3/StandartLogic.cpp -o CMakeFiles/ex3.dir/StandartLogic.cpp.s

CMakeFiles/ex3.dir/StandartLogic.cpp.o.requires:

.PHONY : CMakeFiles/ex3.dir/StandartLogic.cpp.o.requires

CMakeFiles/ex3.dir/StandartLogic.cpp.o.provides: CMakeFiles/ex3.dir/StandartLogic.cpp.o.requires
	$(MAKE) -f CMakeFiles/ex3.dir/build.make CMakeFiles/ex3.dir/StandartLogic.cpp.o.provides.build
.PHONY : CMakeFiles/ex3.dir/StandartLogic.cpp.o.provides

CMakeFiles/ex3.dir/StandartLogic.cpp.o.provides.build: CMakeFiles/ex3.dir/StandartLogic.cpp.o


CMakeFiles/ex3.dir/Point.cpp.o: CMakeFiles/ex3.dir/flags.make
CMakeFiles/ex3.dir/Point.cpp.o: ../Point.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tchelet/CLionProjects/ex3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/ex3.dir/Point.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex3.dir/Point.cpp.o -c /home/tchelet/CLionProjects/ex3/Point.cpp

CMakeFiles/ex3.dir/Point.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex3.dir/Point.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tchelet/CLionProjects/ex3/Point.cpp > CMakeFiles/ex3.dir/Point.cpp.i

CMakeFiles/ex3.dir/Point.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex3.dir/Point.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tchelet/CLionProjects/ex3/Point.cpp -o CMakeFiles/ex3.dir/Point.cpp.s

CMakeFiles/ex3.dir/Point.cpp.o.requires:

.PHONY : CMakeFiles/ex3.dir/Point.cpp.o.requires

CMakeFiles/ex3.dir/Point.cpp.o.provides: CMakeFiles/ex3.dir/Point.cpp.o.requires
	$(MAKE) -f CMakeFiles/ex3.dir/build.make CMakeFiles/ex3.dir/Point.cpp.o.provides.build
.PHONY : CMakeFiles/ex3.dir/Point.cpp.o.provides

CMakeFiles/ex3.dir/Point.cpp.o.provides.build: CMakeFiles/ex3.dir/Point.cpp.o


CMakeFiles/ex3.dir/Game.cpp.o: CMakeFiles/ex3.dir/flags.make
CMakeFiles/ex3.dir/Game.cpp.o: ../Game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tchelet/CLionProjects/ex3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/ex3.dir/Game.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex3.dir/Game.cpp.o -c /home/tchelet/CLionProjects/ex3/Game.cpp

CMakeFiles/ex3.dir/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex3.dir/Game.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tchelet/CLionProjects/ex3/Game.cpp > CMakeFiles/ex3.dir/Game.cpp.i

CMakeFiles/ex3.dir/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex3.dir/Game.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tchelet/CLionProjects/ex3/Game.cpp -o CMakeFiles/ex3.dir/Game.cpp.s

CMakeFiles/ex3.dir/Game.cpp.o.requires:

.PHONY : CMakeFiles/ex3.dir/Game.cpp.o.requires

CMakeFiles/ex3.dir/Game.cpp.o.provides: CMakeFiles/ex3.dir/Game.cpp.o.requires
	$(MAKE) -f CMakeFiles/ex3.dir/build.make CMakeFiles/ex3.dir/Game.cpp.o.provides.build
.PHONY : CMakeFiles/ex3.dir/Game.cpp.o.provides

CMakeFiles/ex3.dir/Game.cpp.o.provides.build: CMakeFiles/ex3.dir/Game.cpp.o


CMakeFiles/ex3.dir/AIPlayer.cpp.o: CMakeFiles/ex3.dir/flags.make
CMakeFiles/ex3.dir/AIPlayer.cpp.o: ../AIPlayer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tchelet/CLionProjects/ex3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/ex3.dir/AIPlayer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex3.dir/AIPlayer.cpp.o -c /home/tchelet/CLionProjects/ex3/AIPlayer.cpp

CMakeFiles/ex3.dir/AIPlayer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex3.dir/AIPlayer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tchelet/CLionProjects/ex3/AIPlayer.cpp > CMakeFiles/ex3.dir/AIPlayer.cpp.i

CMakeFiles/ex3.dir/AIPlayer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex3.dir/AIPlayer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tchelet/CLionProjects/ex3/AIPlayer.cpp -o CMakeFiles/ex3.dir/AIPlayer.cpp.s

CMakeFiles/ex3.dir/AIPlayer.cpp.o.requires:

.PHONY : CMakeFiles/ex3.dir/AIPlayer.cpp.o.requires

CMakeFiles/ex3.dir/AIPlayer.cpp.o.provides: CMakeFiles/ex3.dir/AIPlayer.cpp.o.requires
	$(MAKE) -f CMakeFiles/ex3.dir/build.make CMakeFiles/ex3.dir/AIPlayer.cpp.o.provides.build
.PHONY : CMakeFiles/ex3.dir/AIPlayer.cpp.o.provides

CMakeFiles/ex3.dir/AIPlayer.cpp.o.provides.build: CMakeFiles/ex3.dir/AIPlayer.cpp.o


CMakeFiles/ex3.dir/tests/Board_test.cpp.o: CMakeFiles/ex3.dir/flags.make
CMakeFiles/ex3.dir/tests/Board_test.cpp.o: ../tests/Board_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tchelet/CLionProjects/ex3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/ex3.dir/tests/Board_test.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex3.dir/tests/Board_test.cpp.o -c /home/tchelet/CLionProjects/ex3/tests/Board_test.cpp

CMakeFiles/ex3.dir/tests/Board_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex3.dir/tests/Board_test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tchelet/CLionProjects/ex3/tests/Board_test.cpp > CMakeFiles/ex3.dir/tests/Board_test.cpp.i

CMakeFiles/ex3.dir/tests/Board_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex3.dir/tests/Board_test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tchelet/CLionProjects/ex3/tests/Board_test.cpp -o CMakeFiles/ex3.dir/tests/Board_test.cpp.s

CMakeFiles/ex3.dir/tests/Board_test.cpp.o.requires:

.PHONY : CMakeFiles/ex3.dir/tests/Board_test.cpp.o.requires

CMakeFiles/ex3.dir/tests/Board_test.cpp.o.provides: CMakeFiles/ex3.dir/tests/Board_test.cpp.o.requires
	$(MAKE) -f CMakeFiles/ex3.dir/build.make CMakeFiles/ex3.dir/tests/Board_test.cpp.o.provides.build
.PHONY : CMakeFiles/ex3.dir/tests/Board_test.cpp.o.provides

CMakeFiles/ex3.dir/tests/Board_test.cpp.o.provides.build: CMakeFiles/ex3.dir/tests/Board_test.cpp.o


CMakeFiles/ex3.dir/tests/StandartLogic_test.cpp.o: CMakeFiles/ex3.dir/flags.make
CMakeFiles/ex3.dir/tests/StandartLogic_test.cpp.o: ../tests/StandartLogic_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tchelet/CLionProjects/ex3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/ex3.dir/tests/StandartLogic_test.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex3.dir/tests/StandartLogic_test.cpp.o -c /home/tchelet/CLionProjects/ex3/tests/StandartLogic_test.cpp

CMakeFiles/ex3.dir/tests/StandartLogic_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex3.dir/tests/StandartLogic_test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tchelet/CLionProjects/ex3/tests/StandartLogic_test.cpp > CMakeFiles/ex3.dir/tests/StandartLogic_test.cpp.i

CMakeFiles/ex3.dir/tests/StandartLogic_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex3.dir/tests/StandartLogic_test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tchelet/CLionProjects/ex3/tests/StandartLogic_test.cpp -o CMakeFiles/ex3.dir/tests/StandartLogic_test.cpp.s

CMakeFiles/ex3.dir/tests/StandartLogic_test.cpp.o.requires:

.PHONY : CMakeFiles/ex3.dir/tests/StandartLogic_test.cpp.o.requires

CMakeFiles/ex3.dir/tests/StandartLogic_test.cpp.o.provides: CMakeFiles/ex3.dir/tests/StandartLogic_test.cpp.o.requires
	$(MAKE) -f CMakeFiles/ex3.dir/build.make CMakeFiles/ex3.dir/tests/StandartLogic_test.cpp.o.provides.build
.PHONY : CMakeFiles/ex3.dir/tests/StandartLogic_test.cpp.o.provides

CMakeFiles/ex3.dir/tests/StandartLogic_test.cpp.o.provides.build: CMakeFiles/ex3.dir/tests/StandartLogic_test.cpp.o


CMakeFiles/ex3.dir/tests/AIPlayer_test.cpp.o: CMakeFiles/ex3.dir/flags.make
CMakeFiles/ex3.dir/tests/AIPlayer_test.cpp.o: ../tests/AIPlayer_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tchelet/CLionProjects/ex3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/ex3.dir/tests/AIPlayer_test.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex3.dir/tests/AIPlayer_test.cpp.o -c /home/tchelet/CLionProjects/ex3/tests/AIPlayer_test.cpp

CMakeFiles/ex3.dir/tests/AIPlayer_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex3.dir/tests/AIPlayer_test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tchelet/CLionProjects/ex3/tests/AIPlayer_test.cpp > CMakeFiles/ex3.dir/tests/AIPlayer_test.cpp.i

CMakeFiles/ex3.dir/tests/AIPlayer_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex3.dir/tests/AIPlayer_test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tchelet/CLionProjects/ex3/tests/AIPlayer_test.cpp -o CMakeFiles/ex3.dir/tests/AIPlayer_test.cpp.s

CMakeFiles/ex3.dir/tests/AIPlayer_test.cpp.o.requires:

.PHONY : CMakeFiles/ex3.dir/tests/AIPlayer_test.cpp.o.requires

CMakeFiles/ex3.dir/tests/AIPlayer_test.cpp.o.provides: CMakeFiles/ex3.dir/tests/AIPlayer_test.cpp.o.requires
	$(MAKE) -f CMakeFiles/ex3.dir/build.make CMakeFiles/ex3.dir/tests/AIPlayer_test.cpp.o.provides.build
.PHONY : CMakeFiles/ex3.dir/tests/AIPlayer_test.cpp.o.provides

CMakeFiles/ex3.dir/tests/AIPlayer_test.cpp.o.provides.build: CMakeFiles/ex3.dir/tests/AIPlayer_test.cpp.o


CMakeFiles/ex3.dir/tests/PersonP_teset.cpp.o: CMakeFiles/ex3.dir/flags.make
CMakeFiles/ex3.dir/tests/PersonP_teset.cpp.o: ../tests/PersonP_teset.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tchelet/CLionProjects/ex3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/ex3.dir/tests/PersonP_teset.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex3.dir/tests/PersonP_teset.cpp.o -c /home/tchelet/CLionProjects/ex3/tests/PersonP_teset.cpp

CMakeFiles/ex3.dir/tests/PersonP_teset.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex3.dir/tests/PersonP_teset.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tchelet/CLionProjects/ex3/tests/PersonP_teset.cpp > CMakeFiles/ex3.dir/tests/PersonP_teset.cpp.i

CMakeFiles/ex3.dir/tests/PersonP_teset.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex3.dir/tests/PersonP_teset.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tchelet/CLionProjects/ex3/tests/PersonP_teset.cpp -o CMakeFiles/ex3.dir/tests/PersonP_teset.cpp.s

CMakeFiles/ex3.dir/tests/PersonP_teset.cpp.o.requires:

.PHONY : CMakeFiles/ex3.dir/tests/PersonP_teset.cpp.o.requires

CMakeFiles/ex3.dir/tests/PersonP_teset.cpp.o.provides: CMakeFiles/ex3.dir/tests/PersonP_teset.cpp.o.requires
	$(MAKE) -f CMakeFiles/ex3.dir/build.make CMakeFiles/ex3.dir/tests/PersonP_teset.cpp.o.provides.build
.PHONY : CMakeFiles/ex3.dir/tests/PersonP_teset.cpp.o.provides

CMakeFiles/ex3.dir/tests/PersonP_teset.cpp.o.provides.build: CMakeFiles/ex3.dir/tests/PersonP_teset.cpp.o


CMakeFiles/ex3.dir/PrintConsole.cpp.o: CMakeFiles/ex3.dir/flags.make
CMakeFiles/ex3.dir/PrintConsole.cpp.o: ../PrintConsole.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tchelet/CLionProjects/ex3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/ex3.dir/PrintConsole.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex3.dir/PrintConsole.cpp.o -c /home/tchelet/CLionProjects/ex3/PrintConsole.cpp

CMakeFiles/ex3.dir/PrintConsole.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex3.dir/PrintConsole.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tchelet/CLionProjects/ex3/PrintConsole.cpp > CMakeFiles/ex3.dir/PrintConsole.cpp.i

CMakeFiles/ex3.dir/PrintConsole.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex3.dir/PrintConsole.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tchelet/CLionProjects/ex3/PrintConsole.cpp -o CMakeFiles/ex3.dir/PrintConsole.cpp.s

CMakeFiles/ex3.dir/PrintConsole.cpp.o.requires:

.PHONY : CMakeFiles/ex3.dir/PrintConsole.cpp.o.requires

CMakeFiles/ex3.dir/PrintConsole.cpp.o.provides: CMakeFiles/ex3.dir/PrintConsole.cpp.o.requires
	$(MAKE) -f CMakeFiles/ex3.dir/build.make CMakeFiles/ex3.dir/PrintConsole.cpp.o.provides.build
.PHONY : CMakeFiles/ex3.dir/PrintConsole.cpp.o.provides

CMakeFiles/ex3.dir/PrintConsole.cpp.o.provides.build: CMakeFiles/ex3.dir/PrintConsole.cpp.o


CMakeFiles/ex3.dir/Client.cpp.o: CMakeFiles/ex3.dir/flags.make
CMakeFiles/ex3.dir/Client.cpp.o: ../Client.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tchelet/CLionProjects/ex3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/ex3.dir/Client.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex3.dir/Client.cpp.o -c /home/tchelet/CLionProjects/ex3/Client.cpp

CMakeFiles/ex3.dir/Client.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex3.dir/Client.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tchelet/CLionProjects/ex3/Client.cpp > CMakeFiles/ex3.dir/Client.cpp.i

CMakeFiles/ex3.dir/Client.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex3.dir/Client.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tchelet/CLionProjects/ex3/Client.cpp -o CMakeFiles/ex3.dir/Client.cpp.s

CMakeFiles/ex3.dir/Client.cpp.o.requires:

.PHONY : CMakeFiles/ex3.dir/Client.cpp.o.requires

CMakeFiles/ex3.dir/Client.cpp.o.provides: CMakeFiles/ex3.dir/Client.cpp.o.requires
	$(MAKE) -f CMakeFiles/ex3.dir/build.make CMakeFiles/ex3.dir/Client.cpp.o.provides.build
.PHONY : CMakeFiles/ex3.dir/Client.cpp.o.provides

CMakeFiles/ex3.dir/Client.cpp.o.provides.build: CMakeFiles/ex3.dir/Client.cpp.o


CMakeFiles/ex3.dir/RemotePlayer.cpp.o: CMakeFiles/ex3.dir/flags.make
CMakeFiles/ex3.dir/RemotePlayer.cpp.o: ../RemotePlayer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tchelet/CLionProjects/ex3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/ex3.dir/RemotePlayer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex3.dir/RemotePlayer.cpp.o -c /home/tchelet/CLionProjects/ex3/RemotePlayer.cpp

CMakeFiles/ex3.dir/RemotePlayer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex3.dir/RemotePlayer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tchelet/CLionProjects/ex3/RemotePlayer.cpp > CMakeFiles/ex3.dir/RemotePlayer.cpp.i

CMakeFiles/ex3.dir/RemotePlayer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex3.dir/RemotePlayer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tchelet/CLionProjects/ex3/RemotePlayer.cpp -o CMakeFiles/ex3.dir/RemotePlayer.cpp.s

CMakeFiles/ex3.dir/RemotePlayer.cpp.o.requires:

.PHONY : CMakeFiles/ex3.dir/RemotePlayer.cpp.o.requires

CMakeFiles/ex3.dir/RemotePlayer.cpp.o.provides: CMakeFiles/ex3.dir/RemotePlayer.cpp.o.requires
	$(MAKE) -f CMakeFiles/ex3.dir/build.make CMakeFiles/ex3.dir/RemotePlayer.cpp.o.provides.build
.PHONY : CMakeFiles/ex3.dir/RemotePlayer.cpp.o.provides

CMakeFiles/ex3.dir/RemotePlayer.cpp.o.provides.build: CMakeFiles/ex3.dir/RemotePlayer.cpp.o


CMakeFiles/ex3.dir/PersonPServer.cpp.o: CMakeFiles/ex3.dir/flags.make
CMakeFiles/ex3.dir/PersonPServer.cpp.o: ../PersonPServer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tchelet/CLionProjects/ex3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/ex3.dir/PersonPServer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex3.dir/PersonPServer.cpp.o -c /home/tchelet/CLionProjects/ex3/PersonPServer.cpp

CMakeFiles/ex3.dir/PersonPServer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex3.dir/PersonPServer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tchelet/CLionProjects/ex3/PersonPServer.cpp > CMakeFiles/ex3.dir/PersonPServer.cpp.i

CMakeFiles/ex3.dir/PersonPServer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex3.dir/PersonPServer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tchelet/CLionProjects/ex3/PersonPServer.cpp -o CMakeFiles/ex3.dir/PersonPServer.cpp.s

CMakeFiles/ex3.dir/PersonPServer.cpp.o.requires:

.PHONY : CMakeFiles/ex3.dir/PersonPServer.cpp.o.requires

CMakeFiles/ex3.dir/PersonPServer.cpp.o.provides: CMakeFiles/ex3.dir/PersonPServer.cpp.o.requires
	$(MAKE) -f CMakeFiles/ex3.dir/build.make CMakeFiles/ex3.dir/PersonPServer.cpp.o.provides.build
.PHONY : CMakeFiles/ex3.dir/PersonPServer.cpp.o.provides

CMakeFiles/ex3.dir/PersonPServer.cpp.o.provides.build: CMakeFiles/ex3.dir/PersonPServer.cpp.o


CMakeFiles/ex3.dir/MenuConsole.cpp.o: CMakeFiles/ex3.dir/flags.make
CMakeFiles/ex3.dir/MenuConsole.cpp.o: ../MenuConsole.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tchelet/CLionProjects/ex3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object CMakeFiles/ex3.dir/MenuConsole.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex3.dir/MenuConsole.cpp.o -c /home/tchelet/CLionProjects/ex3/MenuConsole.cpp

CMakeFiles/ex3.dir/MenuConsole.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex3.dir/MenuConsole.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tchelet/CLionProjects/ex3/MenuConsole.cpp > CMakeFiles/ex3.dir/MenuConsole.cpp.i

CMakeFiles/ex3.dir/MenuConsole.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex3.dir/MenuConsole.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tchelet/CLionProjects/ex3/MenuConsole.cpp -o CMakeFiles/ex3.dir/MenuConsole.cpp.s

CMakeFiles/ex3.dir/MenuConsole.cpp.o.requires:

.PHONY : CMakeFiles/ex3.dir/MenuConsole.cpp.o.requires

CMakeFiles/ex3.dir/MenuConsole.cpp.o.provides: CMakeFiles/ex3.dir/MenuConsole.cpp.o.requires
	$(MAKE) -f CMakeFiles/ex3.dir/build.make CMakeFiles/ex3.dir/MenuConsole.cpp.o.provides.build
.PHONY : CMakeFiles/ex3.dir/MenuConsole.cpp.o.provides

CMakeFiles/ex3.dir/MenuConsole.cpp.o.provides.build: CMakeFiles/ex3.dir/MenuConsole.cpp.o


# Object files for target ex3
ex3_OBJECTS = \
"CMakeFiles/ex3.dir/main.cpp.o" \
"CMakeFiles/ex3.dir/BoardConsole.cpp.o" \
"CMakeFiles/ex3.dir/PersonP.cpp.o" \
"CMakeFiles/ex3.dir/StandartLogic.cpp.o" \
"CMakeFiles/ex3.dir/Point.cpp.o" \
"CMakeFiles/ex3.dir/Game.cpp.o" \
"CMakeFiles/ex3.dir/AIPlayer.cpp.o" \
"CMakeFiles/ex3.dir/tests/Board_test.cpp.o" \
"CMakeFiles/ex3.dir/tests/StandartLogic_test.cpp.o" \
"CMakeFiles/ex3.dir/tests/AIPlayer_test.cpp.o" \
"CMakeFiles/ex3.dir/tests/PersonP_teset.cpp.o" \
"CMakeFiles/ex3.dir/PrintConsole.cpp.o" \
"CMakeFiles/ex3.dir/Client.cpp.o" \
"CMakeFiles/ex3.dir/RemotePlayer.cpp.o" \
"CMakeFiles/ex3.dir/PersonPServer.cpp.o" \
"CMakeFiles/ex3.dir/MenuConsole.cpp.o"

# External object files for target ex3
ex3_EXTERNAL_OBJECTS =

ex3: CMakeFiles/ex3.dir/main.cpp.o
ex3: CMakeFiles/ex3.dir/BoardConsole.cpp.o
ex3: CMakeFiles/ex3.dir/PersonP.cpp.o
ex3: CMakeFiles/ex3.dir/StandartLogic.cpp.o
ex3: CMakeFiles/ex3.dir/Point.cpp.o
ex3: CMakeFiles/ex3.dir/Game.cpp.o
ex3: CMakeFiles/ex3.dir/AIPlayer.cpp.o
ex3: CMakeFiles/ex3.dir/tests/Board_test.cpp.o
ex3: CMakeFiles/ex3.dir/tests/StandartLogic_test.cpp.o
ex3: CMakeFiles/ex3.dir/tests/AIPlayer_test.cpp.o
ex3: CMakeFiles/ex3.dir/tests/PersonP_teset.cpp.o
ex3: CMakeFiles/ex3.dir/PrintConsole.cpp.o
ex3: CMakeFiles/ex3.dir/Client.cpp.o
ex3: CMakeFiles/ex3.dir/RemotePlayer.cpp.o
ex3: CMakeFiles/ex3.dir/PersonPServer.cpp.o
ex3: CMakeFiles/ex3.dir/MenuConsole.cpp.o
ex3: CMakeFiles/ex3.dir/build.make
ex3: lib/googletest-release-1.8.0/googlemock/gtest/libgtest.a
ex3: lib/googletest-release-1.8.0/googlemock/gtest/libgtest_main.a
ex3: lib/googletest-release-1.8.0/googlemock/libgmock.a
ex3: lib/googletest-release-1.8.0/googlemock/gtest/libgtest.a
ex3: CMakeFiles/ex3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/tchelet/CLionProjects/ex3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Linking CXX executable ex3"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ex3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ex3.dir/build: ex3

.PHONY : CMakeFiles/ex3.dir/build

CMakeFiles/ex3.dir/requires: CMakeFiles/ex3.dir/main.cpp.o.requires
CMakeFiles/ex3.dir/requires: CMakeFiles/ex3.dir/BoardConsole.cpp.o.requires
CMakeFiles/ex3.dir/requires: CMakeFiles/ex3.dir/PersonP.cpp.o.requires
CMakeFiles/ex3.dir/requires: CMakeFiles/ex3.dir/StandartLogic.cpp.o.requires
CMakeFiles/ex3.dir/requires: CMakeFiles/ex3.dir/Point.cpp.o.requires
CMakeFiles/ex3.dir/requires: CMakeFiles/ex3.dir/Game.cpp.o.requires
CMakeFiles/ex3.dir/requires: CMakeFiles/ex3.dir/AIPlayer.cpp.o.requires
CMakeFiles/ex3.dir/requires: CMakeFiles/ex3.dir/tests/Board_test.cpp.o.requires
CMakeFiles/ex3.dir/requires: CMakeFiles/ex3.dir/tests/StandartLogic_test.cpp.o.requires
CMakeFiles/ex3.dir/requires: CMakeFiles/ex3.dir/tests/AIPlayer_test.cpp.o.requires
CMakeFiles/ex3.dir/requires: CMakeFiles/ex3.dir/tests/PersonP_teset.cpp.o.requires
CMakeFiles/ex3.dir/requires: CMakeFiles/ex3.dir/PrintConsole.cpp.o.requires
CMakeFiles/ex3.dir/requires: CMakeFiles/ex3.dir/Client.cpp.o.requires
CMakeFiles/ex3.dir/requires: CMakeFiles/ex3.dir/RemotePlayer.cpp.o.requires
CMakeFiles/ex3.dir/requires: CMakeFiles/ex3.dir/PersonPServer.cpp.o.requires
CMakeFiles/ex3.dir/requires: CMakeFiles/ex3.dir/MenuConsole.cpp.o.requires

.PHONY : CMakeFiles/ex3.dir/requires

CMakeFiles/ex3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ex3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ex3.dir/clean

CMakeFiles/ex3.dir/depend:
	cd /home/tchelet/CLionProjects/ex3/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tchelet/CLionProjects/ex3 /home/tchelet/CLionProjects/ex3 /home/tchelet/CLionProjects/ex3/cmake-build-debug /home/tchelet/CLionProjects/ex3/cmake-build-debug /home/tchelet/CLionProjects/ex3/cmake-build-debug/CMakeFiles/ex3.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ex3.dir/depend

