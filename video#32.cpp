#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numero[100], n;

	
	cout<<"Digite el numero de elmentos: ";
	cin>>n;
	 
	
	for(int i=0; i<n; i++){
		cout<<"Digite un numero: ";
		cin>>numero[i]; //guardando todos los elementos del vector...
	}
	
	for(int i=0; i<n; i++){
		cout<<i<<" ->"<<numero[i]<<endl;
	}
	
	
	
	
	getch();
	return 0;
}