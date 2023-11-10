#include<iostream>

using namespace std;

int main(){
	
	int x,y,aux;
	
	cout<<"BIENVENIDO:\n";
	cout<<"Difite el valor de x: ";
	cin>>x;
	cout<<"DIgite el valor se y: ";
	cin>>y;
	
	aux = x;
	x = y;
	y = aux;
	
	cout<<"\nel nuevo valor de x es: "<<x<<endl;
	cout<<"el nuevo valor de y es: "<<y<<endl;
	
	return 0;
}