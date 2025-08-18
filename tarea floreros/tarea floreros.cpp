// tarea floreros.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <limits>
using namespace std;

double leerNumero(int idx) {
    double v;
    while (true) {
        cout << "Numero " << idx << ": ";
        if (cin >> v) return v;                 // ok: es número
        cout << "Entrada invalida. Solo numeros.\n";
        cin.clear();                             // limpia el failbit
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // descarta basura
    }
}

int main() {
    cout << "Introduce 5 numeros (solo numeros):\n";

    double mayor = leerNumero(1);
    for (int i = 2; i <= 5; ++i) {
        double x = leerNumero(i);
        if (x > mayor) mayor = x;
    }

    cout << "El numero mayor es: " << mayor << endl;
    return 0;
}
