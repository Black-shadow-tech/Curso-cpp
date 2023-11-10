#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main(){
	int numeros[3][3], f,c;
	
	cout<<"Digite el numero de filas: ";
	cin>>f;
	cout<<"Digite el numero de columnas: ";
	cin>>c;
	
	for(int i=0; i<f; i++){
		for(int j=0; j<c; j++){
			cout<<"Digite un numero: ["<<i<<"]["<<j<<"] ";
			cin>>numeros[i][j];
		}
	}
	
	for(int i=0; i<f; i++){
	 	for(int j=0; j<c; j++){
			cout<<numeros[i][j];
		}
		cout<<"\n";
	}
	getch();
	return 0;
}