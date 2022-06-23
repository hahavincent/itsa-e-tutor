#include <bits/stdc++.h>
using namespace std;

typedef long long lint;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string str,str1,str2;
    int cnt = 0;
    cin >> str1 >> str;
    for(int i = 0 ; i < str.size() ; i++) {
        if(str[i] == str1[0] && i + str1.size() - 1 < str.size()) {
            for(int j = i ; j < i + str1.size() ; j++) {
                str2 += str[j];
            }
            if(str1 == str2) cnt++;
            str2.clear();
        }
    }
    cout << cnt << "\n";
    return 0;
}