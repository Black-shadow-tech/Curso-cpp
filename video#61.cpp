#include<iostream>
#include<conio.h>

using namespace std;

struct avarage{
	float note1;
	float note2;
	float note3;
	float note4;
};

struct student{
	char name[20];
	struct avarage prom;
	char sex[20];
	int age;
}c1;

int main(){
	float avarage=0;
	
	cout<<"pyte your name: ";
	cin.getline(c1.name,20,'\n');
	cout<<"enter your sex: ";
	cin.getline(c1.sex,20,'\n');
	cout<<"enter your age: ";
	cin>>c1.age;

	cout<<"\nnow we will ask for your 4 notes: "<<endl;
	
	cout<<"type your first note: ";
	cin>>c1.prom.note1;
	cout<<"type your second note: ";
	cin>>c1.prom.note2;
	cout<<"type your third note: ";
	cin>>c1.prom.note3;
	cout<<"type your fourth note: ";
	cin>>c1.prom.note4;
	
	avarage = (c1.prom.note1+c1.prom.note2+c1.prom.note3+c1.prom.note4)/4;
	
	cout<<"\nName: "<<c1.name<<endl;
	cout<<"Age: "<<c1.age<<endl;
	cout<<"sex: "<<c1.sex<<endl;
	cout<<"Avarage: "<<avarage<<endl;
	

	getch();
	return 0;
}