#include <iostream>
#ifndef forceps_h
#define forceps_h
#include "tool.h"

using namespace std;

class forceps : public tool // کلاس پنس
{
public:
     forceps(string name, int price, int size); // کانستراکتور
     virtual void print() const;

private:
};

#endif