#include <bits/stdc++.h>
using namespace std;

typedef long long lint;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a;
    while(cin >> a) {
        lint b = 1;
        if(a > 31) {
            cout << "Value of more than 31\n";
            continue;
        }
        for(int i = 0 ; i < a ; i++) {
            b *= 2;
        }
        cout << b << endl;
    }
    return 0;
}