#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int bandingkan (const void *a, const void *b) {
    long long x = * (long long *)a;
    long long y = * (long long *)b;

    if (x < y) return -1;
    if (x > y) return 1;
    return 0;
}

int main() {

    int N;
    scanf ("%d", &N);

    long long koin[N];

    for (int i = 0; i < N; i++) {
        scanf("%lld", &koin[i]);
    }

    qsort (koin, N, sizeof (long long), bandingkan);

    long long total = (long long)N * (N - 1) / 2;
    long long sama = 0;

    int i = 0;

    while (i < N) {
        int j = i;

        while (j < N && koin[j] == koin[i]) {
            j++;
        }

        long long jumlah = j - i;

        sama += jumlah * (jumlah - 1) / 2;

        i = j;
    }

    long long jawaban = total - sama;

    printf("%lld\n", jawaban % 1000000007);

    return 0;
}
