#include<iostream>
#include<conio.h>
using namespace std;

void PedirDatos();
void cambiarSigno(int vec[],int);
void mostrar(int vec[], int);

int vec[100], tam;

int main(){
 
 PedirDatos();
 cambiarSigno(vec, tam);
 mostrar(vec, tam);
 
 getch();
 return 0;
}

void PedirDatos(){
	cout<<"Digite el tamano del vector: ";
	cin>>tam; 
	
	for(int i=0; i<tam; i++){
		cout<<i+1<<". Digite un numero: ";
		cin>>vec[i];
	}
}
void cambiarSigno(int vec[],int){
	for(int i=0; i<tam; i++){
		vec[i] *= -1;
	}
}
void mostrar(int vec[], int tam){
	cout<<"\nMostrando los elementos del vector con su signo cambiado: "<<endl;
	for(int i=0; i<tam; i++){
		cout<<vec[i]<<" ";
	}
}


