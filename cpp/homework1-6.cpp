#include <bits/stdc++.h>
using namespace std;
class Square
{
public:
    void setLength(int x);
    void setWidth(int x);
    int showLength();
    int showWidth();
    int area();

private:
    int length, width;
}; 

void Square::setLength(int x){
    length = x;
}

void Square::setWidth(int x){
    width = x;
}

int Square::showLength(){
    cout << length << endl;
    return length;
}

int Square::showWidth(){
    cout << width << endl;
    return width;
}

int Square::area(){
    cout << length * width << endl;
    return length * width;
}

int main()
{
    Square square;
    int length, width;
    cin >> length >> width;
    square.setLength(length);
    square.setWidth(width);
    square.showLength();
    square.showWidth();
    square.area();
}