#include "pch.h"
#include "..\CppConsoleApp\CppConsoleApp.h"


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

TEST_F(MainTest, GetNameTest) {
	auto nameResult = GetName();
	std::string expectedName = "CppName";
	EXPECT_EQ(expectedName, nameResult);
}
