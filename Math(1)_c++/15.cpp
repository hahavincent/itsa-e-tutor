#include <bits/stdc++.h>
using namespace std;

typedef long long lint;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a,b;
    while(cin >> a >> b) {
        if(a >= 0 && a <= 100 && b >= 0 && b <= 100) cout << "inside\n";
        else cout << "outside\n";
    }
    return 0;
}