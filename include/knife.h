#ifndef knife_h
#define knife_h
#include <iostream>
#include "tool.h"
using namespace std;

class knife : public tool                                                      // کلاس چاقو که از کلاس ابزار ارث می برد
{
     public:
          enum sharpness{sharp = 1, normal, blunt};                             // برای مشخص کردن میزان تیزی چاقو(تیز، معمولی، کند)
          knife(string name1, int price1, int size1, int sharpness1);                    // کانستراکتور
          void set_sharpness(int sharpness1);                                           // تابع ست میزان تیزی
          sharpness get_sharpness() const;                                              // تابع گت میزان تیزی 
          virtual void print() const override;                                          // تابع پرینت

     private:
          sharpness knife_sharpness;                                                    // میزان تیزی چاقو
};
#endif
