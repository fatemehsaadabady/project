#include <iostream>
#include "patient.h"

using namespace std;

patient::patient(string name, string lastname, int age, long int file_number)   // کانستراکتور
{
     set_name(name);
     set_lastname(lastname);
     set_age(age);
     set_file_number(file_number);

}

void patient::set_name(string n)                     // توابع ست و گت
{
     name = n;
}

void patient::set_lastname(string l)
{
     lastname = l;
}

void patient::set_age(int a)
{
     age = a;
}

void patient::set_file_number(long int p)
{
     file_number = p;
}

string patient::get_name()const
{
     return name;
}

string patient::get_lastname()const
{
     return lastname;
}

bool patient::get_age()
{
     if(age < 0)
     {
          return false;
     }
     else
     {
          return true;
     }
}

long int patient::get_file_number()
{
     return file_number;
}
