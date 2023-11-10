#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char pal[30];
	int a=0,e=0,i=0,o=0,u=0;
	
	cout<<"Digite una palabra: ";
	cin.getline(pal,30,'\n');
	
	for(int i=0; i<30; i++){
		switch(pal[i]){
			case 'a':a++;break;
			case 'e':e++;break;
			case 'i':i++;break;
			case 'o':o++;break;
			case 'u':u++;break;
			default: break;	
		}
	}
	
	cout<<"la vocal a aparese "<<a<<" veses en su palabra o frase."<<endl;
	cout<<"la vocal e aparese "<<e<<" veses en su palabra o frase."<<endl;
	cout<<"la vocal i aparese "<<i<<" veses en su palabra o frase."<<endl;
	cout<<"la vocal o aparese "<<o<<" veses en su palabra o frase."<<endl;
    cout<<"la vocal u aparese "<<u<<" veses en su palabra o frase."<<endl;

	getch();
	return 0;
}