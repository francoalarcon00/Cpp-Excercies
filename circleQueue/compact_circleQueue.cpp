#include <iostream>
#include "circleQueue.cpp"

using namespace std;

//Define main
int main(void)
{
    int data, opt;
    char c;
    Queue buffer;

    do
    {
        cout<<"\n\n";
        cout<<"1 - Push data"<<endl<<endl;
        cout<<"2 - Pull data"<<endl<<endl;
        cout<<"3 - Exit"<<endl<<endl;
        cout<<"Put number: ";
        cin>>opt;

        // Switch
        switch (opt)
        {
        case 1: //Case 1
            cout<<"Input: ";
            cin>>data;
            buffer.push(data);  //Call push method
            break;
        case 2: //Case 2
            c = buffer.pull(data);  //Call pull method
            if(c)
                cout<<"Data: "<<data;
            break;
        }

    } while (opt!=3);

    return 1;
}