// Лабораторна робота №5 Завдання 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;


int main()
{

	const int n = 3;

	int A[n][n]{ {2, 4, -6}, {-6, 1, 6}, {2, 6, 0} };
	int i, j;
	int* p;
	p = &A[0][0];

	for (i = 0; i < n; i++) { // Збільшення кожного елементу масиву на 2
		for (j = 0; j < n; j++) {
			*p = A[i][j] + 2;
			p++;

		}
	}
	for (i = 0; i < n; i++) { //Виведення матриці
		cout << endl;
		for (j = 0; j < n; j++) {
			cout << A[i][j] << "\t";

		}
	}
	return 0;
}


	// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
	// Debug program: F5 or Debug > Start Debugging menu

	// Tips for Getting Started: 
	//   1. Use the Solution Explorer window to add/manage files
	//   2. Use the Team Explorer window to connect to source control
	//   3. Use the Output window to see build output and other messages
	//   4. Use the Error List window to view errors
	//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
	//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
