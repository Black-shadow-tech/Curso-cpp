#include<iostream>

using namespace std;

int main(){
	int n1,n2;
	
	cout<<"BIENVENIDO:\n";
	cout<<"Digite un numero: ";
	cin>>n1;
	cout<<"DIgite otro numero: ";
	cin>>n2;
	
	
	if(n1 > n2){ //operadores == igualdad, >= mayor o igual que, <+menor o igual que, != diferente...
		cout<<"El numero mayor es: "<<n1<<endl;
	}
	else if(n2 > n1){
		cout<<"\nEl numero mayor es: "<<n2<<endl;
	}
	
	return 0;
}