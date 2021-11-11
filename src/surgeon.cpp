#include <iostream>
#include "surgeon.h"

using namespace std;

surgeon::surgeon(string name, string lastname, int age, long int Personnel_code) // کانستراکتور
{
     set_name(name);
     set_lastname(lastname);
     set_age(age);
     set_Personnel_code(Personnel_code);

}

void surgeon::set_name(string n)   // توابع ست و گت
{
     name = n;
}

void surgeon::set_lastname(string l)
{
     lastname = l;
}

void surgeon::set_age(int a)
{
     age = a;
}

void surgeon::set_Personnel_code(long int p)
{
     Personnel_code = p;
}

string surgeon::get_name()const
{
     return name;
}

string surgeon::get_lastname()const
{
     return lastname;
}

bool surgeon::get_age()
{
     if((age < 20) || (age > 80))
     {
          return false;
     }
     else
     {
          return true;
     }
}

long int surgeon::get_Personnel_code()
{
     return Personnel_code;
}
