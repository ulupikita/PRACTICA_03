// Materia: Programación I, Paralelo 4
// Autor: Abigail Quisbert Lopez
// Fecha creación: 07/03/2024
// Fecha modificación: 14/03/2024
// Número de ejercicio: 5
// Problema planteado: Crea un programa que invierta el orden de una cadena de texto sin usar funciones propias del lenguaje que lo hagan de forma automática.
//- Si le pasamos "Hola mundo" nos retornaría "odnum aloH"


#include <iostream>
#include <cstring>
using namespace std;

void invcadena(char*c) {
    int l=strlen(c);
    for (int i=0; i<l/2; i++) {
        swap(c[i], c[l-i-1]);
    }
}

int main() {
    char c[100];

    cout<<"Ingrese una cadena:";
    cin.getline(c,100);

    invcadena(c);
    cout<<"Cadena invertida: "<<c<< endl;

    return 0;
}


