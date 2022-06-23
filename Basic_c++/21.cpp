#include <bits/stdc++.h>
using namespace std;

typedef long long lint;

int main(){
    double max = -0x3f3f3f3f , min = 0x3f3f3f3f , input;
    for(int i = 0 ; i < 10 ; i++) {
        cin >> input;
        if(input > max) max = input;
        if(input < min) min = input;
    }
    cout << fixed << setprecision(2) << "maximum:" << max << endl;
    cout << fixed << setprecision(2) << "minimum:" << min << endl;
}