#include<iostream>
#include<conio.h>

using namespace std;

struct data{
	char name[20];
	int age;
	int salary;
}employee[100];

int main(){
	int n, mayor=0,menor=9999,Nmayor=0, Nmenor=0;
	
	
	cout<<"enter the nomber of employee: ";
	cin>>n;
	
	for(int i=0; i<n; i++){
		cout<<i+1<<" .pyte your name: ";fflush(stdin); 
		cin.getline(employee[i].name,20,'\n');
		cout<<"pyte your age: ";
		cin>>employee[i].age;
		cout<<"pyte your salary: ";
		cin>>employee[i].salary;
		cout<<"\n";
		
		if(employee[i].salary > mayor){
			mayor = employee[i].salary;
			Nmayor =  i;
		}
		if(employee[i].salary < menor){
			menor = employee[i].salary;
			Nmenor =  i;
		}
	}
	
	
	cout<<"\nDatos del que gana mayor: "<<endl;
	cout<<"\nName: "<<employee[Nmayor].name<<endl;
	cout<<"Age: "<<employee[Nmayor].age<<endl;
	cout<<"Salary: "<<employee[Nmayor].salary<<endl;
	
	cout<<"\nDatos del que gana menos: "<<endl;
	cout<<"\nName: "<<employee[Nmenor].name<<endl;
	cout<<"Age: "<<employee[Nmenor].age<<endl;
	cout<<"Salary: "<<employee[Nmenor].salary<<endl;

	getch();
	return 0;
}