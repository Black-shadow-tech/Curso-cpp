#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

template <class DATOD>
void despliegue(DATOD dato);


int main(){
	int n1 = 4;
	float n2 = 123.45;
	double n3 = 123.456;
	char n4[] = {"Moises"};
	
	despliegue(n1);
	despliegue(n2);
	despliegue(n3);
	despliegue(n4);
	
	
	getch();
	return 0;
}

template <class DATOD>
void despliegue(DATOD dato){
	cout<<"El dato: "<<dato<<endl;
	
}

