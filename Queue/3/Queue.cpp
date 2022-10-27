/*
Ejercicio 3: Hacer un programa, utilizando Colas, que contenga el siguiente menú: .
    1. Insertar un caracter a una cola 
    2. Mostrar todos los elementos de la cola 
    3. Salir
*/

#include <iostream>
#define MAX 500

using namespace std;

class Queue
{
    private:
        char queue_data[MAX];   //char array
        int input, output;      //Indexes
    public:
        //Prototypes
        Queue();
        void push(char);    
        char pull(char &);  
};

//Constructor
Queue::Queue()
{   
    //Initialize input and output indexes to zero
    input = 0;
    output = 0;
}

//Define push method
void Queue::push(char value)
{
    //Check if input value isn't equal to MAX macro
    if(input==MAX)
    {
        cout<<"Full queue"<<endl;
        return;
    }
    queue_data[input] = value;  //Put value on Queue
    cout<<"Data correctly added :)"<<endl;
    input++;    //Increase input
}

//Define pull method
char Queue::pull(char &value)
{
    //Check if input is equal output
    if(input==output)
    {
        cout<<"Empty queue"<<endl;
        return '\0';
    }
    value = queue_data[output]; //Set Queue's data on value
    output++;
    return value;
}