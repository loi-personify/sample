#include "stdafx.h"
#include <gtest\gtest.h>
#include "Sample.h"

TEST(multiple, mul1){
	Sample sp;
	int expected_result = 15;
	EXPECT_EQ(expected_result, sp.multiple(3,5)) << "Test case is fail";
}

void runTest(int argument_count, char** argument_vars){
	testing::InitGoogleTest(&argument_count, argument_vars); //initialize GTest

	RUN_ALL_TESTS();
}
