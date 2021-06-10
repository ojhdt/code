#include"Line.h"
#include<bits/stdc++.h>

using namespace std;

Line::Line(Point &p1, Point &p2){
    a = p1;
    b = p2;
    vector[0] = abs(a.getX() - b.getX());
    vector[1] = abs(a.getY() - b.getY());
    length = sqrt(vector[0]^2 + vector[1]^2);
}

int Line::getVectorX(){
    return vector[0];
};

int Line::getVectorY(){
    return vector[1];
};

double Line::getLength(){
    return length;
}