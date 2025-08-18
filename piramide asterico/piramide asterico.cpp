// piramide asterico.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 7; i++) {   // desde 1 hasta 7
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl; // salto de línea después de cada fila
    }
    return 0;
}
