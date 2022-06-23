#include <bits/stdc++.h>
using namespace std;

typedef long long lint;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a;
    while(cin >> a) {
        int ans = (double)a * 100 / (100 - 30 * 2.54);
        cout << ans + 1 << endl;
    }   
    return 0;
}