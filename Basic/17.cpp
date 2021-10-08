#include <bits/stdc++.h>
using namespace std;

typedef long long lint;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string str1,str2;
    stringstream ss;
    set <string> st;
    vector <string> vec;
    getline(cin,str1);
    ss << str1;
    while(ss >> str2) {
        for(int i = 0 ; i < str2.size() ; i++) {
            if(isupper(str2[i])) str2[i] += ('a' - 'A');
        }
        if(!st.count(str2)) {
            st.insert(str2);
            vec.push_back(str2);
        }
        str2.clear();
    }
    int cnt = 0;
    for(auto x : vec) {
        cout << x;
        cnt++;
        if(cnt != vec.size()) cout << " ";
        else cout << "\n";
    }
    return 0;
}
