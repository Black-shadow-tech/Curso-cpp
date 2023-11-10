#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numero[] = {1,2,3,4,5};
	int inf, sup, mit, dato;
	char band = 'F';
	
	dato = 4;
	
	inf = 0;
	sup = 2;
	
	while(inf <= sup){
		mit = (inf+sup)/2;
		if(numero[mit] == dato){
			band = 'V';
			break;
		}
		if(numero[mit] > dato){
			sup = mit;
			mit = (inf+sup)/2;
		}
		if(numero[mit] < dato){
			inf = mit;
			mit = (inf+sup)/2;
		}
	}
	
	if(band == 'V'){
		cout<<"El numero se encontro en la posicion: "<<mit<<endl; 
	}
	else{
		cout<<"El numero no se encontro"<<endl;
	}
	
	getch();
	return 0;
}