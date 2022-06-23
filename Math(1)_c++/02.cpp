#include <bits/stdc++.h>
using namespace std;

typedef long long lint;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a,b;
    while(cin >> a >> b) {
        double ans = (double)a * b / 2;
        cout << fixed << setprecision(1) << ans << endl;
    }
    return 0;
}