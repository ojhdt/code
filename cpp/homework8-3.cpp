#include <bits/stdc++.h>
using namespace std;

class Mammal
{
public:
    virtual void speak()
    {
        cout << "Mammal speak" << endl;
    };
};

class Dog : public Mammal
{
public:
    void speak()
    {
        cout << "dog speak" << endl;
    }
};

int main()
{
    Dog dog;
    dog.speak();
}