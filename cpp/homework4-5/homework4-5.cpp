#include <bits/stdc++.h>
#include "Line.h"
#include "Point.h"
#include <math.h>
using namespace std;

float angle(Line &line1, Line &line2)
{
    double cos = line1.getVectorX() * line2.getVectorX() / (line1.getLength() * line2.getLength());
    cout << "cos" << cos << endl;
}

int main()
{
    Point pa;
    Point pb(2, 4);
    Point pc(1, 1);
    Line l1(pa, pb);
    Line l2(pa, pc);
    angle(l1, l2);
}
