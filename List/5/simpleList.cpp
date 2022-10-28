#include <iostream>
#include <string.h>
#include "List.cpp"

using namespace std;

int main()
{
    int opt;
    string data;
    List list;

    do
    {   
        //Menu
        cout<<"\n\n";
        cout<<"1 - Enter data"<<endl<<endl;
        cout<<"2 - Read data"<<endl<<endl;
        cout<<"3 - Exit"<<endl<<endl;
        cout<<"Put number: ";
        cin>>opt;
        switch(opt)
        {
            case 1:
                cout<<"Ingrese nombre: ";
                cin>>data;
                list.insert(data); //Call inserts method to enter data
                break;
            case 2:
                list.read();   //Call reads method to read data
                break;
        }
    } while (opt!=3);

    return 1;
}
