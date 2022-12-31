cmake_minimum_required(VERSION 3.0.0)

# Useuful Pattern used throughout the script
set(This CTest_Tempate)

project(${This} VERSION 0.1.0 LANGUAGES C CXX)
set(CMAKE C C_STANDARD 11)

# Make position Indepedndant code 
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

# Enable Testing 
enable_testing()

# Add Application and Testing folder 
add_subdirectory(App)
add_subdirectory(Test)