// Лабораторна робота №2 Завдання2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int main() {
    float X[10];
    int i;
    int max;
    int buf;
    cout << "Random array: \n";
    for (i = 0; i < 10; i++) {       //створення рандомного массиву
        X[i] = 1 + rand() % 100;
        cout << X[i] << "\t";
    }
    cout << endl;

    for (i = 0; i < 10; i++) {
        max = i;
        for (int j = i+1; j < 10; j++) {
            max = (X[j] > X[max]) ? j : max;
        }
        if (max != i) {
            buf = X[i];
            X[i] = X[max];
            X[max] = buf;
        }
    }
    cout << "Max1: " << X[0] << endl << "Max2: " << X[1] << endl << "Max3: " << X[2] << endl;
    cout << "Dobutok: " << X[0] * X[1] * X[2] << endl;
   


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
