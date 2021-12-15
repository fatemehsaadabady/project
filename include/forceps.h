#ifndef forceps_h
#define forceps_h
#include <iostream>
#include "tool.h"
using namespace std;

class forceps : public tool                                                              // کلاس پنس که از کلاس ابزار ارث می برد
{
     public:
          forceps(string name1, int price1, int size1);                                 // کانستراکتور
          virtual void print() const override;                                          // تابع پرینت
     
     private:
     
};
#endif