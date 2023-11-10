#include<iostream>

using namespace std;

int main(){
	int saldo_inicial = 1000, opc;
	float saldo = 0, extra, retiro;
	
	cout<<"\tBIENVENIDO A SU CAJERO AUTOMATICO"<<endl;
	cout<<"1. ingresar dinero en la cuenta: "<<endl;
	cout<<"2. retirar dinero de la cuenta: "<<endl;
	cout<<"3. SALIDA:"<<endl;
	cout<<"opcion: ";
	cin>>opc;
	
	switch(opc){
		case 1:
			cout<<"Digite la cantida de dinero a ingresar ";
			cin>>extra;
			saldo =  extra + saldo_inicial;
			cout<<"Dinero en cuenta "<<saldo;break;
			cout<<"pase un buen dia :D "<<endl;
			
		case 2:
			cout<<"Digite la cantidad de dinero a retirar: ";
			cin>>retiro;
			
			if(retiro > saldo_inicial){
				cout<<"No tiene esa cantidad de dinero"<<endl;
				cout<<"Recordandole q usted solo tiene "<<saldo_inicial<<" miserable pesos pobre de mierda :D "<<endl;
			}
			else{
				saldo = saldo_inicial - retiro;
				cout<<"Dinero en cuenta: "<<saldo;break;
			}
		case 3: break;
	}
	
	
	
	
	return 0;
}