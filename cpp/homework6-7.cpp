#include <bits/stdc++.h>
using namespace std;

class MyString
{
public:
    MyString(){};
    MyString(char *str) : str(str){};
    MyString(MyString &s)
    {
        str = s.str;
    }
    ~MyString(){};
    int getLength()
    {
        int i;
        for (i = 0; *str != '\0'; str++, i++)
        {
        }
        return i;
    }
    char operator[](int index){
        return str[index];
    }
    void operator=(MyString &s){
       char * nstr = new char[s.getLength()+1]; 
       for(int i = 0; i < s.getLength(); i++){
           nstr[i] = (s.str)[i];
       }
    };
    MyString operator+=(MyString &s)
    {
        char *nstr = new char[getLength() + s.getLength() + 1];
        char *cpstr = str;
        char *cps = s.str;
        while (*nstr != *cpstr)
        {
            *nstr = *cpstr;
            nstr++;
            cpstr++;
        }
        while (*nstr != *cps)
        {
            *nstr = *cps;
            nstr++;
            cps++;
        }
        *nstr = '\0';
        MyString temp(nstr);
        return temp;
    }
private:
    char *str;
};

int main(){
    MyString a("aaaaaaaaaa");
    MyString b("bbbbbb");
    cout << (a+=b).getLength() << endl;
}