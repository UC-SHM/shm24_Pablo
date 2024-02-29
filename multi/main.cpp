/*
 * main.cpp
 *
 *  Created on: 29 feb 2024
 *      Author: Pablo
 */

#include <iostream>
#include <ctime> 		//#include <time.h>
#include <omp.h>
#include <chrono>
using std::chrono::high_resolution_clock;
using std::chrono::duration_cast;
using std::chrono::duration;
using std::chrono::milliseconds;


//using namespace std;

int main(){
	auto t1 = high_resolution_clock::now();

	const int m=3, n=6, v=2;
	int A[m][v] {};
	int B[v][n] {};
	int C[m][n] {};

	//const int value = 1;
	std::fill(*A, *A + m*v, 1);
	std::fill(*B, *B + v*n, v);
	std::fill(*C, *C + m*n, 0);

	//int num = omp_get_num_threads();
	std::cout << omp_get_num_threads() << " en paralelo.\n";
	#pragma omp parallel for
	for (int j = 0; j < n; j++) {
		for (int i = 0; i < m; i++) {
            int temp=0;
            for (int k = 0; k < v; k++) {
                temp += A[i][k] * B[k][j];
            }
            C[i][j]= temp;
            std::cout << C[i][j] << "  ";
        }
        std::cout << "\n";
    }

    auto t2 = high_resolution_clock::now();
    duration<double, std::milli> ms_double = t2 - t1;
   	std::cout << ms_double.count() << " ms\n";
}
//  Mejor opcion debido a ejecuta en paralelo lo maximo posible
//  sin ejecutar el pragma varias veces
