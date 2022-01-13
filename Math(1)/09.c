#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

typedef long long lint;

int main() {
    int a;
    while(scanf("%d", &a) != EOF) {
        lint b = 1;
        if(a > 31) {
            printf("Value of more than 31\n");
            continue;
        }
        for(int i = 0 ; i < a ; i++) {
            b *= 2;
        }
        printf("%lld\n", b);
    }
    return 0;
}