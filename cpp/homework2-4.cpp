#include <bits/stdc++.h>
using namespace std;

class Point
{
public:
    Point();
    Point(float xx, float yy);
    float calculate_distance(Point p1);
private:
    float x;
    float y;
};

Point::Point(){
    x = 0;
    y = 0;
};

Point::Point(float xx, float yy){
    x = xx;
    y = yy;
};

float Point::calculate_distance(Point p1){
    return sqrt(pow((p1.x - x),2) + pow((p1.y - y),2));
};

int main(){
    float p1x, p1y, p2x, p2y;
    cin >> p1x >> p1y >> p2x >> p2y;
    Point a(p1x, p1y);
    Point b(p2x, p2y);
    cout << a.calculate_distance(b) << endl;
    return 0;
}