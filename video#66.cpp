#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

void datos();
void funpot(int x, int y);

int n1,n2;

int main(){
	datos();
	funpot(n1,n2);
	
	getch();
	return 0;
}
void datos(){
	cout<<"Digite un numero: ";
	cin>>n1;
	cout<<"A que numero quiere elevar su numero anterior: ";
	cin>>n2;
}

void funpot(int x, int y){
	int potencia = pow(n1,n2);
	cout<<"El resultado del numero elevado al "<<n2<<" es: "<<potencia<<endl;
}
