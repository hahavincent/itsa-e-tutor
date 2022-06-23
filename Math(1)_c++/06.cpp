#include <bits/stdc++.h>
using namespace std;

typedef long long lint;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a;
    while(cin >> a) {
        double ans = (double)a * 1.6;
        cout << fixed << setprecision(1) << ans << endl;
    }
    return 0;
}