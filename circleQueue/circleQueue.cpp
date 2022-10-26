#include <iostream>
#define MAX 5

using namespace std;

//Define Queue class
class Queue
{
    private:
        int queue_data[MAX], input, output;
        bool empty, full;
    public:
        Queue();
        void push(int);
        char pull(int &);
};

//METHODS

//Constructor
Queue::Queue()
{
    input = 0;
    output = 0;
    empty = true;
    full = false;
}

//Push method
void Queue::push(int data)
{
    if(full)
    {
        cout<<"Full queue"<<endl;
        return;
    }
    queue_data[input] = data;
    input++;
    empty = false;

    if (input==MAX)
        input = 0;
    if(input==output)
        full = true;
}

//Pull method
char Queue::pull(int &data)
{
    if(empty)
    {
        cout<<"Empty queue"<<endl;
        return '\0';
    }
    queue_data[output] = data;
    output++;
    full = false;

    if(output==MAX)
        output = 0;
    if(output==input)
        empty = true;
    return '1';
}