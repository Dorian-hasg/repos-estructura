// ConsoleApplication8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// Funci�n que calcula el producto de los d�gitos de un n�mero
int productoDigitos(int n) {
    int prod = 1;
    while (n > 0) {
        prod *= (n % 10);
        n /= 10;
    }
    return prod;
}

// Funci�n que calcula la persistencia de un n�mero
int persistencia(int n) {
    int pasos = 0;
    while (n >= 10) { // Mientras tenga m�s de un d�gito
        n = productoDigitos(n);
        pasos++;
    }
    return pasos;
}

int main() {
    cout << "Numeros de dos digitos con persistencia mayor a 3:" << endl;
    for (int i = 10; i <= 99; i++) {
        int p = persistencia(i);
        if (p > 3) {
            cout << i << " -> persistencia: " << p << endl;
        }
    }
    return 0;
}
