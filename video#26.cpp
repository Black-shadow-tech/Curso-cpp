#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int n, fact = 1;
	
	cout<<"Digite el numero de elementos: ";
	cin>>n;
	
	for(int i=1; i<=n; i++){
		fact *= i;
	}
	
	cout<<"el factoria de los numeros en su numero de elemento es: "<<fact<<endl; 

	
	getch();
	return 0;
}