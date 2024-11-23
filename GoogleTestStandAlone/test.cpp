#include "pch.h"
#include "SutOne.h"
#include "../SutStaticLib/SutStaticLib.h"
#include "../SutConsoleApp/SutConsoleAppLogic.h"

namespace googletest1 {
	TEST(TestCaseName, TestName) {
		EXPECT_EQ(1, 1);
		EXPECT_TRUE(true);
	}

	TEST(SUTTestFix1, GetOutputTest)
	{
		std::string testString = "testString";
		int strCount = 10;
		int resultCount = GetOutput(testString);
		EXPECT_EQ(strCount, resultCount);
	}
}

namespace googleteststaticlib {

	TEST(SUTTestFix2, GetOutputTest)
	{
		std::string testString = "testString";
		int strCount = 10;
		int resultCount = GetStaticLibOutput(testString);
		EXPECT_EQ(strCount, resultCount);
	}

	TEST(SUTRefTest, SwapByPointerTest) 
	{
		int x = 4;
		int y = 5;
		SwapByPointer(&x, &y);
		EXPECT_EQ(x, 5);
		EXPECT_EQ(y, 4);
	}

	TEST(SUTRefTest, SwapByRefTest) 
	{
		int x = 4;
		int y = 5;
		SwapByRef(x, y);
		EXPECT_EQ(x, 5);
		EXPECT_EQ(y, 4);
	}
}

namespace googletestconsoleapp {

	TEST(SUTTestFix3, GetOutputTest)
	{
		std::string testString = "testString";
		int strCount = 10;
		int resultCount = GetConsoleOutput(testString);
		EXPECT_EQ(strCount, resultCount);
	}
}