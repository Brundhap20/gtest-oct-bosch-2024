#include "TestChallenge.h"
#include <gtest/gtest.h>


TEST(TestChallengeTest, AddTwoPositiveNumbers) {
    int result;
    add(3, 5, &result);
    EXPECT_EQ(result, 8);
}

