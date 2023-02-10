#include "gtest/gtest.h"
#include "factorial.h"

TEST(factorialTest, TestZero){
    EXPECT_EQ(factorial(0),0);
}

TEST(factorialTest, Test3){
    EXPECT_EQ(factorial(3),6);
}
