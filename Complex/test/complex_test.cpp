/*
 * complex_test.cpp
 *
 *  Created on: 21 feb 2024
 *      Author: Pablo
 */

#include "C:/Users/Pablo/UC/SEHAPAM/Practicas/software/workspace/Complex/complex.h"

#include <gtest/gtest.h>
#include <gmock/gmock.h>

TEST(complex, test_mod){
	complex c;

	c.set(1,2);
	float a=sqrt(5);
	ASSERT_EQ(c.mod(),a);
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
	ASSERT_FLOAT_EQ(re,c.re);
	ASSERT_FLOAT_EQ(im,c.im);
}
TEST(complex, test_igual){
	complex c, a(1,2),b;
	b.set(2,1);
	c=a+b;
	complex c_e(3,3);
	ASSERT_EQ(c_e,c);
}
