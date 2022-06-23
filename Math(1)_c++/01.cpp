#include <bits/stdc++.h>
using namespace std;

typedef long long lint;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c;
    while(cin >> a >> b >> c) {
        double ans = (double)(a + b) * c / 2;
        cout << fixed << setprecision(1) << "Trapezoid area:" << ans << endl;
    }
    return 0;
}