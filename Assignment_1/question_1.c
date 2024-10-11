/*
 * Question: write a program to convert the given number into a decimal number, binary, hexa-decimal number, and octal number
 *
 * let's say the input is an integar
 */
#include <stdio.h>

int main() {
    int num;
    int i;

    // number input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // decimal, generally the original form is already a decimal number
    printf("Decimal: %d\n", num);

    // binary form
    printf("Binary: ");
    for (i = 31; i >= 0; i--) {
        int bit = (num >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");

    // Hexadecimal
    printf("Hexadecimal: %X\n", num);

    // octal
    printf("Octal: %o\n", num);

    return 0;
}
