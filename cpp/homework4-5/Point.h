#ifdef HEAD_H
#define HEAD_H
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

#endif