#include <stdio.h>

void convertToBinary(int decimalNum) {
    printf("Binary equivalent: ");

    if (decimalNum == 0) {
        printf("0");
        return;
    }

    int binaryNum[32];
    int i = 0;

    while (decimalNum > 0) {
        binaryNum[i] = decimalNum % 2;
        decimalNum /= 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    }

    printf("\n");
}

void convertToOctal(int decimalNum) {
    printf("Octal equivalent: %o\n", decimalNum);
}

void convertToHexadecimal(int decimalNum) {
    printf("Hexadecimal equivalent: %X\n", decimalNum);
}

int main() {
    int decimalNum;

    scanf("%d", &decimalNum);

    if (decimalNum <= 0) {
        printf("Error: Value should be greater than 0");
        return 0;
    }

    convertToBinary(decimalNum);
    convertToOctal(decimalNum);
    convertToHexadecimal(decimalNum);

    return 0;
}