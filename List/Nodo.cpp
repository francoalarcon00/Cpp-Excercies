#include <iostream>
using namespace std;

struct Nodo
{
    int data;
    Nodo *Next;
    Nodo();
    bool operator>(Nodo);
};

//Constructor
Nodo::Nodo()
{
    cout<<"Ingrese el dato: ";
    cin>>data;
    Next = NULL;
}

//Operator method
bool Nodo::operator>(Nodo x)
{
    if(data>x.data)
        return true;
    return false;
}
