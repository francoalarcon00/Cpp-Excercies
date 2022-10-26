#include <iostream>
#include "Nodo.cpp"

using namespace std;

//List class
class List
{
private:
    Nodo *Start;

    //Insert methods
    void insertFront(Nodo *);
    void insertMiddle(Nodo *, Nodo *, Nodo *);
    void insertRear(Nodo *, Nodo *);

    //Search method
    Nodo *searchData(Nodo *&, int);

    //Delete methods
    void deleteFront(void);
    void deleteRear(Nodo *);
    void deleteMiddle(Nodo *, Nodo *);
    bool confirmDelete(Nodo *);

public:
    List();
    ~List();
    void inserts(void);
    void reads(void);
    void deletes(int);
};


//Constructor
List::List()
{
    Start = NULL;
}

//Destructor
List::~List()
{
    Nodo *aux;
    aux = Start;
    
    while (aux)
    {
        Start = aux->Next;
        delete aux;
        aux = Start;
    }
}

/************************************ INSERTS *************************************/
//Inserts method (PUBLIC)
void List::inserts(void)
{
    Nodo *New, *Act, *Prev;
    
    New = new Nodo;
    if (!New)   //There is free memomry?
    {
        cout<<"We don't have memory"<<endl;
        return;
    }
    
    Act = Start;
    while (Act&&(*Act>*New))
    {
        Prev = Act;
        Act = Act->Next;
    }
    
    if (Act==Start)
    {
        insertFront(New);
        return;
    }

    if(!Act)
    {
        insertRear(Prev, New);
        return;
    }

    insertMiddle(Act, Prev, New);
    return;
}

//Inserts multiple methods (PRIVATE)
void List::insertFront(Nodo *New)
{
    New->Next = Start;
    Start = New;
}

void List::insertRear(Nodo *Prev, Nodo *New)
{
    Prev->Next = New;
}

void List::insertMiddle(Nodo *Act, Nodo *Prev, Nodo *New)
{
    New->Next = Act;
    Prev->Next = New;
}

/************************************ READS *************************************/
//Reads method (PUBLIC)
void List::reads(void)
{
    Nodo *aux = Start;
    while (aux)
    {
        cout<<endl<< aux->data;
        aux = aux->Next;
    }
    cout<<endl;
}

/************************************ DELETES *************************************/
//Deletes method (PUBLIC)
void List::deletes(int value)
{
    Nodo *Act, *Prev;
    Act = searchData(Prev, value);

    if (!Act)
    {
        cout<<endl<<"Data not found"<<endl;
        return;
    }
    
    if (confirmDelete(Act))
    {
        if (Act==Start)
        {
            deleteFront();
            return;
        }
        if (!Act->Next)
        {
            deleteRear(Prev);
            return;
        }
        deleteMiddle(Act, Prev);
    }
    
}

//confirmDelete method
bool List::confirmDelete(Nodo *Act)
{
    char opt;
    cout<<"Do you want delete data: "<<Act->data<<" (S/N)";
    cin>>opt;
    if ((opt=='S')||(opt=='s')) return true;
    else return false;
}

//searchData method
Nodo * List::searchData(Nodo *& Prev, int value)
{
    Nodo *Act = Start;
    Prev = Start;

    if (!Start)
        return Start;

    while (Act&&Act->data<value)
    {
        Prev = Act;
        Act = Act->Next;
    }
    return Act;
}

//Deletes multiple methods
void List::deleteFront(void)
{
    Nodo *aux = Start;
    Start = Start->Next;
    delete aux;
}

void List::deleteRear(Nodo *Prev)
{
    Nodo *aux = Prev->Next;
    delete aux;
    Prev->Next = NULL;
}

void List::deleteMiddle(Nodo *Act, Nodo *Prev)
{
    Prev->Next = Act->Next;
    delete Act;
}


