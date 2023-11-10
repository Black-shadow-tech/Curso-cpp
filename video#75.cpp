#include<iostream>
#include<conio.h>
using namespace std;

struct complejo{
	float real;
	float imaginaria;
}p1,p2;

//prototipo de funcion
void datos();
complejo suma(complejo,complejo);
void muestra(complejo); //declaramo para mostrar el resultado de todo

int main(){
	datos(); //llamamos a la variable
	
	complejo x = suma(p1,p2);
	muestra(x); //llamamos  al funcion con la variable asignada
	
	getch();
	return 0;
}

void datos(){
	cout<<"Digite los datos para el primer numero de complejo: "<<endl;
	cout<<"Digite su numero real: ";
	cin>>p1.real;
	cout<<"Digite su numero imaginario: ";
	cin>>p1.imaginaria;
	
	cout<<"\nDigite los datos para el segundo numero de complejo: "<<endl;
	cout<<"Digite su numero real: ";
	cin>>p2.real;
	cout<<"Digite su numero imaginario: ";
	cin>>p2.imaginaria;
}

complejo suma(complejo,complejo){
	p1.real += p2.real;
	p1.imaginaria += p2.imaginaria;
	
	return p1;
}

void muestra(complejo x){ //declaramos una variable para  almacenar los datos
	cout<<"Resultado de la suma: "<<x.real<<" , "<<x.imaginaria<<endl;
}


