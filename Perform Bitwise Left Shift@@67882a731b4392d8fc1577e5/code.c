#include <stdio.h>

int main() {
    int a, shiftCount;
    printf("Enter an integer: ");
    scanf("%d", &a);
    printf("Enter the number of positions to shift left: ");
    scanf("%d", &shiftCount);
    int result = a << shiftCount;
    printf("The result of %d << %d is: %d\n", a, shiftCount, result);
    return 0;
}
