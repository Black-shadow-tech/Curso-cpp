#include<iostream>

using namespace std;

int main(){
	float practica,teoria,participacion, resultado;
	
	cout<<"BIENVENIDO:\n";
	cout<<"Digite la nota de practica: ";
	cin>>practica;
	cout<<"Digite la nota de teoria: ";
	cin>>teoria;
	cout<<"Digite la nota de participacion: ";
	cin>>participacion;
	
	practica = practica * 0.30;
	teoria = teoria * 0.60;
	participacion = participacion * 0.10;
	
	resultado = (practica+teoria+participacion);
	
	cout<<"resultado: "<<resultado<<endl;

	return 0;
}