#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

typedef long long lint;

int rec[11];
int main() {
    char arr[12];
    int array[11];
    array[0] = 0;
    for(int i = 1 ; i <= 10 ; i++) {
        scanf(" %c", &arr[i]);
        if(arr[i] == 'X') rec[i] = 1;
    }
    for(int i = 1 ; i <= 10 ; i++) {
        if(rec[i] != 1) array[i] = (int)arr[i] - '0';
        else array[i] = 10;
    }
    for(int j = 1 ; j <= 10 ; j++) {
        array[j] += array[j - 1];
    }
    for(int j = 1 ; j <= 10 ; j++) {
        array[j] += array[j - 1];
    }
    if(array[10] % 11 == 0) printf("YES\n");
    else printf("NO\n");
}