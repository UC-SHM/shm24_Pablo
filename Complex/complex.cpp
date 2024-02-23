/*
 * complex.cpp
 *
 *  Created on: 21 feb 2024
 *      Author: Pablo
 */

#include "complex.h"
#include <iostream>
#include <stdio.h>
#include <math.h>

complex::complex() {
	// TODO Auto-generated constructor stub
	r = 0;
	i = 0;
	rg = 0;
	ig = 0;
	modu = 0;
	resu = 0;
}
complex::complex(float real, float imag) {
	// TODO Auto-generated constructor stub
	r = real;
	i = imag;
	rg = 0;
	ig = 0;
	modu = 0;
	resu = 0;
}

complex::~complex() {
	// TODO Auto-generated destructor stub
	std::cout << "Destruyendo objeto complex" << std::endl;
}
void complex::set(float real, float imag){
	r = real;
	i = imag;
}
void complex::get(float &real, float &imag){
	real = r;
	imag = i;
}

float complex::mod(){
	return modu = sqrt(pow(r, 2) + pow(i, 2));
}

complex complex::operator+(const complex &rhs) {	//constante porque no se modifica, se para por puntero para no crear un nuevo objeto con la copia de rhs
	complex result;
	result.r = this->r + rhs.r;
	result.i = this->i + rhs.i ;
	return result;
}
complex complex::operator*( const complex &rhs) {	//constante porque no se modifica, se para por puntero para no crear un nuevo objeto con la copia de rhs
	complex result;
	result.r = (this->r * rhs.r) - (this->i * rhs.i);
	result.i = (this->r * rhs.i) + (this->i * rhs.r) ;
	return result;
}
complex &complex::operator=(const complex &rhs) {	//constante porque no se modifica, se para por puntero para no crear un nuevo objeto con la copia de rhs
	if(this == &rhs){
		return *this;
	}
	r=rhs.r;
	i=rhs.i;
	return *this;
}
bool complex::operator==(const complex &rhs){
	bool ret;
	if(r == rhs.r && i == rhs.i){
		ret = true;
	}
	else{
		ret= false;
	}
	return ret;
}
