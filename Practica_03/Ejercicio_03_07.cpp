// Materia: Programación I, Paralelo 4
// Autor: Abigail Quisbert Lopez
// Fecha creación: 07/03/2024
// Fecha modificación: 14/03/2024
// Número de ejercicio: 7
// Problema planteado: Lee por teclado un año y calcula y muestra si es bisiesto


#include <iostream>
using namespace std;

bool Bisiesto(int a) {
    if ((a%4==0 && a%100!=0) || (a%400==0)) {
        return true; 
    } else {
        return false; 
    }
}

int main() {
    int a;
    
    cout<<"Ingrese un año: ";
    cin>>a;
    
    if (Bisiesto(a)) {
        cout<<a<<" es bisiesto"<<endl;
    } else {
        cout<<a<<" no es bisiesto."<<endl;
    }
    
    return 0;
}

