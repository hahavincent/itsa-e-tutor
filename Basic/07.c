#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

typedef long long lint;

int main() {
    int n;
    scanf("%d", &n);
    while(n--) {
        char sign;
        int a,b,c,d;
        scanf(" %c%d%d%d%d", &sign, &a, &b, &c, &d);
        if(sign == '+') printf("%d %d\n", a + c, b + d);
        if(sign == '-') printf("%d %d\n", a - c, b - d);
        if(sign == '*') {
            printf("%d %d\n", a * c - b * d, b * c + a * d);
        }
        if(sign == '/') {
            printf("%d %d\n", (double)(a * c + b * d) / (c * c + d * d), (double)(b * c - a * d) / (c * c + d * d));
        }
    }
    return 0;
}