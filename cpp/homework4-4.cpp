#include <bits/stdc++.h>
using namespace std;

int main(){
    for(int i = 0; i <= 400; i++){
        int a = 0;
        for(int j = 1; j <= (i < 20 ? i : 20); j++){
            if(i % j == 0){
                a += j;
            }
        }
        cout << i << "," << a << endl;
    }
    return 0;
}