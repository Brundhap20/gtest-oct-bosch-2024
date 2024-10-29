#include "TestChallenge.h"
#include <gtest/gtest.h>


TEST(TestChallengeTest, AddTwoPositiveNumbers) {
    add(3, 5, &result);
    EXPECT_EQ(result, 8);
}

