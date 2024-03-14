// Materia: Programación I, Paralelo 4
// Autor: Abigail Quisbert Lopez
// Fecha creación: 07/03/2024
// Fecha modificación: 14/03/2024
// Número de ejercicio: 8
// Problema planteado: Lee por teclado la fecha actual y la fecha de nacimiento de una persona y calcula su edad.

#include <iostream>
using namespace std;

int edad(int fecha[], int cumple[]){
    
    int e=fecha[2]-cumple[2];
    
    if (fecha[1]<cumple[1] or (fecha[1]==cumple[1] and fecha[0]<cumple[0])) {
        e--;
    }
    
    return e;
    
}


int main()
{
    int dia, mes, ano;
    int fecha[3], cumple[3];
    
    cout<<"ingresse el dia actual:\n";
    cin>> fecha[0];
    
    cout<<"ingresse el mes actual :\n";
    cin>> fecha[1];
    
    cout<<"ingresse el ano actual :\n";
    cin>> fecha[2];
    
    
    
    cout<<"ingresse el dia de su cumpleanos:\n";
    cin>> cumple[0];
    
    cout<<"ingresse el mes actual de su cumpleanos:\n";
    cin>> cumple[1];
    
    cout<<"ingresse el ano actual de su cumpleanos:\n";
    cin>> cumple[2];
    
    cout<<"su edad es: "<<edad(fecha,cumple);


    return 0;
}