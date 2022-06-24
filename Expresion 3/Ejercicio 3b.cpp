/*
Ejercicio 3: Escribe la siguiente expresión como expresión en C++:
("a" más "b" sobre "c") sobre ("d" más "e" sobre "f")
*/

#include <iostream>
using namespace std;

int main()
{
	double a, b, c, d, e, f;
	double resultado = 0;

	cout << "Introduzca a: \n"; cin >> a;
	cout << "Introduzca b: \n"; cin >> b;
	cout << "Introduzca c: \n"; cin >> c;
	cout << "Introduzca d: \n"; cin >> d;
	cout << "Introduzca e: \n"; cin >> e;
	cout << "Introduzca f: \n"; cin >> f;

	resultado = (a + b / c) / (d + e / f);

	cout.precision(4);
	cout << "El resultado es: " << resultado;


	return 0;
}