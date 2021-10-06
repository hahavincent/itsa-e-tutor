#include <bits/stdc++.h>
using namespace std;

typedef long long lint;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string str1;
    stringstream ss;
    vector <int> vec;
    while(getline(cin , str1)) {
        ss << str1;
        int temp;
        while(ss >> temp) {
            vec.push_back(temp);
        }
        reverse(vec.begin() , vec.end());
        int i = 0;
        for(auto x : vec) {
            i++;
            cout << x;
            if(i != vec.size()) cout << " ";
        }
        cout << "\n";
        ss.clear();
        str1.clear();
        vec.clear();
    }
    return 0;
}