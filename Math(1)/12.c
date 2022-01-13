#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

typedef long long lint;

int main() {
    int a;
    while(scanf("%d", &a) != EOF) {
        int ans = (double)a * 100 / (100 - 30 * 2.54);
        printf("%d\n", ans + 1);
    }      
}