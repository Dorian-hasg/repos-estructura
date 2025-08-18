

#include <iostream>
using namespace std;

int main() {
    int numeros[5];
    int mayor;

    cout << "Introduce 5 numeros:" << endl;

    // Leer los 5 números
    for (int i = 0; i < 5; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    // Suponemos que el primero es el mayor
    mayor = numeros[0];

    // Comparamos con los demás
    for (int i = 1; i < 5; i++) {
        if (numeros[i] > mayor) {
            mayor = numeros[i];
        }
    }

    cout << "\nEl numero mayor es: " << mayor << endl;

    return 0;
}
