#include <bits/stdc++.h>
using namespace std;

typedef long long lint;

int f(int n) {
    if(n == 0 || n == 1) return n + 1;
    else return f(n - 1) + f(n / 2);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    cout << f(n) << "\n";
    return 0;
}
