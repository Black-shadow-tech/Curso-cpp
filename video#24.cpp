#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int n1, suma = 0;
	
	do{
	    cout<<"Digite un numero: ";
	    cin>>n1;
	    if(n1 > 0){
	    	suma += n1;
		}
	}while(((n1<20) || (n1>30)) && (n1 != 0));
	
	
	cout<<"\nla suma es: "<<suma<<endl;
	
	
	getch();
	return 0;
}