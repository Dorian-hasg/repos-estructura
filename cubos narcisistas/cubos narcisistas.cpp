// cubos narcisistas.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int n, cubo, suma;
	cout << "Ingrese un numero: ";
	cin >> n;
	suma = 0;
	cubo = n * n * n;
	while (cubo > 0) {
		suma += cubo % 10;
		cubo /= 10;
	}
	if (suma == n) {
		cout << "El numero " << n << " es un cubo narcisista." << endl;
	} else {
		cout << "El numero " << n << " no es un cubo narcisista." << endl;
	}
	return 0;
}