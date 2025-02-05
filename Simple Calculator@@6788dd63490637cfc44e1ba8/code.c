#include <stdio.h>

int main() {
    char operator;
    int num1, num2;
    
    // Taking input for the operator and numbers
    scanf(" %c", &operator);  // Space before %c to consume any leftover newline
    scanf("%d %d", &num1, &num2);

    switch (operator) {
        case '+':
            printf("%d", num1 + num2);
            break;
        case '-':
            printf("%d", num1 - num2);
            break;
        case '*':
            printf("%d", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%d", num1 / num2);  // Integer division
            } else {
                printf("error");  // Handle division by zero
            }
            break;
        default:
            printf("error");  // Invalid operator
    }
    return 0;
}


