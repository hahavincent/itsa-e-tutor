#include <bits/stdc++.h>
using namespace std;

typedef long long lint;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    while(n--) {
        char sign;
        int a,b,c,d;
        cin >> sign >> a >> b >> c >> d;
        if(sign == '+') cout << a + c << " " << b + d << "\n";
        if(sign == '-') cout << a - c << " " << b - d << "\n";
        if(sign == '*') {
            cout << a * c - b * d << " " << b * c + a * d << "\n";
        }
        if(sign == '/') {
            cout << (double)(a * c + b * d) / (c * c + d * d) << " " << (double)(b * c - a * d) / (c * c + d * d) << "\n";
        }
    }
    return 0;
}
