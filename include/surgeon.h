#ifndef surgeon_h
#define surgeon_h
#include <iostream>
using namespace std;

class surgeon                                                                                      // کلاس جراح
{
public:
     surgeon(string name1, string lastname1, int age1, long int Personnel_code1);              // کانستراکتور
     void set_name(string name1);                                                              // تابع ست اسم جراح
     void set_lastname(string lastname1);                                                     // تابع ست فامیلی جراح
     void set_age(int age1);                                                                 // تابع ست سن جراح
     void set_Personnel_code(long int personal_code1);                                       // تابع ست کد پرسنلی
     string get_name() const;                                                                // تایع گت اسم جراح
     string get_lastname() const;                                                            // تابع گت فامیلی جراح
     int get_age() const;                                                                    // تابع گت سن جراح
     long int get_Personnel_code() const;                                                    // تابع گت کد پرسنلی
     void print() const;                                                                     // تابع پرینت
   
private:
     string name;                                                                           //  اسم جراح
     string lastname;                                                                       // فامیلی جراح
     int age;                                                                              // سن جراح
     long int Personnel_code;                                                              // کد پرسنلی
};

#endif