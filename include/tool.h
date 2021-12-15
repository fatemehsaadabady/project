#ifndef tool_h
#define tool_h
#include <iostream>
using namespace std;

class tool                                                                    // کلاس ابزار
{
     public: 
          enum size                                                       //  برای استفاده سایز ابزار جراحی(کوچک، متوسط، بزرگ)
          {
               little = 1, medium, big
          };
          
          tool(string name1, int price1, int size1);                     //کانستراکتور
          void set_name(string name1);                                   // تابع ست اسم ابزار
          void set_price(int price1);                                    // تابع ست قیمت ابزار
          void set_size(int size1);                                      // تابع ست سایز ابزار
          virtual void print() const = 0;                                // تابع پرینت
          int get_price() const;                                         // تابع گت قیمت
          string get_name() const;                                       // تابع گت اسم 
          enum size get_size() const;                                    // تابع گت سایز
          bool operator>(const tool &t) const;                           // مقایسه > بودن قیمت ابزارها
          bool operator<(const tool &t) const;                           // مقایسه < بودن قیمت ابزارها
          bool operator==(const tool &t) const;                          // مقایسه مساوی بودن قیمت ابزارها

     private:
          string name;                                                   // متغیر اسم
          int price;                                                     // قیمت
          size tool_size;                                                // سایز
};
#endif