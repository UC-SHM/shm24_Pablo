/*
 * Rectangulo_test.cpp
 *
 *  Created on: 16 feb 2024
 *      Author: Pablo
 */

#include "complex.h"
#include <iostream>

#ifndef TEST
int main(){
	complex c(1,2);
	std::cout << "Modulo " << c.mod();
	std::cout << "\n";
	//complex c();
	c.set(2,4);
	//float rg=0, ig=0;
	c.get();
	std::cout << "Real: " << c.rg;
	std::cout << "  Imaginario: " << c.ig;
	std::cout << "\n";
	//a.lastarea; //Si a.l no
}
#endif
