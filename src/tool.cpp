#include <iostream>
#include <stdexcept>
#include "tool.h"
using namespace std;

tool::tool(string name1, int price1, int size1)                             // کانستراکتور
{
     set_name(name1);
     set_price(price1);
     set_size(size1);
}

void tool::set_name(string name2)                                         // تابع ست اسم
{
     name = name2;
}

void tool::set_price(int price2)                                          // تابع ست قیمت
{
     price = price2;
}

void tool::set_size(int size1)                                            // تابع ست سایز
{
     switch (size1)
     {
     case 1:
     {
          tool_size = size::little;                                    // 1 == سایز کوچک
          break;
     }
     case 2:
     {
          tool_size = size::medium;                                    // 2 == سایز متوسط
          break;
     }
     case 3:
     {
          tool_size = size::big;                                       // 3 == سایز بزرگ
          break;
     }
     default:
          throw invalid_argument("your command is not correct!!");
          break;
     }
}

string tool::get_name() const                                          // تابع گت اسم
{
     return name;
}

int tool::get_price() const                                            // تابع گت قیمت
{
     return price;
}

tool::size tool::get_size() const                                      // تابع گت سایز
{
     return tool_size;
}

bool tool::operator>(const tool &t) const                            // تابع های مقایسه قیمت ابزار
{
     return (this->get_price()) > (t.get_price());
}

bool tool::operator<(const tool &t) const
{
     return (this->get_price()) < (t.get_price());
}

bool tool::operator==(const tool &t) const
{
     return (this->get_price()) == (t.get_price());
}