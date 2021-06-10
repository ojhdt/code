#include "Point.h"
#include<bits/stdc++.h>
using namespace std;
Point::Point(){
    x = 0;
    y = 0;
};

Point::Point(int ix, int iy){
    x = ix;
    y = iy;
};

int Point::getX(){
    return x;
}

int Point::getY(){
    return y;
}