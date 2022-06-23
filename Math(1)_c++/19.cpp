#include <bits/stdc++.h>
using namespace std;

typedef long long lint;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a;
    while(cin >> a) {
        if(a <= 800) cout << fixed << setprecision(1) << (double)a * 0.9 << endl;
        else if(a < 1500) cout << fixed << setprecision(1) << (double)a * 0.9 * 0.9 << endl;
        else cout << fixed << setprecision(1) << (double)a * 0.9 * 0.79  << endl;
    }
    return 0;
}