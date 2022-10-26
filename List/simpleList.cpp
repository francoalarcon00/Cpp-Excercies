#include <iostream>
#include "List.cpp" //Include List.cpp for getting List's methods

using namespace std;

//MENU macro
#define MENU 	cout<<endl<<"1 - Enter data"<<endl<<"2 - Read data"\
              <<endl<<"3 - Delete data"<<endl<<"4 - Quit"<<endl\
              <<endl<<"Select an option ( 1 - 4 ) : "


// main
int main(void)
{
    int opt, data;
    List list;

    do
    {
        MENU;
        cin>>opt;
        switch(opt)
        {
            case 1:
                list.inserts(); //Call inserts method to enter data
                break;
            case 2:
                list.reads();   //Call reads method to read data
                break;
            case 3:
                cout<<endl<<"Enter data to be deleted: ";
                cin>>data;
                list.deletes(data); //Call deletes method to delete data
                break;
        }

    } while (opt!=4);
    return 0;
}