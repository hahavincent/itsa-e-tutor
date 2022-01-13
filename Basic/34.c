#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

typedef long long lint;

int main(){
    int input;
    double weight;
    int gender;
    while(scanf("%d%d", &input, &gender) != EOF) {
        if(gender == 1) printf("%.1f\n", (double)(input - 80) * 0.7);
        if(gender == 2) printf("%.1f\n", (double)(input - 70) * 0.6);
    }
}