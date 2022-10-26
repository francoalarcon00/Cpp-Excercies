#include <iostream>
#define MAX 10

//Define class
class Stack
{
private:
    int stack_data[MAX], stackPointer;
public:
    Stack();
    //~stack();
    void push(int);
    char pull(int &);
};

//Constructor
Stack::Stack()
{
    stackPointer = 0;
}

//Push method
void Stack::push(int data)
{
    if(stackPointer==MAX)
    {
        cout<<"Full stack"<<endl;
        return;
    }
    stack_data[stackPointer] = data;
    stackPointer++;
}

//Pull method
char Stack::pull(int &data)
{
    if(!stackPointer)
    {
        cout<<"Empty stack"<<endl;
        return '\0';
    }
    data = stack_data[stackPointer];
    stackPointer--;
    return '1';
}


