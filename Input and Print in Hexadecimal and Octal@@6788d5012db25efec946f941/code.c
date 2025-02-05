#include <stdio.h>

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    printf("Hexadecimal representation: %X\n", number);
    printf("Octal representation: %o\n", number);
    return 0;
}
