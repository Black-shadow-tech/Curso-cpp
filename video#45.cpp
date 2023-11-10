#include<conio.h>
#include<string.h>
#include<iostream>

using namespace std;

int main(){
	char cad1[10];
	
	cout<<"Como te llamas? ";
	cin.getline(cad1,10,'\n');
	
	cout<<"\nNombre original:\n";
	cout<<cad1<<endl;
	
	strrev(cad1);
	
	cout<<"\nNombre alreves:\n";
	cout<<cad1<<endl;
	
	getch();
	return 0;
}