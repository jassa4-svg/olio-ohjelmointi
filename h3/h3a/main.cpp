#include <iostream>
#include "chef.h"
#include "italianChef.h"

using namespace std;

int main()
{
    Chef chef("Gordon Ramsay");
    chef.makeSalad();
    chef.makeSoup();

    ItalianChef italianChef("Anthony Bourdain");
    italianChef.makeSalad();
    cout <<"Name of the Italian Chef is "<<italianChef.getName()<<endl;

    return 0;
}
