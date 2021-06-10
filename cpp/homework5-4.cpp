#include <bits/stdc++.h>
#include <math.h>
using namespace std;

class Circle
{
public:
    Circle() : r(0){};
    Circle(double ir) : r(ir){};
    double getR()
    {
        return r;
    }

private:
    double r;
};

class Ball : public Circle
{
public:
    Ball()
    {
        area = 3.14 * pow(getR(), 2);
        volume = (4 / 3) * 3.14 * pow(getR(), 3);
    };
    Ball(double ir) : Circle(ir)
    {
        area = 3.14 * pow(getR(), 2);
        volume = (4 / 3) * 3.14 * pow(getR(), 3);
    };
    double getArea()
    {
        return area;
    };
    double getVolume()
    {
        return volume;
    };

private:
    double area;
    double volume;
};

class Cylinder : public Circle
{
    public:
    Cylinder()
    {
        h = 0;
        area = 2 * 3.14 * pow(getR(), 2) + 3.14 * getR() * 2 * getH();
        volume = getH() * 3.14 * pow(getR(), 2);
    };
    Cylinder(double ir, double ih) : Circle(ir)
    {
        h = ih;
        area = 2 * 3.14 * pow(getR(), 2) + 3.14 * getR() * 2 * getH();
        volume = getH() * 3.14 * pow(getR(), 2);
    };
    double getH()
    {
        return h;
    };
    double getArea()
    {
        return area;
    };
    double getVolume()
    {
        return volume;
    };

private:
    double h;
    double area;
    double volume;
};

class Cone : public Circle
{
    public:
    Cone()
    {
        h = 0;
        area = 3.14 * pow(getR(), 2) + 3.14 * getR() * sqrt(pow(getR(), 2) + pow(getH(), 2));
        volume = getH() * 3.14 * pow(getR(), 2) * 0.33;
    };
    Cone(double ir, double ih) : Circle(ir)
    {
        h = ih;
        area = 3.14 * pow(getR(), 2) + 3.14 * getR() * sqrt(pow(getR(), 2) + pow(getH(), 2));
        volume = getH() * 3.14 * pow(getR(), 2) * 0.33;
    };
    double getH()
    {
        return h;
    };
    double getArea()
    {
        return area;
    };
    double getVolume()
    {
        return volume;
    };

private:
    double h;
    double area;
    double volume;
};

int main()
{
    Ball b(4);
    Cylinder cy(5,10);
    Cone c(5,10);
    cout << b.getArea() << "," << b.getVolume() << endl;
    cout <<  cy.getArea() << "," << cy.getVolume() << endl;
    cout << c.getArea() << "," << c.getVolume() << endl;
    return 0;
}