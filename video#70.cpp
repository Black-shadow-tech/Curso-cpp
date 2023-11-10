#include<iostream>
#include<conio.h>
using namespace std;

void cuadrado(int vec[], int); //vector y taman0
void muestra(int vec[], int); //para mostrar tambien nesecitamos el vector y el tamano..

int main(){
	const int TAM = 5; //nunca cambiara su valor por culpa de la funcion, cuando hacemos un arreglo el vector tiene q ser de tipo constante..
	int vec[TAM] = {1,2,3,4,5}; //inicialisamos nuestra variable..
	
	cuadrado(vec, TAM);
	muestra(vec, TAM);
	
	getch();
	return 0;
}
void cuadrado(int vec[], int tam){ //indicamos el vector y su tamano...
	for(int i=0; i<tam; i++){
		vec[i] *= vec[i]; //aqui estamos elevanod los numeros al cuadrado y los va almacenando...
	}
}

void muestra(int vec[], int tam){
	for(int i=0; i<tam; i++){
		cout<<vec[i]<<" ";
	}
}