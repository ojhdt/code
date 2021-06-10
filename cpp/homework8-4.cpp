#include <bits/stdc++.h>
using namespace std;

class Shape
{
public:
    void setR(double ir)
    {
        r = ir;
    };
    void setD(double ix, double iy)
    {
        x = ix;
        y = iy;
    };
    double r = 0;
    double x = 0;
    double y = 0;
};

class Rectangle : public Shape
{
public:
    double getArea()
    {
        return x * y;
    };
    double getPerim()
    {
        return (x + y) * 2;
    }
};

class Circle : public Shape
{
public:
    double getArea()
    {
        return 3.14 * r * r;
    };
    double getPerim()
    {
        return 2 * 3.14 * r;
    }
};

int main(){
    Rectangle rec;
    rec.setD(2,3);
    cout << rec.getArea() << endl;
    Circle cir;
    cir.setR(3);
    cout << cir.getPerim() << endl;
    return 0;
}