#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

typedef long long lint;

int main() {
    int a,b;
    while(scanf("%d%d", &a, &b) != EOF){
        double ans;
        if(a <= 60){
            ans = a * b;
        }
        if(a > 60 && a <= 120){
            ans = 60 * b + (a - 60) * b * 1.33;
        }
        else ans = 60 * b + 60 * b * 1.33 + (a - 120) * b * 1.66;
        printf("%.1f\n", ans);
    }
    return 0;
}