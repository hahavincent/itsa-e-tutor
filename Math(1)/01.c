#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

typedef long long lint;

int main() {
    int a,b,c;
    while(scanf("%d%d%d", &a, &b, &c) != EOF) {
        double ans = (double)(a + b) * c / 2;
        printf("Trapezoid area:%.1f\n", ans);
    }
    return 0;
}