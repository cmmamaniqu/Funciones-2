#include <iostream>
#include <cmath>

using namespace std;

float calculaHip(int,int); // Prototipo de la función

int main(){
	float cat1,cat2,hip;
	cout<<"Ingrese el cateto 1: "; cin>>cat1;
	cout<<"Ingrese el cateto 2: "; cin>>cat2;
	hip=calculaHip(cat1, cat2);
	cout<<"El valor de la hipotenusa es: "<<hip;
	return 0;
}

float calculaHip(int a, int b){
	float x;
	x = (sqrt((pow(a,2))+(pow(b,2))));
	return x;
}
