#include <iostream>
#include "knife.h"

using namespace std;

knife::knife(string name, knife_size(little), knife_sharpness(sharp))             // کانستراکتور
{
     set_name(name);
}

void knife::set_name(string n)                     // توابع ست و گت
{
     name = n;
}

string patient::get_name()
{
     return name;
}