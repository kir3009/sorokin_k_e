# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.2.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\sorokin_k_e

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\sorokin_k_e\cmake-build-debug

# Include any dependencies generated for this target.
include prj.lab\rational\CMakeFiles\rational.dir\depend.make

# Include the progress variables for this target.
include prj.lab\rational\CMakeFiles\rational.dir\progress.make

# Include the compile flags for this target's objects.
include prj.lab\rational\CMakeFiles\rational.dir\flags.make

prj.lab\rational\CMakeFiles\rational.dir\rational.cpp.obj: prj.lab\rational\CMakeFiles\rational.dir\flags.make
prj.lab\rational\CMakeFiles\rational.dir\rational.cpp.obj: ..\prj.lab\rational\rational.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\sorokin_k_e\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object prj.lab/rational/CMakeFiles/rational.dir/rational.cpp.obj"
	cd D:\sorokin_k_e\cmake-build-debug\prj.lab\rational
	C:\PROGRA~2\MICROS~4\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\rational.dir\rational.cpp.obj /FdCMakeFiles\rational.dir\rational.pdb /FS -c D:\sorokin_k_e\prj.lab\rational\rational.cpp
<<
	cd D:\sorokin_k_e\cmake-build-debug

prj.lab\rational\CMakeFiles\rational.dir\rational.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rational.dir/rational.cpp.i"
	cd D:\sorokin_k_e\cmake-build-debug\prj.lab\rational
	C:\PROGRA~2\MICROS~4\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe > CMakeFiles\rational.dir\rational.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\sorokin_k_e\prj.lab\rational\rational.cpp
<<
	cd D:\sorokin_k_e\cmake-build-debug

prj.lab\rational\CMakeFiles\rational.dir\rational.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rational.dir/rational.cpp.s"
	cd D:\sorokin_k_e\cmake-build-debug\prj.lab\rational
	C:\PROGRA~2\MICROS~4\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\rational.dir\rational.cpp.s /c D:\sorokin_k_e\prj.lab\rational\rational.cpp
<<
	cd D:\sorokin_k_e\cmake-build-debug

# Object files for target rational
rational_OBJECTS = \
"CMakeFiles\rational.dir\rational.cpp.obj"

# External object files for target rational
rational_EXTERNAL_OBJECTS =

prj.lab\rational\rational.lib: prj.lab\rational\CMakeFiles\rational.dir\rational.cpp.obj
prj.lab\rational\rational.lib: prj.lab\rational\CMakeFiles\rational.dir\build.make
prj.lab\rational\rational.lib: prj.lab\rational\CMakeFiles\rational.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\sorokin_k_e\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library rational.lib"
	cd D:\sorokin_k_e\cmake-build-debug\prj.lab\rational
	$(CMAKE_COMMAND) -P CMakeFiles\rational.dir\cmake_clean_target.cmake
	cd D:\sorokin_k_e\cmake-build-debug
	cd D:\sorokin_k_e\cmake-build-debug\prj.lab\rational
	C:\PROGRA~2\MICROS~4\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\link.exe /lib /nologo /machine:X86 /out:rational.lib @CMakeFiles\rational.dir\objects1.rsp 
	cd D:\sorokin_k_e\cmake-build-debug

# Rule to build all files generated by this target.
prj.lab\rational\CMakeFiles\rational.dir\build: prj.lab\rational\rational.lib

.PHONY : prj.lab\rational\CMakeFiles\rational.dir\build

prj.lab\rational\CMakeFiles\rational.dir\clean:
	cd D:\sorokin_k_e\cmake-build-debug\prj.lab\rational
	$(CMAKE_COMMAND) -P CMakeFiles\rational.dir\cmake_clean.cmake
	cd D:\sorokin_k_e\cmake-build-debug
.PHONY : prj.lab\rational\CMakeFiles\rational.dir\clean

prj.lab\rational\CMakeFiles\rational.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" D:\sorokin_k_e D:\sorokin_k_e\prj.lab\rational D:\sorokin_k_e\cmake-build-debug D:\sorokin_k_e\cmake-build-debug\prj.lab\rational D:\sorokin_k_e\cmake-build-debug\prj.lab\rational\CMakeFiles\rational.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : prj.lab\rational\CMakeFiles\rational.dir\depend

