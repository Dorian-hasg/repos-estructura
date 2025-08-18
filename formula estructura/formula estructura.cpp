// formula estructura.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, discriminante, x1, x2;

    cout << "Resolver la ecuacion cuadratica ax^2 + bx + c = 0\n";

    cout << "Introduce a: ";
    cin >> a;
    cout << "Introduce b: ";
    cin >> b;
    cout << "Introduce c: ";
    cin >> c;

    if (a == 0) {
        cout << "Esto no es una ecuacion cuadratica (a=0)." << endl;
        return 0;
    }

    discriminante = b * b - 4 * a * c;

    if (discriminante > 0) {
        x1 = (-b + sqrt(discriminante)) / (2 * a);
        x2 = (-b - sqrt(discriminante)) / (2 * a);
        cout << "Dos soluciones reales: x1 = " << x1 << ", x2 = " << x2 << endl;
    }
    else if (discriminante == 0) {
        x1 = -b / (2 * a);
        cout << "Una solucion real doble: x = " << x1 << endl;
    }
    else {
        double parteReal = -b / (2 * a);
        double parteImaginaria = sqrt(-discriminante) / (2 * a);
        cout << "Soluciones complejas:\n";
        cout << "x1 = " << parteReal << " + " << parteImaginaria << "i\n";
        cout << "x2 = " << parteReal << " - " << parteImaginaria << "i\n";
    }

    return 0;
}
