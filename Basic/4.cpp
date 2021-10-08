#include <bits/stdc++.h>
using namespace std;

typedef long long lint;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int h1,m1,h2,m2;
    double times;
    int fee;
    cin >> h1 >> m1 >> h2 >> m2;
    if(m2 < m1) {
        h2--;
        m2 += 60;
    }
    times = (h2 - h1) + (double)(m2 - m1) / 60;
    if(times > 4) {
        fee = 2 * 2 * 30 + 2 * 2 * 40;
        fee += (int)(times - 4) * 60 * 2;
        if(times - (int)times > 0.5) fee += 60;
    }
    else if(times > 2 && times <= 4) {
        fee = 2 * 2 * 30;
        fee += (int)(times - 2) * 40 * 2;
        if(times - (int)times > 0.5) fee += 40;
    }
    else {
        fee += (int)times * 30 * 2;
        if(times - (int)times > 0.5) fee += 30;
    }
    cout << fee << "\n";
    return 0;
}
