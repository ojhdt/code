#include <bits/stdc++.h>
using namespace std;

class Time
{
public:
    Time(int thour, int tminute, int tsecond);
    void showTime();

private:
    int hour;
    int minute;
    int second;
};

Time::Time(int thour, int tminute, int tsecond)
{
    hour = thour;
    minute = tminute;
    second = tsecond;
    cout << "constructing time" << endl;
};

void Time::showTime()
{
    cout << hour << ":" << minute << ":" << second << endl;
};

class Parent
{
public:
    void show();
    Time time = Time(10, 50, 50);
private:
    int number = 1;
};

int main()
{
    return 0;
};