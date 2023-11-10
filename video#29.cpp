#include<iostream>
#include<conio.h>
#include<time.h>
using namespace std;

int main(){
	int dato, numero, contador = 0;
	
	srand(time(NULL));
	   dato = 1 + rand()%(100);
	
	
	do{
		cout<<"Digite un numero: ";
		cin>>numero;
		
		if(numero>dato){
			cout<<"\nDigite un numero menor: "<<endl;
		}
		if(numero<dato){
			cout<<"\nDigite un numero mayor: "<<endl;
		}
		contador++;
	}while(numero != dato);
	
	cout<<"\nFELIZIDADES ADIVINASTE EL NUMERO: ";
	cout<<"\nNUMERO DE INTENTOS "<<contador<<endl;
	
		
	getch();
	return 0;
}