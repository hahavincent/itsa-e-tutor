#include <bits/stdc++.h>
using namespace std;

typedef long long lint;

int main() {
    int n;
    cin >> n;
    int a, b, c;
    while (n--) {
        cin >> a >> b >> c;
        if (a >= 60 && b >= 60 && c >= 60) {
            cout << "P\n";
            continue;
        }
        else if (a < 60 && a + b + c >= 220) {
            cout << "P\n";
            continue;
        }
        else if (b < 60 && a + b + c >= 220) {
            cout << "P\n";
            continue;
        }
        else if (c < 60 && a + b + c >= 220) {
            cout << "P\n";
            continue;
        }
        else if(a >= 60 && b >= 60 && a + b + c < 220) {
            cout << "M\n";
            continue;
        }
        else if(a >= 60 && c >= 60 && a + b + c < 220) {
            cout << "M\n";
            continue;
        }
        else if(c >= 60 && b >= 60 && a+b+c < 220) {
            cout << "M\n";
            continue;
        }
        else if(a <= 60 && b <= 60 && c >= 80){
            cout << "M\n";
            continue;
        }
        else if(c <= 60 && b <= 60 && a >= 80){
            cout << "M\n";
            continue;
        }
        else if(a <= 60 && c <= 60 && b >= 80){
            cout << "M\n";
            continue;
        }
        else cout << "F\n";
    }
}