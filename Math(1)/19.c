#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

typedef long long lint;

int main() {
    int a;
    while(scanf("%d", &a) != EOF) {
        if(a <= 800) printf("%.1f\n", (double)a * 0.9);
        else if(a < 1500) printf("%.1f\n", (double)a * 0.9 * 0.9);
        else printf("%.1f\n", (double)a * 0.9 * 0.79);
    }
    return 0;
}