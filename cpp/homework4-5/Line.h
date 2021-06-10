#include "Point.h"
class Line
{
public:
    Line(Point &p1, Point &p2);
    int getVectorX();
    int getVectorY();
    double getLength();
    float angle(Line &line1, Line &line2);
private:
    Point a;
    Point b;
    int vector[2];
    double length;
};