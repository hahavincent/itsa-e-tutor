#include <bits/stdc++.h>
using namespace std;

typedef long long lint;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    lint x,y;
    while(cin >> x >> y) {
        if(x * x + y * y <= 100 * 100) cout << "inside\n";
        else cout << "outside\n";
    }
    return 0;
}
