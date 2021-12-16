#include <iostream>
#include <stdexcept>
#include "knife.h"
using namespace std;

knife::knife(string name1, int price1, int size1, int sharpness1) : tool(name1, price1, size1)         // کانستراکتور
{
     set_sharpness(sharpness1);
}

void knife::set_sharpness(int sharpness1)                                                   // تابع ست میزان تیزی
{
     switch (sharpness1)
     {
     case 1:
          knife_sharpness = sharpness::sharp;
          break;
     case 2:
          knife_sharpness = sharpness::normal;
          break;
     case 3:
          knife_sharpness = sharpness::blunt;
          break;

     default:
          cout << "your command is not correct!!" << endl;
          break;
     }
}

knife::sharpness knife::get_sharpness() const                                            // تابع گت میزان تیزی
{
     return knife_sharpness;
}

void knife::print() const                                                                // تابع پرینت
{
     cout << "==================" << endl;
     cout << "knife" << endl;
     cout << "name: " << get_name() << endl;                                             // چاپ اسم
     switch (get_size())                                                                  // چاپ سایز
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
     switch (get_sharpness())                                                            // چاپ میزان تیزی
     {
     case sharpness::sharp:
          cout << "sharpness: sharp" << endl;
          break;
     case sharpness::normal:
          cout << "sharpness: normal" << endl;
          break;
     case sharpness::blunt:
          cout << "sharpness: blunt" << endl;
          break;
     }
     cout << "price: " << get_price() << endl;                                           // چاپ قیمت
     cout << "==================" << endl;
}