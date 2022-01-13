#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

typedef long long lint;

int main() {
    int a,b;
    while(scanf("%d%d", &a, &b) != EOF) {
        if(a >= 0 && a <= 100 && b >= 0 && b <= 100) printf("inside\n");
        else printf("outside\n");
    }
    return 0;
}