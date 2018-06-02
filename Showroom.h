#include <iostream>
#include "Cars.h"

using namespace std;

#ifndef SHOWROOM_H
#define SHOWROOM_H


class Showroom
{
    public:
        Showroom();
        Showroom(float, Cars *c);

        void settcost(float);
        void setcollection(Cars *c);
        void setindex(int);

        float gettcost();
        int getindex();

        void addcars(Cars& c);

        void display()
        {
            cout<< "\n\n      My Collection   \n";

            for(int i=0; i < sizee; i++)
            {
                cout<< this->collection[i] << endl;
            }

            cout<<"\nTotal worth of these cars is: "<< this->tcost << endl;
        }

    private:
        float tcost;
        Cars *collection;

        int sizee;
        int index;

};

#endif // SHOWROOM_H
