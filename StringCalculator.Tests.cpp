#include "StringCalculator.h"
#include <gtest/gtest.h>

//TEST(TestSuiteName, TestCaseName)
TEST(string_calculator_add,when_passed_a_empty_string_returns_0_for_Empty){
  //Arrange
  StringCalculator objUnderTest;
  string input="";
  int expectedValue=0;

  //Act
  int actualValue=objUnderTest.Add(input);

  //ASSERT
  ASSERT_EQ(expectedValue,actualValue);
  }

TEST(string_calculator_add,when_passed_a_single_number_returns_0_for_0){
  //Arrange
  StringCalculator objUnderTest;
  string input="0";
  int expectedValue=0;

  //Act
  int actualValue=objUnderTest.Add(input);

  //ASSERT
  ASSERT_EQ(expectedValue,actualValue);
  }

TEST(string_calculator_add,when_passed_a_single_number_returns_1_for_one){
  //Arrange
  StringCalculator objUnderTest;
  string input="1";
  int expectedValue=1;

  //Act
  int actualValue=objUnderTest.Add(input);

  //ASSERT
  ASSERT_EQ(expectedValue,actualValue);
  }

TEST(string_calculator_add,when_passed_two_comma_delimited_numbers_returns_their_sum){
  //Arrange
  StringCalculator objUnderTest;
  string input="1,2";
  int expectedValue=3;

  //Act
  int actualValue=objUnderTest.Add(input);

  //ASSERT
  ASSERT_EQ(expectedValue,actualValue);
  }

TEST(string_calculator_add,when_passed_two_comma_delimited_numbers_returns_their_sum){
  //Arrange
  StringCalculator objUnderTest;
  string input="1,2";
  int expectedValue=3;

  //Act
  int actualValue=objUnderTest.Add(input);

  //ASSERT
  ASSERT_EQ(expectedValue,actualValue);
  }

TEST(string_calculator_add,when_passed_two_comma_delimited_numbers_returns_their_sum){
  //Arrange
  StringCalculator objUnderTest;
  string input="1,2";
  int expectedValue=3;

  //Act
  int actualValue=objUnderTest.Add(input);

  //ASSERT
  ASSERT_EQ(expectedValue,actualValue);
  }

TEST(string_calculator_add,when_passed_two_comma_delimited_numbers_returns_their_sum){
  //Arrange
  StringCalculator objUnderTest;
  string input="1,2";
  int expectedValue=3;

  //Act
  int actualValue=objUnderTest.Add(input);

  //ASSERT
  ASSERT_EQ(expectedValue,actualValue);
  }

TEST(string_calculator_add,when_passed_multiple_comma_delimited_numbers_returns_their_sum){
  //Arrange
  StringCalculator objUnderTest;
  string input="1,2,3";
  int expectedValue=6;

  //Act
  int actualValue=objUnderTest.Add(input);

  //ASSERT
  ASSERT_EQ(expectedValue,actualValue);
  }

TEST(string_calculator_add,when_delimited_with_newline_and_comma_returns_their_sum){
  //Arrange
  StringCalculator objUnderTest;
  string input="1\n2,3";
  int expectedValue=6;

  //Act
  int actualValue=objUnderTest.Add(input);

  //ASSERT
  ASSERT_EQ(expectedValue,actualValue);
  }

TEST(string_calculator_add,when_passed_a_delimiter_returns_the_sum_based_on_that_delimiter){
  //Arrange
  StringCalculator objUnderTest;
  string input="//;\n1;2";
  int expectedValue=3;

  //Act
  int actualValue=objUnderTest.Add(input);

  //ASSERT
  ASSERT_EQ(expectedValue,actualValue);
  }

TEST(string_calculator_add,when_passed_negative_numbers_throws_an_exception_listing_invalid_values){
  //Arrange
  StringCalculator objUnderTest;
  string input="1,-2,-4,5";
  int expectedValue=3;

    try {
        objUnderTest.Add(input);
        FAIL() << "Expected std::invalid_argument";
    } 
    catch (const std::invalid_argument& e) {
        EXPECT_EQ(e.what(), std::string("Negatives not allowed: -2,-4"));
    }
    catch (...) {
        FAIL() << "Expected std::invalid_argument";
    }
}
  // //Act
  // int actualValue=objUnderTest.Add(input);

  // //ASSERT
  // ASSERT_EQ(expectedValue,actualValue);
  // }

TEST(string_calculator_add,when_passed_numbers_over_1000_ignores_them){
  //Arrange
  StringCalculator objUnderTest;
  string input="42,1001,3";
  int expectedValue=45;

  //Act
  int actualValue=objUnderTest.Add(input);

  //ASSERT
  ASSERT_EQ(expectedValue,actualValue);
  }

TEST(string_calculator_add,when_passed_multicharacter_delimiter_uses_that_delimiter_to_sum_values){
  //Arrange
  StringCalculator objUnderTest;
  string input="//[***]\n8***2***3";
  int expectedValue=13;

  //Act
  int actualValue=objUnderTest.Add(input);

  //ASSERT
  ASSERT_EQ(expectedValue,actualValue);
  }

TEST(string_calculator_add,when_passed_multiple_delimiters_sums_on_each_delimiter){
  //Arrange
  StringCalculator objUnderTest;
  string input="//[*][%]\n4*2%3";
  int expectedValue=9;

  //Act
  int actualValue=objUnderTest.Add(input);

  //ASSERT
  ASSERT_EQ(expectedValue,actualValue);
  }

TEST(string_calculator_add,when_passed_multiple_multicharacter_delimiters_sums_on_each_delimiter){
  //Arrange
  StringCalculator objUnderTest;
  string input="//[**][%^]\n4**1%^9";
  int expectedValue=14;

  //Act
  int actualValue=objUnderTest.Add(input);

  //ASSERT
  ASSERT_EQ(expectedValue,actualValue);
  }
