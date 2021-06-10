#include<bits/stdc++.h>

using namespace std;
class mystring
{
public:
    char *str;
    mystring(char *s)
    {
        int c = 0;
        c = strlen(s);
        str = new char[2 * c + 1];
        str = s;
    };
    ~mystring()
    {
        delete[] str;
    };
    mystring(mystring &rhs)
    {
        str = new char[strlen(rhs.str) + 1];
        str = rhs.str;
    };
    void cd()
    {
        cout << strlen(str) << endl;
        ;
    }
    void lj(mystring &rhs)
    {
        char *p;
        int sum = 0;
        sum = strlen(str) + strlen(rhs.str);
        p = new char[sum];
        int i = 0, j = 0;
        while (*(str + i) != '\0')
        {
            *(p + i) = *(str + i);
            i++;
        }
        while (*(rhs.str + j) != '\0')
        {
            *(p + i) = *(rhs.str + j);
            i++;
            j++;
        }
        for (int k = 0; k < i; k++)
        {
            cout << *(p + i);
        }
        delete[] p;
    };
};
int main()
{
    char a[4] = "abc";
    mystring string1(a);
    char b[4] = "def";
    mystring string2(b);
    string1.cd();
    string2.cd();
    string1.lj(string2);
}