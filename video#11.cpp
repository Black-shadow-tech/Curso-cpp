#include<iostream>

using namespace std;

int main(){
	int numero, resta, dato = 18;
	
	cout<<"BIENVENIDO:\n";
	cout<<"ser mayor de 18.\n"<<endl;
	cout<<"Digite un numero: ";
	cin>>numero;
	
	resta = numero - dato;
	
	if(numero >= dato){ //operadores == igualdad, >= mayor o igual que, <+menor o igual que, != diferente...
		cout<<"\nSu edad cumple con los estandares para entrar en la empresa."<<endl;
	}
	else if(dato > numero){
		cout<<"usted no cumple con los estandares de la empresa, te falta "<<resta <<"anos"<<endl;
	}
	
	return 0;
}