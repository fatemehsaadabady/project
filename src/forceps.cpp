#include <iostream>
#include "forceps.h"

using namespace std;

forceps::forceps(string name, forceps_size(medium))             // کانستراکتور
{
     set_name(name);
}

void forceps::set_name(string n)                     // توابع ست و گت
{
     name = n;
}

string forceps::get_name()
{
     return name;
}