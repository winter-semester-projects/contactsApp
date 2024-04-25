cmake_minimum_required(VERSION 3.26)
project(Contacts_App LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6
REQUIRED COMPONENTS Widgets Core Gui
)

qt_standard_project_setup()