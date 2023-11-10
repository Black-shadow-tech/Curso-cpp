#include<iostream>
#include<conio.h>

using namespace std;

struct people{
	char name[20];
	int age;
	char sex[10];
	char club[20];
}runner;

int main(){
	

	cout<<"type your name: ";
	cin.getline(runner.name,20,'\n');
	cout<<"type your age: ";
	cin>>runner.age;	fflush(stdin); 
	cout<<"type your sex: ";
	cin.getline(runner.sex,10,'\n');
	cout<<"type your club: ";
	cin.getline(runner.club,20,'\n');
	
	if(runner.age <= 18){
		cout<<"\nName: "<<runner.name<<endl;
		cout<<"Age: "<<runner.age<<endl;
		cout<<"Sex: "<<runner.sex<<endl;
		cout<<"Club: "<<runner.club<<endl;
		cout<<"Esta en la categoria juvenil."<<endl;
	}
	else if(runner.age <= 40){
		cout<<"\nName: "<<runner.name<<endl;
		cout<<"Age: "<<runner.age<<endl;
		cout<<"Sex: "<<runner.sex<<endl;
		cout<<"Club: "<<runner.club<<endl;
		cout<<"Esta en la categoria senor."<<endl;
	}
	else if(runner.age > 40){
		cout<<"\nName: "<<runner.name<<endl;
		cout<<"Age: "<<runner.age<<endl;
		cout<<"Sex: "<<runner.sex<<endl;
		cout<<"Club: "<<runner.club<<endl;
		cout<<"He is of veteran category."<<endl;
	}
	
	
	/*
	la forma que el hiso...
	
	int category[20];
	
	if(runner.age <= 18){
		strcpy(category,"juveni");
	}
	else if(runner.age <= 40){
		strcpy(category,"senor");
	}
	else if(runner.age > 40){
		strcpy(category,"veteran");
	}
	
	cout<<"category: "<<category<<endl;
	*/


	getch();
	return 0;
}