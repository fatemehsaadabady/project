#include <iostream>
#include "patient.h"
using namespace std;

patient::patient(string name, string lastname, int age, long int file_number)                       // کانستراکتور
{
     set_name(name);
     set_lastname(lastname);
     set_age(age);
     set_file_number(file_number);
}

void patient::set_name(string name1)                                                              // تابع ست اسم بیمار
{
     name = name1;
}

void patient::set_lastname(string lastname1)                                                     // تابع ست فامیلی بیمار
{
     lastname = lastname1;
}

void patient::set_age(int age1)                                                                 // تابع ست سن بیمار
{
     age = age1;
}

void patient::set_file_number(long int filenumber1)                                             // تابع ست شماره پرونده
{
     file_number = filenumber1;
}

string patient::get_name() const                                                               // تابع گت اسم
{
     return name;
}

string patient::get_lastname() const                                                          // تابع گت فامیلی
{
     return lastname;
}

int patient::get_age() const                                                                  // تابع گت سن
{
     return age;
}

long int patient::get_file_number() const                                                   // تابع گت شماره پرونده
{
     return file_number;
}

void patient::print() const                                                                // تابع پرینت
{
     cout << "==================" << endl;
     cout << "patient" << endl;
     cout << "name: " << get_name() << endl;                                             // چاپ اسم
     cout << "lastname: " << get_lastname() << endl;                                     // چاپ فامیلی
     cout << "age: " << get_age() << endl;                                               // چاپ سن
     cout << "file_number: " << get_file_number() << endl;                               // چاپ شماره پرونده
     cout << "==================" << endl;
}