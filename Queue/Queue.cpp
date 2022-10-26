#include <iostream>
#define MAX 5

using namespace std;

class Queue
{
    private:
        int queue_data[MAX], input, output;
    public:
        Queue();
        void push(int dato);
        char pull(int &);
};


/*Define Cola constructor*/
Queue::Queue()
{
    input = 0;
    output = 0;
}

/*Define pull method*/
void Queue::push(int data)
{
    if(input==MAX)
    {
        cout<<"Full queue"<<endl;
        return;
    }
    queue_data[input] = data;
    input++;
}

/*Define push method*/
char Queue::pull(int &data)
{
    if(input==output)
    {
        cout<<"Empty queue"<<endl;
        return '\0';
    }
    data = queue_data[output];
    output++;
    return '1';
}
