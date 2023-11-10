#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char nombre[] = "becerro";
	char nombre1[] = "avion";
	
	if(strcmp(nombre,nombre1)>0){
		cout<<nombre<<" esta despues alfabeticamente.";
	}

	
	getch();
	return 0;
}