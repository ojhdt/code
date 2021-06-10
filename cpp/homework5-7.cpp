#include <bits/stdc++.h>
using namespace std;

class MyString
{
public:
    MyString(char *istr) : str(istr)
    {
        // cout << "Constructor" << endl;
    };
    char * concat(MyString &s)
    {
        char *sstr = s.str;
        char * cp = str;
        char * res = new char(size()+s.size()+1);
        char * cpres = res;
        while(*cp != '\0'){
            *res = *cp;
            cp++;
            res++;
            // cout << *cp << endl;
        }
        while (*sstr != '\0')
        {
            *res = *sstr;
            sstr++;
            res++;
        }
        *res = '\0';
        return cpres;
    };

    int size()
    {
        int len = 0;
        char *cp = str;
        for (; *cp != '\0'; cp++)
        {
            len++;
        }
        return len;
    };

private:
    char *str;
};

int main()
{
    MyString str("abcd");
    MyString str1("def");
    cout << str.size() << endl;
    cout << str.concat(str1) << endl;
    cout << MyString(str.concat(str1)).size() << endl;
    // str.concat(str1);
    return 0;
}