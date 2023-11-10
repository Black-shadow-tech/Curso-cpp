#include <iostream>
#include <conio.h>

using namespace std;

int  encontraMax(int x, int y); //inicializamos nuestras variables...

int main(){
	int n1, n2; //variable tipo enteras 
	int mayor; //para almacenar el valor mayor
	
	cout<<"Digite un numero: "; //preguntando el valor de variables y guardandolas
	cin>>n1;
	cout<<"Digite otro numero: ";
	cin>>n2;
	
	mayor = encontraMax(n1, n2); //almacenando en la variable mayor
	cout<<"El numero mayor es: "<<mayor<<endl;//copilamos y mostramos el resultado en pantalla
	
	getch();
	return 0;
}

int  encontraMax(int x, int y){ //inicializamos nuestra funciones
	int numMax;
	
	if(x > y){
		numMax = x;
	}
	else if(x < y){
		numMax = y;
	}

	return numMax; //retornamos lo valores
}

