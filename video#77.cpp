#include <iostream>
#include <conio.h>
using namespace std;


int sumar(int);

int main(){
	int nElemento;
	
	do{
		cout<<"Digite el numero e elementos: ";
		cin>>nElemento;
	}while(nElemento <= 0);
	
	cout<<"La suma es: "<<sumar(nElemento)<<endl;
	
	
 return 0;
}

int sumar(int n){
	int suma = 0;
	
	if(n == 1){ // n es igual a 0 no, pues baja hacia el esle
		suma =1;
	}
	else{
		suma = n + sumar(n-1);
	}
	
	return suma; 
}