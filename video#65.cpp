#include<iostream>
#include<conio.h>

using namespace std;

void pedirDatos();
void mult(float x, float y);

float n1, n2;

int main(){
	pedirDatos();
	mult(n1,n2);
	

	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite el valor de x: ";
	cin>>n1;
	cout<<"Digite el valor de y: ";
	cin>>n2;
	
	
}

void mult(float x, float y){
	float mult1 = (x * y);
	cout<<"la multiplicacion de sus datos es: "<<mult1<<endl;
	
}

