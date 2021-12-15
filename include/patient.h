#ifndef patient_h
#define patient_h
#include <iostream>
using namespace std;

class patient                                                                               // کلاس بیمار
{
     public:
          patient(string name1, string lastname1, int age1, long int file_number1);            // کانستراکتور
          void set_name(string name1);                                                         // تابع ست اسم بیمار
          void set_lastname(string lastname1);                                                 // تابع ست فامیلی بیمار
          void set_age(int age1);                                                             // تابع ست سن بیمار
          void set_file_number(long int filenumber1);                                         // تابع گرفتن شماره پرونده
          string get_name() const;                                                            // تابع گت اسم بیمار
          string get_lastname() const;                                                        // تابع گت فامیلی بیمار
          int get_age() const;                                                                // تابع گت سن بیمار
          long int get_file_number() const;                                                   // تابع گت شماره پرونده بیمار
          void print() const;                                                                 // تابع پرینت
          
     private:
          string name;                                                               // اسم بیمار
          string lastname;                                                           //  فامیلی بیمار
          int age;                                                                   // سن بیمار
          long int file_number;                                                      // شماره پرونده
};
#endif
