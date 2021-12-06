#include <iostream>
#include "forceps.h"

using namespace std;

forceps::forceps(string name, int price, int size) : tool(name, price, size)

}

void forceps::print() const
{
     cout << "------------" << endl;
     cout << "forceps:" << endl;
     cout << "name: " << get_name() << endl;
     cout << "price: " << get_price() << endl;
     cout << "------------" << endl;
}