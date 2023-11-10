#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char cad1[] = "Esto es una cadena";
	char cad2[100] = " de caracteres.";
	char cad3[30];
	
	strcpy(cad3,cad1);//ya tendria introducida el primer arreglo...
	strcat(cad3,cad2);//ya tendria entroducido el segundo arreglo...
	
	cout<<cad3<<endl;
	getch();
	return 0;
}