#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"
using namespace std;

class ItalianChef : public Chef {
public:
    ItalianChef(const string &name);
    ~ItalianChef();

    string getName() const;
    void makePasta();


};
#endif // ITALIANCHEF_H
