// piramide de bolas.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {

	const int TOTAL = 10000;
	int capas = 0;
	int bolas_usadas = 0;

	for (int n = 1; ; n++) {
		int suma = n * n; // bolas en la capa n
		if (bolas_usadas + suma > TOTAL) break;
		bolas_usadas += suma;
		capas = n;
	}

	int sobrantes = TOTAL - bolas_usadas;

	cout << "Numero maximo de capas:" << capas << endl;
	cout << "Bolas sobrantes:" << sobrantes << endl;

	return 0;

}
			
		