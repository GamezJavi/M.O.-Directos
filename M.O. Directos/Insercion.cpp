/*Se toma en cuenta la posicion, se comprueba si el elemento de 
la izquierda es mayor que el, entonces se cambian de posicion*/
#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main(){

    int numeros[] = {3,5,4,1,2};
    int i,pos,aux;

    for(i=0;i<5;i++){
        pos = i;
        aux = numeros[i];

        while((pos>0) && (numeros[pos-1]>aux)){
            numeros[pos] = numeros [pos-1];
            pos--;
        }
        numeros[pos] = aux;
    }
    cout<<"Forma Ascendente: ";
    for(i=0;i<5;i++){
        cout<<numeros[i]<<", ";
    }

    return 0;
}