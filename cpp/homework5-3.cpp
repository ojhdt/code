#include <bits/stdc++.h>
using namespace std;

class vehicle
{
private:
    int whells;
    int weight;

public:
    vehicle()
    {
        cout << "Default vehicle" << endl;
        whells = 4;
        weight = 100;
    };
    vehicle(int iwhells, int iweight) : whells(iwhells), weight(iweight)
    {
        cout << "Custom vehivle" << endl;
    };
    int getWhells()
    {
        return whells;
    }
    int getWeight()
    {
        return weight;
    }
};

class car : public vehicle
{
public:
    car() : vehicle(4, 300), passenger_load(0)
    {
        cout << "Default Car" << endl;
    }
    car(int iLoad, int iwhells, int iweight) : vehicle(iwhells, iweight),passenger_load(iLoad)
    {
        cout << "Custom car" << endl;
    }
    int getPassenger_load()
    {
        return passenger_load;
    }

private:
    int passenger_load;
};

class truck : public vehicle
{
public:
    truck(int iLoad, int iPayload, int iwhells, int iweight) : vehicle(iwhells, iweight), payload(iPayload), passenger_load(iLoad)
    {
        cout << "Custom truck" << endl;
    }
    int getPayLoad(){
        return payload;
    }

private:
    int payload;
    int passenger_load;
};

int main()
{
    vehicle v(4, 5);
    car ddd(600, 4, 1000);
    truck ttt(600, 800, 4, 2000);
    cout << ddd.getWeight() << "," << ddd.getPassenger_load() << endl;
    cout << ttt.getPayLoad();
    return 0;
}