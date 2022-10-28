#include <iostream>
#include "Nodo.cpp"

using namespace std;

class List
{
private:
    Nodo *start;

    //Inserts
    void insertFront(Nodo *);
    void insertMiddle(Nodo *, Nodo *, Nodo *);
    void insertRear(Nodo *, Nodo *);

    //Search
    Nodo *searchData(Nodo *&, string);

public:
    List();
    ~List();
    void insert(string);
    void read();
};

//Constructor
List::List()
{
    start = NULL;
}

//Destructor
List::~List()
{
    Nodo *aux = start;
    while(aux)
    {
        start = aux->next;
        delete aux;
        aux = start;
    }
}

/*******************Inserts*****************/
void List::insert(string name)
{
    Nodo *New, *Act, *Prev;

    New = new Nodo(name);
    if (!New)
    {
        cout<<"We don't have memory"<<endl;
        return;
    }

    Act = start;
    while (Act&&(*Act>*New))
    {
        Prev = Act;
        Act = Act->next;
    }
    
    if(Act==start)
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

void List::insertFront(Nodo *New)
{
    New->next = start;
    start = New;
}

void List::insertMiddle(Nodo *Act, Nodo *Prev, Nodo *New)
{
    New->next = Act;
    Prev->next = New;
}

void List::insertRear(Nodo *Prev, Nodo *New)
{
    Prev->next = New;
}


void List::read()
{
    Nodo *aux = start;
    while (aux)
    {
        cout<<endl<<aux->name;
        aux = aux->next;
    }
    return;
}

