#include <iostream>
#include "include/surgeon.h"
using namespace std;

surgeon::surgeon(string name, string lastname, int age, long int Personnel_code)                   // کانستراکتور
{
     set_name(name);
     set_lastname(lastname);
     set_age(age);
     set_Personnel_code(Personnel_code);

}

void surgeon::set_name(string name1)                                           // تابع ست اسم جراح
{
     name = name1;
}

void surgeon::set_lastname(string lastname1)                                  // تابع ست فامیلی جراح
{
     lastname = lastname1;
}

void surgeon::set_age(int age1)                                              // تابع ست سن جراح
{
     age = age1;
}

void surgeon::set_Personnel_code(long int personal_code1)                    // تابع ست کدپرسنلی جراح
{
     Personnel_code = personal_code1;
}

string surgeon::get_name()const                                              // تابع گت اسم
{
     return name;
}

string surgeon::get_lastname()const                                          // تابع گت فامیلی
{
     return lastname;
}

int surgeon::get_age() const                                                  // تابع گت سن
{
     return age;
}

long int surgeon::get_Personnel_code() const                                  // تابع گت کدپرسنلی
{
     return Personnel_code;
}

void surgeon::print() const                                                                // تابع پرینت
{
     cout << "==================" << endl;
     cout << "surgeon" << endl;
     cout << "name: " << get_name() << endl;                                             // چاپ اسم
     cout << "lastname: " << get_lastname() << endl;                                     // چاپ فامیلی
     cout << "age: " << get_age() << endl;                                               // چاپ سن
     cout << "Personnel_code: " << get_Personnel_code() << endl;                         // چاپ کد پرسنلی
     cout << "==================" << endl;
}
