#include <iostream>
#include <stdlib.h>

using namespace std;

int numeroAle(int); //prototipo de la función

int main(){
	int num,numero;
	cout<<"Ingrese la cantidad de numeros a generar: ";cin>>num;
	int limite_inferior = 0;
	int limite_superior = num;
    numero=numeroAle(num);
    cout<<"Los numero aleatorios son: "<<num;
}

int numeroAle(int n){
	int a;
	int limite_inferior = 0;
	int limite_superior = n;
	for(int i=0;i<n;i++){
		a = 0+ rand() % (n +1 - 0) ;
		cout<<a<<endl;
}
	return a;
}