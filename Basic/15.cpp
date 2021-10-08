#include <bits/stdc++.h>
using namespace std;

typedef long long lint;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string str1,str2;
    stringstream ss;
    map <char,int> mp;
    int cnt = 0;
    getline(cin,str1);
    ss << str1;
    while(ss >> str2) {
        cnt++;
        for(auto x : str2) {
            if(isalpha(x)) {
                if(isupper(x)) x += ('a' - 'A');
                mp[x]++;
            }
        }
    }
    cout << cnt << "\n";
    for(char i = 'a' ; i <= 'z' ; i++) {
        if(mp[i]) cout << i << " : " << mp[i] << "\n";
    }
    return 0;
}
