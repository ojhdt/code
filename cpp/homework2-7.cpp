#include <bits/stdc++.h>
using namespace std;

class Cdate
{
public:
    Cdate();
    Cdate(int y, int m, int d);
    int getYear();
    int getMonth();
    int getDay();

private:
    int year;
    int month;
    int day;
};

Cdate::Cdate()
{
    year = 0;
    month = 0;
    day = 0;
};

Cdate::Cdate(int y, int m, int d)
{
    year = y;
    month = m;
    day = d;
};

int Cdate::getYear()
{
    return year;
};
int Cdate::getMonth()
{
    return month;
};
int Cdate::getDay()
{
    return day;
};

class Employee
{
public:
    Employee();
    Employee(string iname, string istreet, string icity, string iprovince, int ipostalcode, Cdate idate);
    void setData(string iname, string istreet, string icity, string iprovince, int ipostalcode, Cdate idate);
    void showData();

private:
    string name;
    string street;
    string city;
    string province;
    int postalcode;
    Cdate date;
};

Employee::Employee() : date(){};

Employee::Employee(string iname, string istreet, string icity, string iprovince, int ipostalcode, Cdate idate)
{
    name = iname;
    street = istreet;
    city = icity;
    province = iprovince;
    postalcode = ipostalcode;
    date = idate;
};

void Employee::setData(string iname, string istreet, string icity, string iprovince, int ipostalcode, Cdate idate)
{
    name = iname;
    street = istreet;
    city = icity;
    province = iprovince;
    postalcode = ipostalcode;
    date = idate;
};

void Employee::showData()
{
    cout << "Name:" << name << endl;
    cout << "Street:" << street << endl;
    cout << "City:" << city << endl;
    cout << "Province:" << province << endl;
    cout << "Postalcode:" << postalcode << endl;
    cout << "Date:" << date.getYear() << "/" << date.getMonth() << "/" << date.getDay() << endl;
};

int main(void)
{
    Employee a;
    a.setData("ZhangSan", "Street1", "City1", "Province1", 000000, Cdate(1989, 6, 4));
    Employee b("LiSi", "Street2", "City2", "Province2", 000001, Cdate(1990, 6, 4));
    a.showData();
    b.showData();
    return 0;
}