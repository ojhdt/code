#include <bits/stdc++.h>
using namespace std;

class People
{
public:
    People(string name, string sex) : name(name), sex(sex){
        cout << "Constructor" << endl;
    };
    string name;
    string sex;
    void showMessage()
    {
        cout << this->name << "," << this->sex << endl;
    };

private:
};

class Student : virtual public People
{
public:
    Student(string name, string sex, int num) : People(name, sex), num(num){};
    int num;
    void showNum()
    {
        cout << this->num << endl;
    };
};

class Teacher : virtual public People
{
public:
    Teacher(string name, string sex, int age) : People(name, sex), age(age){};
    int age;
    void showAge()
    {
        cout << this->age << endl;
    };
};

class AssissTeacher : public Student, public Teacher
{
public:
    AssissTeacher(string name, string sex, int age, int num) : Teacher(name, sex, age), Student(name, sex, num), People(name, sex){};
};

int main()
{
    AssissTeacher tea("Jiang", "male", 95, 001);
    tea.showAge();
    tea.showNum();
    tea.showMessage();
    return 0;
}