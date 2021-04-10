#include <bits/stdc++.h>
using namespace std;

class Point
{
public:
    Point();
    Point(int ix, int iy);
    int getX();
    int getY();

private:
    int x;
    int y;
};

class CRect
{
public:
    CRect();
    CRect(Point a, Point b);
    int RectHeight();
    int RectWidth();
    int getArea();

private:
    Point topLeft;
    Point bottomRight;
};

Point::Point()
{
    x = 0;
    y = 0;
};

Point::Point(int ix, int iy)
{
    x = ix;
    y = iy;
};

int Point::getX()
{
    return x;
};
int Point::getY()
{
    return y;
};

CRect::CRect()
{
    topLeft = Point(0, 0);
    bottomRight = Point(0, 0);
};

CRect::CRect(Point a, Point b)
{
    topLeft = a;
    bottomRight = b;
};

int CRect::RectHeight(){
    return topLeft.getY() > bottomRight.getY() ? topLeft.getY() - bottomRight.getY() : bottomRight.getY() - topLeft.getY();
};
int CRect::RectWidth(){
    return topLeft.getX() > bottomRight.getX() ? topLeft.getX() - bottomRight.getX() : bottomRight.getX() - topLeft.getX();
};
int CRect::getArea(){
    return this->RectHeight() * this->RectWidth();
};

int main(void)
{
    CRect rect(Point(1, 2), Point(3, 4));
    cout << rect.RectHeight() << endl;
    cout << rect.RectWidth() << endl;
    cout << rect.getArea() << endl;
    return 0;
}