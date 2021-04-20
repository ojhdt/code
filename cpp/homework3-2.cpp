#include <bits/stdc++.h>
using namespace std;

class student
{

public:
    student(string iname, int iscore);
    bool isHiger(student &b);
    friend student Compare(const student &a, const student &b);
    string showName();

private:
    string name;
    int score;
};

student::student(string iname, int iscore)
{
    name = iname;
    score = iscore;
};

string student::showName(){
    return name;
}

bool student::isHiger(student &b)
{
    if (score > b.score)
    {
        return true;
    }
    else
    {
        return false;
    }
};

student Compare(const student &a, const student &b)
{
    if (a.score > b.score)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    student s1("s1", 10);
    student s2("s2", 80);
    student s3("s3", 60);
    student s4("s4", 40);
    student s5("s5", 20);
    // cout << s2.isHiger(s1) << endl;
    cout << "最高分：" << Compare(Compare(Compare(Compare(s1, s2), s3), s4), s5).showName() << endl;
    return 0;
}