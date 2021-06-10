#include <bits/stdc++.h>
using namespace std;

class Point
{
public:
    Point() : x(0), y(0){};
    Point(int x, int y) : x(x), y(y){};
    int getX(){
        return x;
    };
    int getY(){
        return y;
    };
    friend ostream & operator<<(ostream &out,Point &p);
private:
    int x, y;
};

ostream & operator<<(ostream &out,Point &p){
    out <<"(" << p.getX() << "," << p.getY() << ")";
};

int main(){
    Point p(3,5);
    cout << p << endl;
    return 0;
}