#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int n[]={3,2,1,5,4};
    int aux,min;

    for(int i=0; i<5; i++){
        min = i;
        for(int j=1+1; j<5; j++){
            if(n[j] < n[min]){
                min = j;
            }
        }
        aux = n[i];
        n[i] = n[min];
        n[min] = aux;
    }

    cout<<"Ordene Ascendente: ";
    for(int i=0; i<5; i++){
        cout<<n[i]<<" ";
    }


    getch();
    return 0;
}