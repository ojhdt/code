#include "student.h"
#include <bits/stdc++.h>
using namespace std;

student::student() : number(0)
{
    weight = 0;
    count++;
}

student::student(int iweight, int inumber) : number(inumber)
{
    weight = iweight;
    count++;
}

student::student(student &b) : number(b.number)
{
    weight = b.weight;
    count++;
}

void student::show() const
{
    cout << "number:" << number << ",weight:" << weight << endl;
}

bool compare(student &a, student &b)
{
    if (a.weight > b.weight)
    {
        return true;
    }
    else
    {
        return false;
    }
};