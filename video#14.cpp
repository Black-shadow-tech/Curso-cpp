#include<iostream>

using namespace std;

int main(){
	int numero;
	
	cout<<"Digite un numero: ";
	cin>>numero;
	
	if(numero == 0){
		cout<<"\nEl numero es cero"<<endl;
	}
	else if(numero%2 == 0){ // si queremos saber q numero es par e imprar la formula es: numero%2 == 0...
		cout<<"\nEl numero "<<numero<<" es par."<<endl; 
	}
	else{
		cout<<"\nEl numero "<<numero<<" es impar."<<endl;
	}
	return 0;
}