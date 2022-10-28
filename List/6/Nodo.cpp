/*Ejercicio 6: Se quiere desarrollar un programa en el que se cargan numeros 
enteros entre -200 y 200. Estos numeros deben cargarse teniendo en cuenta que 
en un paso siguiente estos valores vendran de cuatro sensores diferentes 
(sensor A, sensor B, sensor C y sensor D). Cuando ingrese un valor fuera del 
rango definido, el programa deja de recibir numeros y calcula e indica en 
pantalla los siguientes indicadores para cada sensor: medición mínima, máxima y 
promedio. Finalmente, se imprimen en pantalla los valores medidos ordenados 
de menor a mayor para cada uno de los sensores.
*/

#include <iostream>

using namespace std;

struct Nodo
{
    int number;
    Nodo *next;
    Nodo(int);
    bool operator>(Nodo);
};

//Constructor
Nodo::Nodo(int num)
{
    number = num;
    next = NULL;
}

//Operator
bool Nodo::operator>(Nodo x)
{
    if (number>x.number)
    {
        return true;
    }
    return false;
}