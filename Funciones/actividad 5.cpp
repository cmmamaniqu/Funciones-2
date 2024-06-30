#include <iostream>
#include <cmath>

using namespace std;

float raizECU(int,int,int);
float raizECU2(int,int,int); //prototipo de la función
void calcularRaices(int,int,int);


int main(){
	float a,b,c,raiz1,raiz2,nan;
	cout<<"Ingrese el valor del coeficiente a: "; cin>>a;
	cout<<"Ingrese el valor del coeficiente b: "; cin>>b;
	cout<<"Ingrese el valor del coeficiente c: "; cin>>c;
	raiz1=raizECU(a,b,c);
	raiz2=raizECU2(a,b,c);
	calcularRaices(a,b,c);

	if(raiz1>0 && raiz2>0){
	cout<<"\nLas raices son reales";
    }
    if(raiz1<0 && raiz2<0){
	cout<<"\nLas raices son reales";
    }else{
    	cout<<"\nLas raices son imaginarias";
	}
	
	cout<<"\nLa raiz x1: "<<raiz1;
	cout<<"\nLa raiz x2: "<<raiz2;

	return 0;
}


float raizECU(int x, int y, int z){
	float d,x1=0;
	
	d= (pow(y,2))-(4*x*z);
	x1= (-y + sqrt(d))/ (2*x);

	return x1;
}


float raizECU2(int x, int y, int z){
	float d, x2=0;
	d= (pow(y,2))-(4*x*z);
	x2= (-y - sqrt(d)) / (2*x);
	return x2;
}


void calcularRaices(int x,int y,int z){
	//int coef,ra1,ra2,ra3,real,comple;
	
	cout<<"Los coeficientes son: "<<x<<" , "<<y<< " ,"<<z<<endl;

}


