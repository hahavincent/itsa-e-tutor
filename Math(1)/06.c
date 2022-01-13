#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

typedef long long lint;

int main() {
    int a;
    while(scanf("%d", &a) != EOF) {
        double ans = (double)a * 1.6;
        printf("%.1f\n", ans);
    }
    return 0;
}