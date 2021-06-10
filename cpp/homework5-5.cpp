#include <bits/stdc++.h>
using namespace std;

class Point
{
public:
    Point() : x(0), y(0){};
    Point(int ix, int iy) : x(ix), y(iy){};
    void setXY(int sx, int sy)
    {
        x = sx;
        y = sy;
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
    friend double getLength(Point &p1, Point &p2);

private:
    int x;
    int y;
};

double getLength(Point &p1, Point &p2)
{
    return sqrt(pow(p1.getX() - p2.getX(), 2) + pow(p1.getY() - p2.getY(), 2));
};

int main()
{
    vector<Point> arr(5);
    for (int i = 0; i < 5; i++)
    {
        int x, y;
        cin >> x >> y;
        arr[i].setXY(x, y);
    }

    double sum = 0;
    double minLength = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            sum += getLength(arr[i], arr[j]);
        }
    };

    cout << sum << endl;

    // for(int i = 0; i < 5; i++){
    //     double min = 99999;
    //     for(int j = 0; j < 5; j++){
    //         if(i == j){
    //             continue;
    //         }else{
    //             if(getLength(arr[i],arr[j]) < min){
    //                 min = getLength(arr[i],arr[j]);
    //             }
    //         }
    //     }
    //     minLength += min;
    // }
    double resMin = 9999;
    for (int i = 0; i < 5; i++)
    {
        vector<Point> cparr = arr;
        cparr.erase(cparr.begin() + i);
        double min1 = 9999;
        double min2 = 9999;
        for (int j = 0; j < cparr.size() - 1; j++)
        {
            for (int k = j; k < cparr.size(); k++)
            {
                vector<Point> temparr = cparr;
                temparr.erase(temparr.begin() + j);
                temparr.erase(temparr.begin() + k);
                double res = getLength(cparr[j], cparr[k]) + getLength(temparr[0], temparr[1]);
                if (res < min1)
                {
                    min1 = res;
                }
            }
        }
        for (int j = 0; j < cparr.size(); j++)
        {
            double res = getLength(cparr[i], cparr[j]);
            if (res < min2)
            {
                min2 = res;
            }
        }
        if (min1 + min2 < resMin){
            resMin = min1 + min2;
        } 
    }
    cout << resMin << endl;
    return 0;
}