#include <bits/stdc++.h>
using namespace std;

typedef long long lint;

int main() {
    int sum;
    int N;
    while(cin >> N) {
        sum = 0;
        for(int i = 1 ; i <= N ; i++) {
            if(i % 3 == 0)
            sum += i;
        }
        cout << sum << endl;
    }
    return 0;
}