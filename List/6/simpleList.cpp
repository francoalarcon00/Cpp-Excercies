#include <iostream>
#include <string.h>
#include "List.cpp"

#define _menu_ cout<<"Select PORT"<<endl;\
                cout<<"A - PORT A"<<endl<<endl;\
                cout<<"B - PORT B"<<endl<<endl;\
                cout<<"C - PORT C"<<endl<<endl;\
                cout<<"D - PORT D"<<endl<<endl;\
                cout<<"0 - Quit"<<endl<<endl;\
                cout<<"Put letter (A-D): ";

#define MENU 	cout<<"\n\n";\
                cout<<"1 - Enter value"<<endl<<endl;\
                cout<<"2 - Calculate indicators"<<endl<<endl;\
                cout<<"3 - Exit"<<endl<<endl;\
                cout<<"Put number: ";

using namespace std;

int main()
{
    int opt, data;
    char port;
    List A, B, C, D;

    do
    {   
        //Menu
        _menu_;
        cin>>port;

        switch(port)
        {
            case 'A':
                do
                {
                    MENU;
                    cin>>opt;
                    switch (opt)
                    {
                        case 1:
                            cout<<"Enter value: ";
                            cin>>data;
                            if(data < -200 || data > 200)
                                return 0;
                            A.insert(data);
                            // MENU;
                            // cin>>opt;
                            break;
                        case 2:
                            cout<<"Indicators"<<endl;
                            cout<<"Min: "<<A.min()<<endl;
                            cout<<"Max: "<<A.max()<<endl;
                            cout<<"Mean: "<<A.mean()<<endl;
                        default:
                            break;
                    }
                } while (opt!=3);
                break;

            case 'B':
                do
                {
                    MENU;
                    cin>>opt;
                    switch (opt)
                    {
                        case 1:
                            cout<<"Enter value: ";
                            cin>>data;
                            if(data < -200 || data > 200)
                                return 0;
                            B.insert(data);
                            break;
                        case 2:
                            cout<<"Indicators"<<endl;
                            cout<<"Min: "<<B.min()<<endl;
                            cout<<"Max: "<<B.max()<<endl;
                            cout<<"Mean: "<<B.mean()<<endl;
                        default:
                            break;
                    }
                } while (opt!=3);
                break;
            
            case 'C':
                do
                {
                    MENU;
                    cin>>opt;
                    switch (opt)
                    {
                        case 1:
                            cout<<"Enter value: ";
                            cin>>data;
                            if(data < -200 || data > 200)
                                return 0;
                            C.insert(data);
                            break;
                        case 2:
                            cout<<"Indicators"<<endl;
                            cout<<"Min: "<<C.min()<<endl;
                            cout<<"Max: "<<C.max()<<endl;
                            cout<<"Mean: "<<C.mean()<<endl;
                        default:
                            break;
                    }
                } while (opt!=3);
                break;
            
            case 'D':
                do
                {
                    MENU;
                    cin>>opt;
                    switch (opt)
                    {
                        case 1:
                            cout<<"Enter value: ";
                            cin>>data;
                            if(data < -200 || data > 200)
                                return 0;
                            D.insert(data);
                            break;
                        case 2:
                            cout<<"Indicators"<<endl;
                            cout<<"Min: "<<D.min()<<endl;
                            cout<<"Max: "<<D.max()<<endl;
                            cout<<"Mean: "<<D.mean()<<endl;
                        default:
                            break;
                    }
                } while (opt!=3);
                break;
        }
    } while (opt!=3);

    return 1;
}
