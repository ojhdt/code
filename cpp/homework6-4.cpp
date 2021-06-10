#include <bits/stdc++.h>
using namespace std;
class Point
{
public:
    Point() : x(0), y(0){};
    Point(int x, int y) : x(x), y(y){};
    int getX() const
    {
        return x;
    }
    int getY() const
    {
        return y;
    }

private:
    int x, y;
};

class ArraysOfPoints
{
public:
    void setElement(int index, Point &p)
    {
        points[index] = p;
    };
    Point operator[](int index){
        return points[index];
    };
    void operator=(ArraysOfPoints &arr)
    {
        Point *newpoints = new Point[arr.getSize()];
        for (int i = 0; i < arr.getSize(); i++)
        {
            newpoints[i] = arr.element(i);
        }
        points = newpoints;
        size = arr.getSize();
    };
    ArraysOfPoints(int size) : size(size)
    {
        points = new Point[size];
    };
    Point element(int index)
    {
        return points[index];
    };
    int getSize()
    {
        return size;
    };

private:
    Point *points;
    int size;
};

int main()
{
    ArraysOfPoints a(10);
    ArraysOfPoints b(20);
    Point c(5,10);
    b.setElement(17,c);
    a = b;
    cout << a.getSize() << endl;
    cout << b.element(17).getX() <<endl;
    cout << a.element(17).getX() << endl;
    return 0;
};