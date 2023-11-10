#include<iostream>

using namespace std;

int main(){
	int edad;
	
	cout<<"BIENVENIDO:\n";
	cout<<"\nDigite su edad: ";
	cin>>edad;
	
	if(edad >= 18 && edad <= 25){
		cout<<"\nSu edad esta en el rango requerido.";
	}
	else{
		cout<<"\nSu edad esta fuera del rango requerido.";
	}
	
	
	return 0;
}