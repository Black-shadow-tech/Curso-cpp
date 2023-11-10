#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numero[] = {1,2,3,4,5};
	int suma;
	
	for(int i=0; i<5; i++){
		suma += numero[i];
	}
	
	cout<<suma<<endl;
	
	
	
	getch();
	return 0;
}