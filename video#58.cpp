#include<iostream>
#include<conio.h>

using namespace std;

struct info_direccion{
	char address[30];
	char city[20];
	char province[20];
};

struct people{
	char name[20];
	struct info_direccion dir_empleado;
	double salary;
}employee[2];


int main(){
	for(int i=0; i<2; i++){
		fflush(stdin); //esto nos servira para vaciar el baffer y elementos basuras...
		cout<<"type your name: ";
		cin.getline(employee[i].name,20,'\n');
		cout<<"type your address: ";
		cin.getline(employee[i].dir_empleado.address,30,'\n');
		cout<<"type your city: ";
		cin.getline(employee[i].dir_empleado.city,20,'\n');
		cout<<"type your province: ";
		cin.getline(employee[i].dir_empleado.province,20,'\n');
		cout<<"type your salary: ";
		cin>>employee[i].salary;
		cout<<"\n";
	}
	
	for(int i=0; i<2; i++){
		fflush(stdin); //esto nos servira para vaciar el baffer y elementos basuras...
		cout<<"Name: "<<employee[i].name<<endl;
		cout<<"address: "<<employee[i].dir_empleado.address<<endl;
		cout<<"city: "<<employee[i].dir_empleado.city<<endl;
		cout<<"province: "<<employee[i].dir_empleado.province<<endl;
		cout<<"salary: "<<employee[i].salary<<endl;
		cout<<"\n";
	}



	getch();
	return 0;
}