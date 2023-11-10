#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char letra[] = "Moises";
	int longitud = 0;
	
	longitud = strlen(letra);
	
	cout<<"Numero de elemento de la cadena: "<<longitud<<endl;
	
	
	getch();
	return 0;
}