#include <bits/stdc++.h>
using namespace std;

typedef long long lint;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a;
    cin >> a;     
    cout << "NT10=" << a / 10 << endl;
    a %= 10;
    cout << "NT5=" << a / 5 << endl;
    a %= 5;
    cout << "NT1=" << a / 1 << endl;
    return 0;
}