#include <bits/stdc++.h>
using namespace std;

typedef long long lint;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a,b;
    while(cin >> a >> b) {
        if(a * a + b * b <= 10000) cout << "inside\n";
        else cout << "outside\n";
    }
    return 0;
}