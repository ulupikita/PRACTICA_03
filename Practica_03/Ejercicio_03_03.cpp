// Materia: Programación I, Paralelo 4
// Autor: Abigail Quisbert Lopez
// Fecha creación: 07/03/2024
// Fecha modificación: 14/03/2024
// Número de ejercicio: 3
// Problema planteado: Escribe un programa que se encargue de comprobar si un número es o no primo. Hecho 
//esto, imprime los números primos entre 1 y 100.

#include <iostream>
using namespace std;

void primo(){
    for(int i=2; i<=100; i++){//empezamos desde el 2 porque el 1 no es un numero primo
        int j;
        for(j=2; j*j<=i; j++){
            if(i%j==0){
                break;
            }
        }
        if(j*j>i){
            cout<<i<<endl;
        }
    }
}

int main()
{

    primo();

}