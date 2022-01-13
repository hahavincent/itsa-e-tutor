#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

typedef long long lint;

int main() {
    int a;
    while(scanf("%d", &a) !=  EOF){
        printf("%X\n",a);
    }
    return 0;
}