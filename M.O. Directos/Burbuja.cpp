#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main(){

    int i,j,aux;
    int numeros[]={2,3,5,4,1};

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(numeros[j]>numeros[j+1]){
                aux = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = aux;
            }
        }
    }
    cout<<"Forma Ascendente: ";
    for(i=0;i<5;i++){
        cout<<numeros[i]<<", ";
    }
    cout<<"\nForma Descendente: ";
    for(i=4;i>=0;i--){
        cout<<numeros[i]<<", ";
    }

    return 0;
}