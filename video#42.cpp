#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char nombre[20];
	char nombre1[20];
	
	
	cout<<"Digite una palabra para saber cuantas letras tiene: ";
	cin.getline(nombre,20,'\n');
	
	strcpy(nombre1,nombre);
	
	cout<<nombre1<<endl;
	
	getch();
	return 0;
}