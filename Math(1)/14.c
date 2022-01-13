#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

typedef long long lint;

int main() {
    int a;
    scanf("%d", &a);
    printf("%d days\n", a / 60 / 60 / 24);
    a %= 60 * 60 * 24;
    printf("%d hours\n", a / 60 / 60);
    a %= 60 * 60;
    printf("%d minutes\n", a / 60);
    a %= 60;
    printf("%d seconds\n", a);      
}