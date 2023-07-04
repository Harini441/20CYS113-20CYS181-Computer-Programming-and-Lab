#include <stdio.h>

// Define a structure to represent a complex number
struct complex {
    int real;
    int imag;
};

// Function to add two complex numbers
struct complex add(struct complex num1, struct complex num2) {
    struct complex result;
    result.real = num1.real+num2.real;
    result.imag = num1.imag+num2.imag;
    return result;
}

// Function to subtract two complex numbers
struct complex sub(struct complex num1, struct complex num2) {
    struct complex result;
    result.real=num1.real-num2.real;
    result.imag=num1.imag-num2.imag;
    return result;
}

int main() {
    struct complex num1, num2, result_add, result_sub;

    // Input the first complex number
    scanf("%d %d", &num1.real, &num1.imag);

    // Input the second complex number
    scanf("%d %d", &num2.real, &num2.imag);

    // Perform addition operation
    result_add = add(num1, num2);
    printf("%d+%di\n", result_add.real, result_add.imag);

    // Perform subtraction operation
    result_sub = sub(num1, num2);
    printf("%d+%di\n", result_sub.real, result_sub.imag);

    return 0;
}