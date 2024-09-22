#include "pch.h"
#include "..\CppConsoleApp\CppStringCalc.h"

struct MainTest : testing::Test 
{
	MainTest()
	{

	}
};

TEST_F(MainTest, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

//TEST_F(MainTest, GetNameTest) {
//	auto nameResult = GetName();
//	std::string expectedName = "CppName";
//	EXPECT_EQ(expectedName, nameResult);
//}

namespace stringcalctest
{
	TEST(stringcalcFix, calcactualtest)
	{
		std::string testString = "testString";
		int strCount = 10;
		int resultCount = CalcString(testString);
		EXPECT_EQ(strCount, resultCount);
	}
}