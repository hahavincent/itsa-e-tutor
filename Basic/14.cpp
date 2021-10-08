#include <bits/stdc++.h>
using namespace std;

typedef long long lint;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string str,str1,str2;
    while(cin >> str) {
        int len = str.size();
        if(len % 2) {
            for(int i = 0 ; i < len / 2 ; i++) {
                str1 += str[i];
            }
            for(int i = len - 1 ; i > len / 2 ; i--) {
                str2 += str[i];
            }
        }
        else {
            for(int i = 0 ; i < len / 2 ; i++) {
                str1 += str[i];
            }
            for(int i = len - 1 ; i >= len / 2 ; i--) {
                str2 += str[i];
            }
        }
        if(str1 == str2) cout << "YES\n";
        else cout << "NO\n";
        str1.clear();
        str2.clear();
    }
    return 0;
}
