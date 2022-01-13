#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

typedef long long lint;

int main() {
    int a;
    scanf("%d", &a);      
    printf("NT10=%d\n",a / 10);
    a %= 10;
    printf("NT5=%d\n",a / 5);
    a %= 5;
    printf("NT1=%d\n",a / 1);
    return 0;
}