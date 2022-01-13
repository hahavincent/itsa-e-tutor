#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

typedef long long lint;

int main() {
    int a,b;
    while(scanf("%d%d", &a, &b) != EOF) {
        double ans = (double)a * b / 2;
        printf("%.1f\n", ans);
    }
    return 0;
}