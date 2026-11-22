#include "chef.h"

Chef::Chef(const string &name) : name(name)
{
    cout <<"Chef "<<name<<" konstruktori"<<endl;
}

Chef::~Chef(){
    cout <<"Chef "<<name<<" destruktori"<<endl;
}
void Chef::makeSalad()
{
    cout <<name<<" makes salad."<<endl;
}

void Chef::makeSoup(){
    cout <<name<<" makes soup."<<endl;
}


