#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

typedef long long lint;

int main() {
    double a;
    while(scanf("%lf", &a) != EOF) {        
        printf("%.1lf\n", a * 9 / 5 + 32);
    }
    return 0;
}