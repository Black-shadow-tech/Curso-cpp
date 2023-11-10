#include<iostream>
#include<conio.h>
using namespace std;

void tiempo(int, int&, int&, int&);

int main(){
	int Ntotal, horas, min, seg;
	
	cout<<"Digite el total de segundos: ";
	cin>>Ntotal;
	
	tiempo(Ntotal,horas,min,seg);
	
	cout<<"tiempo equivalente a la cantida de segundos digitados: "<<endl;
	cout<<"Hora: "<<horas<<endl;
	cout<<"Minustos: "<<min<<endl;
	cout<<"Segundo: "<<seg<<endl;
	
	
	getch();
	return 0;
}
void tiempo(int Ntotal, int& horas, int& min, int& seg){
	horas = Ntotal / 3600;
	Ntotal %= 3600;
	min = Ntotal / 60;
	seg = Ntotal % 60;

	
}