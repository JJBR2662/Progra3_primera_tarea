// ejercicio_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <locale>
using namespace std;

int main() {
	setlocale(LC_ALL, "spanish");
	int numero;

	cout << "Ingrese un número de 5 dígitos: ";
	cin >> numero;
	cout << "\n";

	int division = numero / 10000;
	int residuo = numero % 10000;
	cout << division << "   ";

	division = residuo / 1000;
	residuo = residuo % 1000;
	cout << division << "   ";

	division = residuo / 100;
	residuo = residuo % 100;
	cout << division << "   ";

	division = residuo / 10;
	residuo = residuo % 10;
	cout << division << "   ";

	division = residuo / 1;
	residuo = residuo % 1;
	cout << division << "   ";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
