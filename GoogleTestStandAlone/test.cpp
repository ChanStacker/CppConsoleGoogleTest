#include "pch.h"
#include "SutOne.h"

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