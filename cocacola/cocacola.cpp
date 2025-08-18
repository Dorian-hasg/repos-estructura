// cocacola.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << "CocaCola";
        }
        else if (i % 3 == 0) {
            cout << "Coca";
        }
        else if (i % 5 == 0) {
            cout << "Cola";
        }
        else {
            cout << i;
        }
        cout << endl; // salto de línea en cada iteración
    }
    return 0;
}
