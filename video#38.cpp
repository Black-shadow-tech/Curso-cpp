#include<iostream>
#include<conio.h>
#include<time.h>

using namespace std;

int main(){
	int numeros[3][3];
	
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<"digite un numero: ["<<i<<"]["<<j<<"]: ";
			cin>>numeros[i][j];
		}
	}
	
	cout<<"Esta es la matri original.\n";
	
	for(int i=0; i<3; i++){
	 	for(int j=0; j<3; j++){
	 		cout<<numeros[i][j]; 
		}
		cout<<"\n";
	}
	
	for(int i=0; i<3; i++){
	 	for(int j=0; j<3; j++){
	 	numeros[j][i];
		}
	}
	
	cout<<"Ahora vamos a mostrar la mastris transpuesta."<<endl;
	
	for(int i=0; i<3; i++){
	 	for(int j=0; j<3; j++){
	 	cout<<numeros[j][i];
		}
		cout<<"\n";
	}
	
	getch();
	return 0;
}