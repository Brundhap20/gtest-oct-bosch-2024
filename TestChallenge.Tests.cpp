#include "TestChallenge.h"
#include <gtest/gtest.h>

TEST(TestChallengeTest, CorrectSum) {
    int x = 3 , y = 5;
    int result;
    add(x, y, &result);
    EXPECT_EQ(result, 8);
}

