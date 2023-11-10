#include <iostream>
#include <conio.h>
using namespace std;

void datos();
void simetria(int m[][100], int, int);

int m[100][100],nfil, ncol;
int main(){
	
	datos();
	simetria(m, nfil,ncol);

 getch();
 return 0;
}

void datos(){
	cout<<"Digite el numero de filas de la matriz: ";
	cin>>nfil;
	cout<<"Digite el numero de columnas de la matriz: ";
	cin>>ncol;
	
	for(int i=0; i<nfil; i++){
		for(int j=0; j<ncol; j++){
			cout<<"Digite el numero: ["<<i<<"]["<<j<<"] ";
			cin>>m[i][j];
		}
		cout<<"\n";
	}
}


void simetria(int m[][100],int nfil,int ncol){ //funcion..
	int cont = 0;
	
	if(nfil == ncol){
		for(int i=0; i<nfil; i++){  // mostrando la matriz o creando la...
		    for(int j=0; j<ncol; j++){
		    	if(m[i][j] == m[j][i]){
		    		cont++; // cuanta veses
				}
		   }
		cout<<"\n";
	    }	
	}
	if(cont == nfil*ncol){
		cout<<"La matriz es simetrica."<<endl;
	}
	else{
		cout<<"La matriz no es simetrica."<<endl;
	}
	
}



