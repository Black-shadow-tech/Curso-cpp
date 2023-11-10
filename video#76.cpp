#include <iostream>
#include <conio.h>
using namespace std;


int factorial(int);

int main(){
	cout<<"Factorial: "<<factorial(5)<<endl;
	
	
 return 0;
}

int factorial(int n){
	if(n == 0){ // n es igual a 0 no, pues baja hacia el esle
		n =1;
	}
	else{
		n = n *factorial(n-1); //esto lo q va hacer es buscar el fatoria de un numero hasta q sea igual a n, luego;
	}
	
	return n; //luego esto se va a multiplicar 1*1 , 2*1, 3*2 = 6
}