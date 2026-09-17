#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long long a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);

    long long pertama, kedua, ketiga;

    if (a <= b && a <= c) {
        pertama = a;

        if (b <= c) {
            kedua = b;
            ketiga = c;
        } else {
            kedua = c;
            ketiga = b;
        }
    }
    else if (b <= a && b <= c) {
        pertama = b;

        if (a <= c) {
            kedua = a;
            ketiga = c;
        } else {
            kedua = c;
            ketiga = a;
        }
    }
    else {
        pertama = c;

        if (a <= b) {
            kedua = a;
            ketiga = b;
        } else {
            kedua = b;
            ketiga = a;
        }
    }

    printf("%lld\n", kedua - pertama < ketiga - kedua ? kedua - pertama : ketiga - kedua);
    
    return 0;
}
