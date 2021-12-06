#include <iostream>
#include "tool.h"

using namespace std;

tool::tool(string name1, int price1, int size1)             // کانستراکتور
{
     set_name(name1);
     set_price(price1);
     set_size(size1);
     
}

void tool::set_name(string name2)  
{                  
     name = name2;
}

void tool::set_price(int price2)  
{                  
     price = price2;
}

void tool::set_size(int size1)
{
     switch(size1)
     {
     case 1:
     {
          tool_size = size::little;
          break;
     }
     case 2:
     {
          tool_size = size::medium;
          break;
     }
     case 3:
     {
          tool_size = size::big;
          break;
     }
     default:
          cout << "your command is not correct" << endl;
          break;
     }
}


string tool::get_name() const
{
     return name;
}

int tool::get_price() const
{
     return price;
}

tool::size tool::get_size() const
{
     return tool_size;
}

bool tool::operator>(const tool & t)
{
     return (this->get_price()) > (t.get_price());
}
bool tool::operator<(const tool & t)
{
     return (this->get_price()) < (t.get_price());
}