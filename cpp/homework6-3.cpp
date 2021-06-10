#include <bits/stdc++.h>
using namespace std;

class Point
{
public:
    Point(int x, int y) : x(x), y(y){};
    Point operator+(Point &pon)
    {
        return Point(this->getX() + pon.getX(), this->getY() + pon.getY());
    };
    Point operator-(Point &pon)
    {
        return Point(this->getX() - pon.getX(), this->getY() - pon.getY());
    };
    int getX()
    {
        return x;
    };
    int getY()
    {
        return y;
    };

private:
    int x;
    int y;
};

int main(){
    Point a(10,20);
    Point b(30,40);
    cout << (a+b).getX() << "," << (a+b).getY() << endl; 
    cout << (a-b).getX() << "," << (a-b).getY() << endl; 
    return 0;
}