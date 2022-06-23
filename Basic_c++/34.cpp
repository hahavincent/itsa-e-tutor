#include <bits/stdc++.h>
using namespace std;

typedef long long lint;

int main(){
    int input;
    double weight;
    int gender;
    while(cin >> input >> gender) {
        if(gender == 1) printf("%.1f\n", (double)(input - 80) * 0.7);
        if(gender == 2) printf("%.1f\n", (double)(input - 70) * 0.6);
    }
}