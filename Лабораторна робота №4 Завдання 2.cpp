// Лабораторна робота №4 Завдання 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;


int main()
{
	
	const int n = 3, m = 4;
	int A[n][m];
	int i, j;
	A[0][0] = 3;
	A[0][1] = -2;
	A[0][2] = 4;
	A[0][3] = 9;
	A[1][0] = 0;
	A[1][1] = 3;
	A[1][2] = 10;
	A[1][3] = 3;
	A[2][0] = 5;
	A[2][1] = -4;
	A[2][2] = -6;
	A[2][3] = 1;


	
	for (i = 0; i < n; i++) { //Виведення матриці
		cout << endl;
		for (j = 0; j < m; j++) {
			cout << A[i][j] << "\t";

		}
	}

	int max{};
	int min{};
	int dob_max{};
	int dob_min{};
	int index_max{};
	int index_min{};
	
	index_max = 0;
	index_min = 0;
	max = A[0][0];
	min = A[0][0];
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			
			for (i = 0; i < n; i++) { 
				for (j = 0; j < m; j++) {
					if (A[i][j] > max) {
						max = A[i][j];
						index_max = i;
						
					}
				}
			}
			cout << endl << "max: " << max << endl << "index: " << index_max;
			for (i = 0; i < n; i++) {
				for (j = 0; j < m; j++) {
					if (A[i][j] < min) {
						min = A[i][j];
						index_min = i;
						
					}
				}
			}
			cout << endl << "min: " << min << endl << "index: " << index_min;
			dob_max = 1;
			for (i = index_max; i < index_max + 1; i++) {	
				
				for (j = 0; j < m; j++) {
					dob_max *= A[i][j];
				}
			}
			dob_min = 1;
			for (i = index_min; i < index_min + 1; i++) {
				
				for (j = 0; j < m; j++) {
					dob_min *= A[i][j];
				}
			}

		}
	}
	
	cout << endl << dob_max << "fd";

	return 0;
}

