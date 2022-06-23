#include <bits/stdc++.h>
using namespace std;

typedef long long lint;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    lint a;
    while(cin >> a){
        lint ans = 1;
        for(int i = 1 ; i <= a ; i++) {
            ans *= i;
        }
        cout << ans << endl;
    }
    return 0;
}