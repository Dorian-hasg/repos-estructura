// ConsoleApplication9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

// Función que devuelve la suma de los cuadrados de los dígitos de un número
int sumaCuadrados(int n) {
    int suma = 0;
    while (n > 0) {
        int d = n % 10;
        suma += d * d;
        n /= 10;
    }
    return suma;
}

int main() {
    cout << "Horas que cumplen la propiedad:" << endl;

    for (int h = 0; h < 24; h++) {
        for (int m = 0; m < 60; m++) {
            int numero = h * 100 + m; // Concatenamos HHMM
            int suma = sumaCuadrados(h / 10) + sumaCuadrados(h % 10)
                + sumaCuadrados(m / 10) + sumaCuadrados(m % 10);

            if (numero == suma) {
                cout << setfill('0') << setw(2) << h << ":"
                    << setfill('0') << setw(2) << m
                    << " -> " << numero << endl;
            }
        }
    }

    return 0;
}
