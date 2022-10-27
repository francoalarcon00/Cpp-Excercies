/*
Ejercicio 3: Hacer un programa, utilizando Colas, que contenga el siguiente menú: .
    1. Insertar un caracter a una cola 
    2. Mostrar todos los elementos de la cola 
    3. Salir
*/

#include <iostream>
#include "Queue.cpp"

using namespace std;

int main(int argc, char* argv[])
{
    int opt;
    char c, data;
    Queue buffer;

    do
    {   //Menu
        cout<<"\n\n";
        cout<<"1 - Push data"<<endl<<endl;
        cout<<"2 - Pull data"<<endl<<endl;
        cout<<"3 - Exit"<<endl<<endl;
        cout<<"Put number: ";
        cin>>opt;

        switch (opt)
        {
        //Case 1 -> Push data
        case 1: 
            cout<<"Input: ";
            cin>>data;
            buffer.push(data);
            break;

        //Case 2 -> Pull data 
        case 2: 
            c = buffer.pull(data);
            if(c)
                cout<<"Data: "<<data;
            break;
        }

    } while (opt!=3);

    return 1;
}
