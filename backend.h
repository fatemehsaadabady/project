#ifndef BACKEND_H
#define BACKEND_H
#include<QObject>
#include<iostream>
#include "include/surgeon.h"
using namespace std;


class backend : public QObject
{
    Q_OBJECT
public:
    public slots:
    int add_surgeon(QString name, QString lastName, QString age, QString code);
private:
    surgeon * Surgeon;
};

#endif // BACKEND_H
