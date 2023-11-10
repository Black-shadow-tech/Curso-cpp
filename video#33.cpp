#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numero[100],n, mayor;
	
	cout<<"Digite el numero de elementos del vector: ";
	cin>>n;
	
	for(int i=0; i<5; i++){
		cout<<i+1<<"Digigite un numero: ";
		cin>>numero[i];
		
		if(numero[i] > mayor){
			mayor = numero[i];
		}
	}
	cout<<"\nEl mayor es: "<<mayor<<endl;
	
	getch();
	return 0;
}