#include<iostream>

using namespace std;

int main(){
	char letra;
	
	cout<<"Digite un caracter: ";
	cin>>letra;
	
	switch(letra){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': cout<<"("<<letra<<")."<<" Es una vocal minuscula. ";break;
		default: cout<<"("<<letra<<")."<<" Es una vocal mayuscula. ";break;	
	}
	return 0;
}