#include<iostream>
#include<math.h>

using namespace std;

int main(){
	float x,y, resultado = 0;
	
	cout<<"Digite el valor de x: ";
	cin>>x;
	cout<<"Digite el valor de y: ";
	cin>>y;
	
	resultado = (sqrt(x)) / (pow(y,2) -1); // el pow nos sirvira para elevar numeros al cuadrado o al cubo = pow(y,2)
	
	cout.precision(2);
	cout<<"su resultado es: "<<resultado<<endl;
	
	
	 
	
	return 0;
}