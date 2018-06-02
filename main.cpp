#include <iostream>
#include "Cars.h"
#include "Showroom.h"

using namespace std;

int main()
{
    Showroom toyota;
    toyota.addcars(*(new Cars("toyota", "corolla", 18)));
    toyota.addcars(*(new Cars("toyota", "Prado", 80)));
    toyota.addcars(*(new Cars("toyota", "prius", 20)));
    toyota.addcars(*(new Cars("toyota", "vitzs", 26)));

    toyota.display();
}
