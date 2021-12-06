#include <iostream>
#ifndef tool_h
#define tool_h

using namespace std;

class tool                                       // کلاس ابزار                                               
{
     public:
          tool(string name, int price, int size1);  
          enum size{little, medium, big};                //  برای استفاده سایز ابزار جراحی(کوچک، متوسط، بزرگ)                              
          void set_name(string);            
          void set_price(int);
          void set_size(int);
          virtual void print() const = 0;
          int get_price() const;
          string get_name() const;
          enum size get_size() const;
          bool operator>(const tool & t);
          bool operator<(const tool & t);

     private:
          string name;                             // متغیر اسم
          int price;                              // قیمت           
          size tool_size;                 // سایز            
          
};

#endif