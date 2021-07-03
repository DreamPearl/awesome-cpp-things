# only for cmake --version >= 3.16.3
cmake_minimum_required(VERSION 3.16.3)

# project name
project(awesome-cpp-things)

# creates the variable EXEC and sets it to calc
set(EXEC yeslinux-nomac)


# puts .cpp file to the SOURCES variable
file(GLOB SOURCES *.cpp)

# compiles the files defined by SOURCES to generante the executable defined by EXEC
add_executable(${EXEC} ${SOURCES})