#include<iostream>
#include<conio.h>

using namespace std;

struct stages{
	int hour;
	int minutes;
	int seconds;
}et[100];

int main(){
	int n, Thour=0, Tminutes=0, Tseconds=0;
	
	cout<<"enter the number of stages: ";
	cin>>n;
	
	for(int i=0; i<n; i++){
		cout<<"hour: ";
		cin>>et[i].hour;
		cout<<"minute: ";
		cin>>et[i].minutes;
		cout<<"seconds: ";
		cin>>et[i].seconds;
		
		Thour += et[i].hour;
		Tminutes += et[i].minutes;
		
		if(Tminutes >= 60){
			Tminutes -= 60;
			Thour++; 
		}
		
		Tseconds += et[i].seconds;
		
		if(Tseconds >= 60){
			Tseconds -= 60;
			Tminutes++; 
		}
		cout<<"\n";
	}
	
	cout<<"the time total of employee:\n";
	cout<<"\nhours: "<<Thour<<endl;
	cout<<"\nminutes: "<<Tminutes<<endl;
	cout<<"\nseconds: "<<Tseconds<<endl;


	getch();
	return 0;
}