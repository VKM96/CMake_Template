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

# Doxygen addition 
option(BUILD_DOC "Build documentation" ON)
find_package(Doxygen)

if(DOXYGEN_FOUND)
    #set input and output files 
    set(DOXYGEN_IN ${CMAKE_SOURCE_DIR}/docs/Doxyfile.in)
    set(DOXYGEN_OUT ${CMAKE_SOURCE_DIR}/docs/Doxyfile.out)

    configure_file(${DOXYGEN_IN} ${DOXYGEN_OUT} @ONLY)
    message("Doxygen build started")

    add_custom_target( docs
    COMMAND ${DOXYGEN_EXECUTABLE} ${DOXYGEN_OUT}
    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}/build
    COMMENT 
    VERBATIM  
    )
else()
    message("Doxygen not found")
endif()
