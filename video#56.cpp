#include<iostream>
#include<conio.h>

using namespace std;

struct persona{
	char nombre[20];
	int edad;
}people1;
int main(){
	
	cout<<"Nombre: ";
	cin.getline(people1.nombre,20,'\n');
	cout<<"Edad: ";
	cin>>people1.edad;
	
	cout<<"Nombre: "<<people1.nombre<<endl;
	cout<<"Edad: "<<people1.edad<<endl;
	getch();
	return 0;
}