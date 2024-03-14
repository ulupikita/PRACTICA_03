// Materia: Programación I, Paralelo 4
// Autor: Abigail Quisbert Lopez
// Fecha creación: 07/03/2024
// Fecha modificación: 14/03/2024
// Número de ejercicio: 4
// Problema planteado: Crea una única función (importante que sólo sea una) que sea capaz de calcular y retornar el área de un polígono.
//La función recibirá por parámetro sólo UN polígono a la vez. Los polígonos soportados serán Triángulo, Cuadrado y Rectángulo.
//Imprime el cálculo del área de un polígono de cada tipo.

#include <iostream>
using namespace std;

float area(float a,float b, int p){
    int c;
    if (p==1){
        c= (b*a)/2;
        return c;
    }
    else if(p==3){
        c=b*a;
        return c;
    }
    else if(p==2){
        c=a*a;
        return c;
    }

}


int main()
{
    float b, a, c;
    int p;
    cout<<"1. Area del triangulo\n";
    cout<<"2. Area del cuadrado \n";
    cout<<"3. Area del rectangulo\n";
    int option;
    cout<<"Ingrese la opcion: "; cin>>option;
    float n;
    switch (option){
            case 1: p=1;
                    cout <<"Ingrese la base : "; cin >> b;
                    cout<<"Ingrese la altura : "; cin >> a;
                    cout<<"El area es: "<<area(a,b,p);
                    break; 

            case 2: p=2;
                    cout <<"Ingrese la longitud de los lados : "; cin >> a;

                    cout<<"El area es: "<<area(a,0,p);
                    break;

            case 3: p=3;
                    cout <<"Ingrese la base : "; cin >> b;
                    cout<<"Ingrese la altura : "; cin >> a;
                    cout<<"El area es: "<<area(a,b,p);
                    break;

            default: cout<<"Ya fue pa";
    }

    return 0;
}