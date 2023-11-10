#include<iostream>
#include<conio.h>
#include<time.h>

using namespace std;

int main(){
	char band = 'f';
	int numeros[100][100];
	int f,c;
	
	cout<<"Digite el numero de filas: ";
	cin>>f;
		
	cout<<"Digite el numero de columnas: ";
	cin>>c;
	
	srand(time(NULL));
	
	for(int i=0; i<f; i++){
		for(int j=0; j<c; j++){
			cout<<"Digite un numero: ["<<i<<"]["<<j<<"]: ";
			cin>>numeros[i][j];
		}
	}
	
	if(f == c){
	    for(int i=0; i<f; i++){
		    for(int j=0; j<c; j++){
			    if(numeros[i][j] = numeros[j][i]){
			    	band = 'v';
				}
	       }
       }
	}
	
	if(band == 'v'){
		cout<<"La matriz es simetrica."<<endl;
	}
	else{
		cout<<"La matriza no es simetrica."<<endl;
	}
	
	
	getch();
	return 0;
}