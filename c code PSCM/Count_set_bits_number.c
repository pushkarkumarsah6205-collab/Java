#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int count = 0;

    while (n > 0) {
        count += n & 1;
        n = n >> 1;
    }

    printf("%d\n", count);

    return 0;
}