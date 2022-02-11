#include <iostream>
#include "include/forceps.h"
using namespace std;

forceps::forceps(string name1, int price1, int size1) : tool(name1, price1, size1)             // کانستراکتور 
{
     
}

void forceps::print() const                                                                     // تابع پرینت
{
     cout << "==================" << endl;
     cout << "forceps" << endl;
     cout << "name: " << get_name() << endl;                                                    // چاپ اسم
     switch (get_size())                                                                        // چاپ سایز
     {
     case size::little: 
          cout << "size: little" << endl;
          break;
     case size::medium:
          cout << "size: medium" << endl;
          break;
     case size::big:
          cout << "size: big" << endl;
          break;
     }
     cout << "price: " << get_price() << endl;                                                 // چاپ قیمت
     cout << "==================" << endl;
}
