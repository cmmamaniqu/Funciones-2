#include <iostream>
#include <cmath>

using namespace std;

float raizECU(int,int,int);
float raizECU2(int,int,int); //prototipo de la función

int main(){
	float a,b,c,raiz1,raiz2;
	cout<<"Ingrese el valor del coeficiente a: "; cin>>a;
	cout<<"Ingrese el valor del coeficiente b: "; cin>>b;
	cout<<"Ingrese el valor del coeficiente c: "; cin>>c;
	raiz1=raizECU(a,b,c);
	raiz2=raizECU2(a,b,c);
		
	cout<<"\nLa raiz es x1: "<<raiz1;
	cout<<"\nLa raiz es x2: "<<raiz2;
	return 0;
}

float raizECU(int x, int y, int z){
	float d,x1=0;
	
	d= (pow(y,2))-(4*x*z);
	x1= (-y + sqrt(d))/ (2*x);

	return x1;
	//d= (pow(b,2))-(4*x*z)
}
float raizECU2(int x, int y, int z){
	float d, x2=0;
	d= (pow(y,2))-(4*x*z);
	x2= (-y - sqrt(d)) / (2*x);
	return x2;
}