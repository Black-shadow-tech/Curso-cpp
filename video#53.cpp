#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int n[] = {3,4,2,1,5};
	int dato,i;
	char band = 'F';
	
	dato = 5;;
	i=0; 
    // dato q tenemos q encontrar..
	
	while(band == 'F' && (i<5)){ // si bandera sigue siendo igual a falso, no a encontrado el elemento,
		if(n[i] == dato){
			band = 'V';
		}
		i++;
	}
	
	if(band == 'F'){
		cout<<"El numero a buscar no existe en el arreglos.";
	}
	else{
		cout<<"El numero a sido encontrado en la posicicion del arreglo "<<i-1<<endl; //al poner i-1, estamos quitando el ultimo iterador q acabamos de aumentar...
	}
	
    getch();
    return 0;
}