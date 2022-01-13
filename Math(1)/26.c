#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

typedef long long lint;

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 1 ; i <= n ; i++) {
        printf("%d*%d=%d\n", i, i, i * i);
    }
    return 0;
}