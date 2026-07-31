#include <gtest/gtest.h>

#include "math.hpp"

TEST(MathTest, AddTwoPositiveNumbers) {
    EXPECT_EQ(add(2, 3), 5);
}

TEST(MathTest, AddZero) {
    EXPECT_EQ(add(0, 7), 7);
}
