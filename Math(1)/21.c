#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

typedef long long lint;

int main() {
    lint a;
    while(scanf("%lld", &a) != EOF){
        lint ans = 1;
        for(int i = 1 ; i <= a ; i++) {
            ans *= i;
        }
        printf("%lld\n", ans);
    }
    return 0;
}