#include <stdio.h>

int countSetBits(int n) {
    int count = 0;

    while (n > 0) {
        n = n & (n - 1);
        count++;
    }

    return count;
}

int main() {
    int L, R;
    int total = 0;

    scanf("%d %d", &L, &R);

    for (int i = L; i <= R; i++) {
        total += countSetBits(i);
    }

    printf("%d", total);

    return 0;
}