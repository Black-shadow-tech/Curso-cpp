#include<iostream>

using namespace std;

int main(){
	
	float a,b,c,d,e,f,ecuacion = 0;
	
	cout<<"BIENVENIDO:\n";
	cout<<"Digite el valor de a: ";
	cin>>a;
	cout<<"Digite el valor de b: ";
	cin>>b;
	cout<<"Digite el valor de c: ";
	cin>>c;
	cout<<"Digite el valor de d: ";
	cin>>d;
	cout<<"Digite el valor de e: ";
	cin>>e;
	cout<<"Digite el valor de f: ";
	cin>>f;
	
	
	ecuacion = ((a+(b/c)) / (d+(e/f)));
	
	cout.precision(2); //esto nos sirve para redondiar los decimales...
	cout<<"\nLa ecuacion es: "<<ecuacion<<endl;
	
	return 0;
}