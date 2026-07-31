#include <gtest/gtest.h>

extern "C" {
#include "math_c.h"
}

TEST(MathCTest, AddTwoNumbers) {
    EXPECT_EQ(add_c(3, 4), 7);
}

TEST(MathCTest, AddZero) {
    EXPECT_EQ(add_c(0, 9), 9);
}
