/*
 * complex.h
 *
 *  Created on: 21 feb 2024
 *      Author: Pablo
 */

#ifndef COMPLEX_H_
#define COMPLEX_H_

class complex {
private:
	float r, i;
public:
	float modu, resu;
	float rg, ig;
	// Se crea este codigo para ejecutar mas rapido. Se duplica por cada fichero que se ejecuta el .h
/*	void set(float real, float imag){
		r = real;
		i = imag;
	}
	void get(){
		rg = r;
		ig = i;
	}
	*/
	void set(float real, float imag);
	void get(float &real, float &imag);
	float mod();
	complex operator+(const complex &rhs);
	complex &operator=(const complex &rhs);
	complex operator*(const complex &rhs);
	bool operator==( const complex &rhs);

	complex();
	complex(float real, float imag);
	virtual ~complex();
};

#endif /* COMPLEX_H_ */
