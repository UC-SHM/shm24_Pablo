/*
 * complex_test.cpp
 *
 *  Created on: 21 feb 2024
 *      Author: Pablo
 */

#include "../complex.h"

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <iostream>
#include <chrono>

using std::chrono::high_resolution_clock;
using std::chrono::duration_cast;
using std::chrono::duration;
using std::chrono::milliseconds;



TEST(complex, test_mod){
	auto t1 = high_resolution_clock::now();
	complex c;

	c.set(1,2);
	float a=sqrt(5);
	ASSERT_EQ(c.mod(),a);

	auto t2 = high_resolution_clock::now();
	duration<double, std::milli> ms_double = t2 - t1;
	std::cout << ms_double.count() << "ms\n";

}
TEST(complex, test_mod2){
	complex c;

	c.set(1,0);
	ASSERT_EQ(c.mod(),1);
}
TEST(complex, test_sum){
	complex c, a(1,2),b;
	b.set(2,1);
	c=a+b;
	complex c_e(3,3);
	float re, im;
	c.get(re,im);
	ASSERT_FLOAT_EQ(3,re);
	ASSERT_FLOAT_EQ(3,im);
}
TEST(complex, test_mul){
	complex c, a(1,2),b;
	b.set(2,1);
	c=a*b;
	float re, im;
	c.get(re,im);
	ASSERT_FLOAT_EQ(0,re);
	ASSERT_FLOAT_EQ(5,im);
}
/*
TEST(complex, test_igual){
	complex c, a(1,2),b;
	b.set(2,1);
	c=a+b;
	complex c_e(3,3);
	ASSERT_EQ(c_e,c);
}*/

