/*Se busca el minimo elemento del arreglo y se intercambia con la primera posicion, 
depues se busca el minimo de lo que queda de la lista y se intercambia con el segundo
y finalmente se repite el proceso*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main(){

    int i,j,min,aux;
    int numeros[] = {2,4,5,3,1};

    for(i=0;i<5;i++){
        min = i;

        for(j=i+1;j<5;j++){
            if(numeros[j]<numeros[min]){
                min = j;
            }
        }
        aux = numeros[i];
        numeros[i] = numeros[min];
        numeros[min] = aux;
    }

    cout<<"Forma Ascendente: ";
    for(i=0;i<5;i++){
        cout<<numeros[i]<<", ";
    }

    return 0;
}