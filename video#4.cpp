#include<iostream>

using namespace std;

int main(){
	int n1,n2, suma=0,resta=0,multiplicacion=0,divicion=0;
	
	cout<<"BIENVENIDO:\n";
	cout<<"Digite un numero: ";
	cin>>n1; 
	cout<<"Digite otro numero: ";
	cin>>n2;
	
	suma = n1 + n2;
	resta = n1 - n2;
	multiplicacion = n1 * n2;
	divicion = n1 / n2;
	
	cout<<"\nLa suma de su dos numero es: "<<suma<<endl;
	cout<<"\nLa resta de su dos numero es: "<<resta<<endl;
	cout<<"\nLa multiplicacion de su dos numero es: "<<multiplicacion<<endl;
	cout<<"\nLa divicion de su dos numero es: "<<divicion<<endl;
	
	
	return 0;
}