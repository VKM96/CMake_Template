# CMAKE File for Testing folder
# Creates Test executable and Google Test executable

set(This Test_Runner)

# Google Test inclusion 
include(FetchContent)
FetchContent_Declare(
    googletest 
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG        release-1.11.0
)
FetchContent_MakeAvailable(googletest)

# Pattern for compilation of application execution 
set(Sources 
    Source/AppTest.cpp
)

set(Includes 

)

# Test executable 
add_executable(${This} ${Sources} ${Includes})

# Link Test executable with gtest links
target_link_libraries(${This} gtest gtest_main)

# Link Test executable with Application library 
target_link_libraries(${This} App_lib)

# Add Test Suite 
add_test(${This} ${This})

