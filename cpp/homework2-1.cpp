#include <bits/stdc++.h>
using namespace std;

class Stu
{
public:
    void setStudent(long long int inumber, string iname, int iage);
    void showStudent();
private:
    long long int number;
    string name;
    int age;
};

void Stu::setStudent(long long int inumber, string iname, int iage){
    number = inumber;
    name = iname;
    age = iage;
}

void Stu::showStudent(){
    cout << "Number:" << number << endl;
    cout << "Name:" << name << endl;
    cout << "Age:" << age << endl;
}

int main(){
    Stu student;
    student.setStudent(20202000000,"张三",19);
    student.showStudent();
    return 0;
}