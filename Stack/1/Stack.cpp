/*Ejercicio 1: Hacer un programa para agregar números enteros a una pila, 
hasta que el usuario lo decida, después mostrar todos los números introducidos en la pila.*/

#include <iostream>
#define MAX 500

using namespace std;

class Stack
{
    private:
        int stack_data[MAX], stackPointer;  //int array and pointer
    public:
        //Prototypes
        Stack();
        void push(int);
        int pull(int &);
};

//Contructor
Stack::Stack()
{
    //Initialize stackPointer to zero
    stackPointer = 0;
}

//Define push method
void Stack::push(int value)
{
    //Check if stackPointer isn't equal to MAX macro
    if(stackPointer==MAX)
    {
        cout<<"Full stack"<<endl;
        return;
    }
    stack_data[stackPointer] = value;    //Put value on Stack
    cout<<"Data correctly added"<<endl;
    stackPointer++; //Increase stackPointer
}


//Define pull method
int Stack::pull(int &data)
{
    //Check if stackPointer didn't change his position
    if(!stackPointer)
    {
        cout<<"Empty stack"<<endl;
        return 1;
    }
    data = stack_data[stackPointer];    //Set Stack's data on value
    stackPointer--;
    return data;
}