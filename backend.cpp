#include "backend.h"

int backend::add_surgeon(QString name, QString lastName, QString age, QString code)
{
    string Sname = name.toStdString();
    string SlastName = lastName.toStdString();
    string Sage = age.toStdString();
    string Scode = code.toStdString();

    if(Sname.empty())
    {
        return 1;
    }
    if(SlastName.empty())
    {
        return 2;
    }
    if(Sage.empty())
    {
        return 3;
    }
    else{
        for(auto number : Sage)
        {
            if(!isdigit(number))
            {
                return 3;
            }
        }
    }
    if(Scode.empty())
    {
        return 4;
    }
    else{
        for(auto number : Scode)
        {
            if(!isdigit(number))
            {
                return 4;
            }
        }
    }

    Surgeon = new surgeon(Sname, SlastName, age.toInt(), code.toLong());

    return 5;
}
