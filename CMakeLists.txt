# only for cmake --version >= 3.16.3
cmake_minimum_required(VERSION 3.16.3)

# project name
project(awesome-cpp-things)

# creates the variable EXEC and sets it to <something>
set(EXEC1 yeslinux-nomac)
# set(EXEC2 compile_time_variable)

# puts .cpp file to the SOURCES variable
file(GLOB SOURCES1 yeslinux-nomac.cpp)
# file(GLOB SOURCES2 compile_time_variable.cpp)

# compiles the files defined by SOURCES to generate the executable defined by EXEC
add_executable(${EXEC1} ${SOURCES1})
# add_executable(${EXEC2} ${SOURCES2})
