/*Ejercicio 5: Se quiere desarrollar un programa que elija aleatoriamente los integrantes
de dos grupos diferentes. Para ello se ingresa una cantidad de nombres 
(suponga que siempre se ingresan más de diez) que se cargan en una lista simple. 
El programa selecciona solo cinco nombres para cada equipo de forma aleatoria 
y los indica en pantalla.*/

#include <iostream>
#include <string.h>
using namespace std;

struct Nodo
{
    string name;
    Nodo *next;
    Nodo(string);
    bool operator>(Nodo);
};

//Constructor
Nodo::Nodo(string n)
{   
    name = n;
    next = NULL;
}

//Operator method
bool Nodo::operator>(Nodo x)
{
    if(name>x.name)
        return true;
    return false;
}