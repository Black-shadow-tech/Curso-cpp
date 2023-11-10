#include <iostream>
#include <conio.h>
using namespace std;

void pedirVector();
void seleccionarPar(int vec[],int vec2[],int);
void imprimirVector(int vec[],int);

int vec1[20],vec2[20],tam,tam2=0;

int main(){
 
 pedirVector();
 seleccionarPar(vec1,vec2,tam);
 imprimirVector(vec2,tam2);
 getch();
 return 0;
}

void pedirVector(){
 cout<<"Digite el tamano del vector: ";cin>>tam;
 for(int i=0;i<tam;i++){
  cout<<i+1<<" -> ";cin>>vec1[i];
 }
}

void seleccionarPar(int vec1[],int vec2[],int tam){
 int j=0;
 for(int i=0;i<tam;i++){
  if(vec1[i]%2 !=0){
   vec2[j]=vec1[i];
   j++;
   tam2++;
  }
 }
}

void imprimirVector(int vec[],int tam){
 cout<<"\Imprimiendo solo impares."<<endl;
 for(int i=0;i<tam;i++){
  cout<<vec[i]<<" ";
 }
}