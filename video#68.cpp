#include<iostream>
#include<conio.h>
using namespace std;
void intercambio(int&, int&);

int main(){
	int n1=10,n2=15;
	
	cout<<"El valor de la x es: "<<n1<<endl;
	cout<<"El valor de la y es: "<<n2<<endl;
	
	intercambio(n1,n2);
	
	cout<<"El nuevo valor de la x es: "<<n1<<endl;
	cout<<"El nuevo valor de la y es: "<<n2<<endl;

	getch();
	return 0;
}

void intercambio(int& n1, int& n2){
	int aux;
	
	aux = n1;
	n1 = n2;
	n2 = aux;
}
