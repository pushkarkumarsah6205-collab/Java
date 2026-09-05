#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    int root = sqrt(n);

    int floorSqrt = root;
    int ceilSqrt = (root * root == n) ? root : root + 1;

    printf("Floor of square root = %d\n", floorSqrt);
    printf("Ceil of square root = %d\n", ceilSqrt);

    return 0;
}