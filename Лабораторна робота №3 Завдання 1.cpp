// Лабораторна робота №3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int main()
{
	int A[7][7];
	int i, j;
	
	


	for (i = 0; i < 7; i++) { // Генерування матриці
		for (j = 0; j < 7; j++) {
			A[i][j] = 1+ rand() % 100;
		}
	}


	for (i = 0; i < 7; i++) { // Виведення матриці
		cout << endl;
		for (j = 0; j < 7; j++) {
			cout << A[i][j] << "\t";
		}
	}
	
	int max = A[0][j];
	int min = A[7][j];

	for (i = 0; i < 1; i++) {
		for (j = 0; j < 7; j++) {
			if (A[i][j] > max) max = A[i][j];
			
		}
	}
	for (i = 6; i < 7; i++) {
		for (j = 0; j < 7; j++) {
			
			if (A[i][j] < min) min = A[i][j];
		}
	}
	cout << endl;
	cout << "Max: " << max << endl << "Min: " << min << endl << "Difference: " << max-min << endl;


   
}

