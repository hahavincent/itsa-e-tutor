#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

typedef long long lint;

int main() {
    int n;
    while(scanf("%d", &n) != EOF) {
        printf("%.1lf\n", 1.6 * n);
    }
    return 0;
}