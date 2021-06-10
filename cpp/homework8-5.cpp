#include <bits/stdc++.h>
using namespace std;

class Point
{
public:
    Point()
    {
        x = 0.0;
        y = 0.0;
    };
    Point(double x, double y) : x(x), y(y){};
    double x;
    double y;
    Point operator+(Point &r)
    {
        // cout << x+ r.x << ',' <<y+ r.y << endl;
        return Point(x + r.x, y + r.y);
    };
    Point operator/(double p)
    {
        return Point(x / p, y / p);
    };
};

template <class T>
T avg_array(T *array, double count)
{
    T sum = array[0];
    for (int i = 1; i < count; i++)
    {
        sum = sum + array[i];
    }
    return sum / count;
};

int main()
{
    double doubleArray[4] = {1.0, 2.0, 3.0, 4.0};
    Point pointArray[4] = {Point(), Point(1.0, 1.0), Point(2.0, 1.0), Point(3.0, 1.0)};
    cout << avg_array(doubleArray, 4.0) << endl;
    cout << avg_array(pointArray, 4.0).x << "," << avg_array(pointArray, 4.0).y << endl;
    return 0;
}