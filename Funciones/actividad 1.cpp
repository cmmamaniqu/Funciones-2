#include <iostream>
#include <cmath>
using namespace std;

float areaCir(int); //prototipo de la función

int main(){
	float radio,area;
	cout<<"Ingrese el valor del radio: "; cin>>radio;
	area=areaCir(radio);
	cout<<"El area del circulo es: "<<area;
}

float areaCir(int n){
    float a;
    a= (pow(n,2))* M_PI;
	return a;
}
    