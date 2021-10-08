#include <bits/stdc++.h>
using namespace std;

typedef long long lint;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int month;
    while(cin >> month) {
        if(month >= 3 && month <= 5) cout << "Spring\n";
        else if(month >= 6 && month <= 8) cout << "Summer\n";
        else if(month >= 9 && month <= 11) cout << "Autumn\n";
        else cout << "Winter\n";
    }
    return 0;
}
