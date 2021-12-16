#include <iostream>
#include <stdexcept>
#include <vector>
#include "surgeon.h"
#include "patient.h"
#include "tool.h"
#include "knife.h"
#include "forceps.h"
using namespace std;

void add_surgeons(vector <surgeon>&surgeons)                                       // تابع اضافه کردن اطلاعات جراح
{
     surgeon s("ali", "kalami", 50, 673458);
     surgeons.push_back(s);
}

void add_patients(vector <patient>&patients)                                       // تابع اضافه کردن اطلاعات بیمار
{
    patient p("amin", "farahani", 34, 006432);
    patients.push_back(p);
}

void add_tools(vector <tool*>&tools)                                              // تابع اضافه کردن ابزار
{
     cout << "pleas enter your tool , if you want choose knife enter 1 and if choose forceps enter 2" << endl;
     int choice;
     cin >> choice;

     switch(choice)
     {
          case 1:
          {
               tool * k = new knife("scalpel", 200, 1, 2);
               tools.push_back(k);

               break;
          }
          case 2:
          {
               tool * f = new forceps("hemostat", 100, 3);
               tools.push_back(f);
               break;
          }
          default:
          {
               throw invalid_argument("your choice is not correct!!");
               break;
          }
     }
}

int main()
{
     vector <surgeon> surgeons;                                                         // وکتور جراح
     vector <patient> patients;                                                         // وکتور بیمار
     vector <tool*> tools;                                                              // وکتور ابزار

     add_surgeons(surgeons);
     add_patients(patients);

     try
     {
          add_tools(tools);
     }
     catch(const exception &e)
     {
          cout << e.what() << endl;
     }

     return 0;
}