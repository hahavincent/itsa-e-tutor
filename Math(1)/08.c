#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

typedef long long lint;

int main() {
    int a,b;
    while(scanf("%d%d", &a, &b) != EOF) {        
        printf("%d\n", (a + b) * (a + b));
    }
    return 0;
}