#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int jugadores(int, int); //prototipo de la función

int main (){
	int hum,maq,juga;
	hum=0;
	maq=0;
	juga=jugadores(hum,maq);
}

int jugadores(int h, int m){
	int hu,ma,c;
	hu=0;
	ma=0;
	
	while(1){
		cout<<"\n BIENVENIDO AL JUEGO! ";
		cout<<"\n Selecione una opcion 1.piedra 2.papel 3.tijera ";
		cin>>h;
		
	if (h==1){
		cout << "\nHumano: Piedra ";
	}
	if (h==2){
		cout << "\nHumano: Papel ";
	}
	if (h==3){
		cout << "\nHumano: Tijera ";
    }
    
    m = ( rand () % 3) + 1 ;
    
    if (m==1){
		cout << "\nMaquina: Piedra ";
	}
	if (m==2){
		cout << "\nMaquina: Papel ";
	}
	if (m==3){
		cout << "\nMaquina: Tijera ";
	}
	
	if( h==m){
		cout<<"\nEmpate ";
	}
	
	if((h==1 && m==3) || (h==2 && m==1) || (h==3 && m==2)){
		cout<<"\nGana humano ";
		hu++;
	}
	
		if((m==1 && h==3) || (m==2 && h==1) || (m==3 && h==2)){
		cout<<"\nGana maquina ";
		ma++;
	}
	
	cout<<" \nhu: "<<hu<< "\nma: "<<ma<<"\n";
	
	if ( hu ==3 ){
		cout<<"\nGana humano";
		return c;
	}
	
	if ( ma == 3 ){
		cout<<"\nGana maquina";
		return c;
	}
}
}
