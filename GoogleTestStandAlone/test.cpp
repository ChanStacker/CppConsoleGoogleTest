#include "pch.h"
#include "SutOne.h"
#include "../SutStaticLib/SutStaticLib.h"
#include "../SutConsoleApp/SutConsoleApp.h"

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
}

//namespace googletestconsoleapp {
//
//	TEST(SUTTestFix3, GetOutputTest)
//	{
//		std::string testString = "testString";
//		int strCount = 10;
//		int resultCount = GetConsoleOutput(testString);
//		EXPECT_EQ(strCount, resultCount);
//	}
//}