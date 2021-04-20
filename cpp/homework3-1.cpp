#include <bits/stdc++.h>
using namespace std;

class Cat
{
public:
    Cat();
    Cat(Cat &b);
    static void getNumOfCats();

private:
    static int numOfCats;
};

Cat::Cat(){
    numOfCats++;
};

Cat::Cat(Cat &b){
    numOfCats++;
};

void Cat::getNumOfCats(){
    cout << numOfCats;
};

int Cat::numOfCats = 0;

int main(){
    Cat a;
    Cat b = a;
    Cat c(a);
    Cat::getNumOfCats();
    return 0;
}