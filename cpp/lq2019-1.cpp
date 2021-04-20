#include <iostream>

using namespace std;

bool check(int n) {
    while(n) {
        if(n % 10==0) {
            return true;
        }
        n/=10;
    }
    return false;
}
int main() {
    long long sum;
    for(int i = 1; i <=2019; i++) {
//        int t = i / 1000 % 10;
//        int h = i / 100 % 10;
//        int s = i / 10 % 10;
//        int g = i / 1 % 10;
//        if(t == 2 || t == 1 || t == 9 || h == 2 || h == 1 || h == 9|| s == 1 || s == 2 || s == 9|| )
        if (check(i)) {
            sum += (i*i);
        }
    }
    cout << sum;
    return 0;
}
