// Лабораторна робота№2 Завдання 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int main()
{
	float Q[12];
	int suma=0;
	int i;
	float max; //максимальне число массиву
	int index_max; //позиція максимального числа массиву
	float min; //мінімальне число массиву
	int index_min; //позиція мінімального числа массиву


	
	for (i = 0; i < 12; i++) {
		Q[i] = 1 + rand() % 123;
		

	}
	cout << endl;
	index_max = 0;
	max = Q[0];
	for (i = 1; i < 12; i++) {
		if (max < Q[i]) {
			max = Q[i];
			index_max = i;
		}
	}

	index_min = 0;
	min = Q[0];
	for (i = 0; i < 12; i++) {
		if (min > Q[i]) {
			min = Q[i];
			index_min = i;
		}
	}

	cout << "Max element array " << max << endl << "Min element array " << min << endl;
	cout << "Random array: " << endl;
	for (i = 0; i < 12; i++) {
		cout << Q[i] << "\t";
	}
	cout << endl << "New array " << endl;
	suma = min + max;
	for (i = 0; i < 12; i++) {
		Q[i] = Q[i] / suma;
		cout << setprecision(2) << Q[i] << "\t";
	}
	






	return 0;
}

