#include <iostream>
#ifndef forceps_h
#define forceps_h

using namespace std;

enum size{little, medium, big};                //  برای استفاده سایز ابزار جراحی(کوچک، متوسط، بزرگ)

class forceps                                                  // کلاس پنس
{
     public:
          forceps(string name, forceps_size(medium));                                           // کانستراکتور
          void set_name(string);                               // تابع گرفتن اسم پنس
          string get_name();

     private:
          string name;                              // اسم چاقو
          const size forceps_size;                  // سایز چاقو
          
};

#endif