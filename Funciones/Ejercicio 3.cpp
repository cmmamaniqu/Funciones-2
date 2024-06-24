#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double num;
	cout << "Ingrese un numero: ";
	cin >> num;
	
	cout << "Valor absoluto: " << fabs(num) << endl;
	cout << "Raíz cuadrada: " << sqrt(num) << endl;
	cout << "potencia (n^2): " << pow(num, 2) << endl;
	cout << "Redondeo al entero más cercano: " << round(num) << endl;
	cout << "Redondeo hacia arriba: " << ceil(num) << endl;
	cout << "Redonde hacia abajo: " << floor(num) << endl;
	cout << "Seno: " << sin(num) << endl;
	cout << "Coseno: " << cos(num) << endl;
	cout << "Tangente: " << fabs(num) << endl;
	
	return 0;
	
}