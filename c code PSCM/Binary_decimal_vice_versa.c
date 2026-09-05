#include <stdio.h>

int binaryToDecimal(long long binary) {
    int decimal = 0, base = 1, remainder;

    while (binary > 0) {
        remainder = binary % 10;
        decimal += remainder * base;
        base *= 2;
        binary /= 10;
    }

    return decimal;
}

long long decimalToBinary(int decimal) {
    long long binary = 0;
    int remainder, place = 1;

    while (decimal > 0) {
        remainder = decimal % 2;
        binary += remainder * place;
        place *= 10;
        decimal /= 2;
    }

    return binary;
}

int main() {
    long long binary;
    int decimal, choice;

    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter binary number: ");
        scanf("%lld", &binary);

        printf("Decimal = %d\n", binaryToDecimal(binary));
    }
    else if (choice == 2) {
        printf("Enter decimal number: ");
        scanf("%d", &decimal);

        printf("Binary = %lld\n", decimalToBinary(decimal));
    }
    else {
        printf("Invalid choice!\n");
    }

    return 0;
}