#include <bits/stdc++.h>
using namespace std;


int main() {
    int a = 1;
    int b = 1;
    int c = 1;
    int d;
    for(int i = 0; i < 20190321; i++) {
        d = a+b+c;
        a = b;
        b = c;
        c = d;
    }
    cout << d % 10000;
    return 0;
}
