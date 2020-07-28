// Лабораторна робота №3 Завдання 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;


int main()
{
    int F[5][5];
    int i, j;
    int index;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            F[i][j] = 1 + rand() % 100;
        }
    }
 
    int suma{};
    
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 1; j++) {
            suma = suma + F[i][j];
        }   
    }
    cout << "Array: \n";

    int W[5];
    W[0] = suma;
    for (i = 0; i < 5; i++) {
        for (j = 1; j < 2; j++) {
            suma = suma + F[i][j];
        }
    }
    W[1] = suma;
    for (i = 0; i < 5; i++) {
        for (j = 2; j < 3; j++) {
            suma = suma + F[i][j];
        }
    }
    W[2] = suma;
    for (i = 0; i < 5; i++) {
        for (j = 3; j < 4; j++) {
            suma = suma + F[i][j];
        }
    }
    W[3] = suma;
    for (i = 0; i < 5; i++) {
        for (j = 4; j < 5; j++) {
            suma = suma + F[i][j];
        }
    }
    W[4] = suma;
    for (i = 0; i < 5; i++) {
        cout << W[i] << "\t";
    }
    index = 0;
    int min = W[0];
    for (i = 0; i < 5; i++) {
        if (min > W[i]) {
            min = W[i];
            index= i;
        }
    }
    cout << endl << "Min: " << min << endl << "Index: " << index << endl;
 
    return 0;
}