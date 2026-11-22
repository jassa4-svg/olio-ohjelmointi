#include "italianChef.h"
using namespace std;


ItalianChef::ItalianChef(const string &name) : Chef(name)
{
     cout <<"ItalianChef "<<name<<" konstruktori"<<endl;
}

ItalianChef::~ItalianChef(){
    cout <<"ItalianChef "<<name<<" destruktori"<<endl;
}

string ItalianChef::getName() const
{
    return name;
}
void ItalianChef::makePasta()
{
    cout <<name<<" makes pasta."<<endl;
}


