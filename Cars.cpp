#include <iostream>
#include "Cars.h"

using namespace std;

Cars::Cars()
{
    this->brand="";
    this->name="";
    this->cost=0;
}

Cars::Cars(string b, string n, float c)
{
    this->brand=b;
    this->name=n;
    this->cost=c;
}

Cars::Cars(Cars& clone)
{
    this->brand=clone.brand;
    this->name=clone.name;
    this->cost=clone.cost;
}

void Cars::setbrand(string b)
{
    this->brand=b;
}

void Cars::setname(string n)
{
    this->name=n;
}

void Cars::setcost(float c)
{
    this->cost=c;
}

string Cars::getbrand()
{
    return this->brand;
}

string Cars::getname()
{
    return this->name;
}

float Cars::getcost()
{
    return this->cost;
}
