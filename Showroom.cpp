#include <iostream>
#include "Showroom.h"
#include "Cars.h"

using namespace std;

Showroom::Showroom()
{
    this->tcost=0;
    this->sizee=5;
    this->index=0;
    collection= new Cars[5];
}

Showroom::Showroom(float t, Cars *collection)
{
    this->tcost=t;
    this->collection= collection;
}

void Showroom::settcost(float t)
{
    this->tcost=t;
}

void Showroom::setcollection(Cars *c)
{
    this->collection=c;
}

void Showroom::setindex(int i)
{
    this->index=i;
}

float Showroom::gettcost()
{
    return this->tcost;
}

int Showroom::getindex()
{
    return this->index;
}

void Showroom::addcars(Cars& c)
{
    if(index  < sizee)
    {
        c= collection[index];
        index++;
    }

    else
    {
        cout<<"\Sorry space is full!" << endl;
    }

    this->tcost = tcost+ c.getcost();
}
