#include "StringCalculator.h"
#include <gtest/gtest.h>
#include <tuple>
using namespace std;

//Fixture Class
class StringCalculatorAddFixture:public testing::Test{
  protected:
    StringCalculator *objUnderTest;
  void SetUp() override {
      objUnderTest=new StringCalculator();
  }
  void TearDown(){
        delete objUnderTest;
  }
};

//Value Parameterized Fixture
class StringCalculatorAddParameterized:public StringCalculatorAddFixture,public testing::WithParamInterface<tuple<string,int>>{

};
INSTANTIATE_TEST_SUITE_P(ValidValuesDataSet,StringCalculatorAddParameterized,testing::Values(
  make_tuple("",0),make_tuple("0",0),make_tuple("1",1),make_tuple("1,2",3),make_tuple("1,2,3",6),make_tuple("1\n2,3",6),make_tuple("//;\n1;2",3),make_tuple("42,1001,3",45),make_tuple("//[***]\n8***2***3",13),make_tuple("//[*][%]\n4*2%3",9),make_tuple("//[**][%^]\n4**1%^9",14)
));

//For valid input
TEST_P(StringCalculatorAddParameterized, DataDrivenTestCase){
    string input=std::get<0>(GetParam());
    int expectedValue=std::get<1>(GetParam());
    int actualValue=objUnderTest->Add(input);
    ASSERT_EQ(actualValue,expectedValue);
}

//For invalid input
TEST_F(StringCalculatorAddFixture, Throw_Invalid_Argumnet_Exceptio_For_Negetive_Numbers){
    string input="1,-2, 3, -4";
    EXPECT_THROW(objUnderTest->Add(input),invalid_argument);
  }


