#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

typedef long long lint;

int main() {
    int a;
    while(scanf("%d", &a) != EOF) {
        printf("%d ", a);
        printf("%d ", a * a);
        printf("%d\n", a * a * a);
    }
    return 0;
}