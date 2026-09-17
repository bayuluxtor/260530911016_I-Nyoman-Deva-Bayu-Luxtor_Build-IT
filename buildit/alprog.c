#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);

    long long total = 0;

    for (int i = 0; i < N; i++) {
        long long A;
        scanf("%lld", &A);
        total += A;
    }

    if (total < 0) {
        total = -total;
    }

    printf("%lld\n", total);

    return 0;
}