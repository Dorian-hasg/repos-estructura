#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

// Función para calcular Fibonacci hasta n
long long fibonacci(int n) {
    if (n == 1 || n == 2) return 1;
    long long a = 1, b = 1, c;
    for (int i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int horas = 24;
    double atraso_total = 0.0;

    cout << fixed << setprecision(6);
    cout << "Hora\tF(n)\tAtraso en esa hora (min)\n";
    cout << "-----------------------------------\n";

    for (int i = 1; i <= horas; i++) {
        long long f = fibonacci(i);
        double atraso = (double)f / (1 << i); // f(n) / 2^n
        atraso_total += atraso;
        cout << i << "\t" << f << "\t" << atraso << endl;
    }

    cout << "\nAtraso total en 24 horas: " << atraso_total << " minutos\n";

    return 0;
}
