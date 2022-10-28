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


public:
    List();
    ~List();
    void insert(int);
    void read();
    int min();
    int max();
    float mean();
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
void List::insert(int num)
{
    Nodo *New, *Act, *Prev;

    New = new Nodo(num);
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

int List::min()
{
    Nodo *aux = start;
    int min = aux->number;
    while (aux)
    {
        aux = aux->next;
        if (aux->number < min)
        {
            min = aux->number;
        }
    }
    return min;
}

int List::max()
{
    Nodo *aux = start;
    int max = aux->number;
    while (aux)
    {
        aux = aux->next;
        if (aux->number > max)
        {
            max = aux->number;
        }
    }
    return max;
}

float List::mean()
{
    Nodo *aux = start;
    int acum=0, cont=0;
    float mean;
    while (aux)
    {
        acum+=aux->number;
        cont++;
        aux = aux->next;
    }
    mean = float(acum/cont);
    return mean;
}