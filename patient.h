#include <iostream>
#ifndef patient_h
#define patient_h

using namespace std;

class patient                                                        // کلاس بیمار
{
     public:
          patient(string name, string lastname, int age, long int file_number);              // کانستراکتور
          void set_name(string);                               // تابع گرفتن اسم بیمار
          void set_lastname(string);                            // تابع گرفتن فامیلی بیمار
          void set_age(int);                                     // تابع گرفتن سن بیمار
          void set_Personnel_code(long int);       // تابع گرفتن شماره پرونده 
          string get_name()const;
          string get_lastname()const;
          int get_age();
          long int get_file_number;

     private:
          string name;                // اسم بیمار
          string lastname;             //  فامیلی بیمار 
          int age;                      // سن بیمار
          long int file_number;         // شماره پرونده

};
#endif
