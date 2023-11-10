#include<iostream>
#include<conio.h>

using namespace std;

template <class TIPOD> //esta es una funcion para englobar diferente tipos de datos..
void mostrarAbs(TIPOD numero); //inicializamos la funcion con void

int main(){
	int num1 = -4;
	float num2 = -56.67;
	double num3 = -123.5678;
	
	mostrarAbs(num1);
	mostrarAbs(num2);
	mostrarAbs(num3);
	
	getch();
	return 0;
}

template <class TIPOD> //esta es una funcion para englobar diferente tipos de datos..
void mostrarAbs(TIPOD numero){
	if(numero < 0){
		numero = numero * -1;
	}
	
	cout<<"El valor absoluto del numero es: "<<numero<<endl;
	
}