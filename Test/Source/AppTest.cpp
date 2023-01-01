/**
 * @file AppTest.cpp
 * @author VKM96
 * @brief Test runner entry point 
 * @version 0.1
 * @date 2023-01-01
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>
#include <gtest/gtest.h>

//< C wrapper needed for correct operation 
extern "C" {
  #include "../../App/Include/app.h"
}

/**
 * @brief Construct a new TEST object
 * 
 */
TEST(App_tests, test2)
{
    int expected = 5;
    int actual = sum_func(2,3);
    ASSERT_EQ(expected,actual);
}

/**
 * @brief Test runner entry point
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */
int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    printf("\n Running Test");
    return RUN_ALL_TESTS();
}
