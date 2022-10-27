/*Ejercicio 1: Hacer un programa para agregar números enteros a una pila, 
hasta que el usuario lo decida, después mostrar todos los números introducidos en la pila.*/

#include <iostream>
#include "Stack.cpp"

using namespace std;

int main(int argc, char const *argv[])
{
    int opt, data, value;
    Stack stack;

    do
    {
        //Menu
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
            stack.push(data);
            break;

        //Case 2 -> Pull method
        case 2: 
            value = stack.pull(data);
            if(value)
                cout<<"Data: "<<value;
            break;
        }
    } while (opt!=3);
    
    return 1;
}
