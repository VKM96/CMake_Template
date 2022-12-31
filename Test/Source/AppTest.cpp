#include <stdio.h>
#include <gtest/gtest.h>

extern "C" {
  #include "../../App/Include/app.h"
}

TEST(App_tests, test2)
{
    int expected = 5;
    int actual = sum_func(2,3);
    ASSERT_EQ(expected,actual);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    printf("\n Running Test");
    return RUN_ALL_TESTS();
}
