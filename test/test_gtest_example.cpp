#include <gtest/gtest.h>

#include "fizzbuzz.hpp"

TEST(FizzBuzz, testFizz) {
    ASSERT_EQ(fizzbuzz(15), 300);
}

TEST(FizzBuzz, testBuzz) {
    ASSERT_EQ(fizzbuzz(10), 200);
}

TEST(FizzBuzz, testFizzBuzz) {
    ASSERT_EQ(fizzbuzz(15), 300);
}