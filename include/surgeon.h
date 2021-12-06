#include <iostream>
#ifndef surgeon_h
#define surgeon_h

using namespace std;

class surgeon                              // کلاس جراح 
{
     public:
          surgeon(string name, string lastname, int age, long int Personnel_code);               // کانستراکتور
          void set_name(string);                     // تابع گرفتن اسم جراح
          void set_lastname(string);               // تابع گرفتن فامیلی جراح
          void set_age(int);                      // تابع گرفتن سن جراح
          void set_Personnel_code(long int);       // تابع گرفتن کد پرسنلی
          string get_name()const;
          string get_lastname()const;
          bool get_age();
          long int get_Personnel_code;

     private:
     
          string name;                   //  اسم جراح
          string lastname;               // فامیلی جراح
          int age;                       // سن جراح
          long int Personnel_code;       // کد پرسنلی

};

#endif