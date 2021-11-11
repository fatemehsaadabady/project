#include <iostream>
#ifndef knife_h
#define knife_h

using namespace std;

enum size{little, medium, big};                //  برای استفاده سایز ابزار جراحی(کوچک، متوسط، بزرگ)
enum sharpness{sharp, normal, blunt};           // برای مشخص کردن میزان تیزی چاقو(تیز، معمولی، کند)

class knife                                          // کلاس چاقو
{
     public:
          knife(string name, knife_size(little), knife_sharpness(sharp));                                      // کانستراکتور
          void set_name(string);                               // تابع گرفتن اسم چاقو
          string get_name();

     private:
          string name;                                 // اسم چاقو
          const size knife_size;                        // سایز چاقو
          const sharpness knife_sharpness;               // میزان تیزی چاقو

};
#endif
