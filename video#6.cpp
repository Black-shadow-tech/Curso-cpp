#include<iostream>

using namespace std;

int main(){
	
	float a,b,ecuacion = 0;
	
	cout<<"BIENVENIDO:\n";
	cout<<"Digite el valor de a: ";
	cin>>a;
	cout<<"Digite el valor de b: ";
	cin>>b;
	
	ecuacion = ((a/b) + 1);
	
	cout.precision(2); //esto nos sirve para redondiar los decimales...
	cout<<"\nLa ecuacion es: "<<ecuacion<<endl;
	
	return 0;
}