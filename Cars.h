#include <iostream>
using namespace std;

#ifndef CARS_H
#define CARS_H


class Cars
{
    public:
        Cars();
        Cars(string, string, float);
        Cars(Cars& clone);


        void setbrand(string);
        void setname(string);
        void setcost(float);

        string getbrand();
        string getname();
        float getcost();


        friend ostream &operator << (ostream& out, Cars &c)
        {
            out<<"\nBrand: " <<c.brand;
            out<<"\nName: " <<c.name;
            out<<"\nCost: " <<c.cost<< " rupees";
            return out;
        }

    private:
       string brand;
       string name;
       float cost;
};

#endif // CARS_H
