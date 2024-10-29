#include "TestChallenge.h"
#include <gtest/gtest.h>

class TestChallengeTest : public ::testing::Test {
protected:
    int result;
    void SetUp() override {
        result = 0;
    }
};

TEST(TestChallengeTest, AddTwoPositiveNumbers) {
    add(3, 5, &result);
    EXPECT_EQ(result, 8);
}

