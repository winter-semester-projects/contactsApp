cmake_minimum_required(VERSION 3.26)
project(Contacts_App)

set(CMAKE_CXX_STANDARD 17)

include_directories(src)
include_directories(src/libs)
include_directories(src/libs/cmds)

add_executable(Contacts_App
        src/libs/cmds/add.h
        src/libs/cmds/del.h
        src/libs/prompt.h
        src/main.cpp)
