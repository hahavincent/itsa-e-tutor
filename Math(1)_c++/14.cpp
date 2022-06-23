#include <bits/stdc++.h>
using namespace std;

typedef long long lint;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a;
    cin >> a;
    cout << a / 60 / 60 / 24 << " days\n";
    a %= 60 * 60 * 24;
    cout << a / 60 / 60 << " hours\n";
    a %= 60 * 60;
    cout << a / 60 << " minutes\n";
    a %= 60;
   cout << a << " seconds\n";
    return 0;
}