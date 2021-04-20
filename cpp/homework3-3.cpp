#include <bits/stdc++.h>
using namespace std;

class Car;
class Boat
{
public:
    Boat(int iweight);
    friend int getToTalWeight(Boat &a, Car &b);

private:
    int weight;
};

class Car
{
public:
    Car(int iweight);
    friend int getToTalWeight(Boat &a, Car &b);

private:
    int weight;
};

int getToTalWeight(Boat &a, Car &b)
{
    return a.weight + b.weight;
}

Boat::Boat(int iweight){
    weight = iweight;
}

Car::Car(int iweight){
    weight = iweight;
}

int main(){
    Boat boat(20);
    Car car(30);
    cout << getToTalWeight(boat, car) << endl;
    return 0;
}