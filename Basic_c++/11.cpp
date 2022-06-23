#include <bits/stdc++.h>
using namespace std;

typedef long long lint;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    while(cin >> n >> m) {
        int arr[n][m];
        for(int i = 0 ; i < n ; i++) {
            for(int j = 0 ; j < m ; j++) {
                cin >> arr[i][j];
            }
        }
        for(int i = 0 ; i < m ; i++) {
            for(int j = 0 ; j < n ; j++) {
                cout << arr[j][i];
                if(j != n - 1) cout << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}