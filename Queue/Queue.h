# define MAX 5

class Queue
{
    private:
        int queue_data[MAX], input, output;
    public:
        Queue();
        void push(int dato);
        char pull(int &);
};