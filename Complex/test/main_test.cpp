/*
 * complex_test.cpp
 *
 *  Created on: 21 feb 2024
 *      Author: Pablo
 */

#ifdef TEST
#include <gtest/gtest.h>

int main(int narg, char **arg){
	::testing::InitGoogleTest(&narg, arg);
	return RUN_ALL_TESTS();
}
#endif
