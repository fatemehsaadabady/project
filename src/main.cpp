#include <iostream>
#include <stdexcept>
#include <vector>
#include "surgeon.h"
#include "patient.h"
#include "tool.h"
#include "knife.h"
#include "forceps.h"
using namespace std;

void add_surgeons(vector <surgeon>&surgeons)
{
     
}

void add_patients(vector <patient>&patients)
{
    
}

void add_tools(vector <tool*>&tools)
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
     vector <surgeon> surgeons;
     vector <patient> patients;
     vector <tool*> tools;

     add_surgeons(surgeons);
     add_patients(patients);
     add_tools(tools);

     return 0;
}