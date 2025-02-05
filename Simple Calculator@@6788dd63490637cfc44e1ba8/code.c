#include <stdio.h>
int main() {
    char operator;
    int num1, num2,a,b,c,d;
    scanf(" %c", &operator);
    scanf("%d %d", &num1, &num2);
    a=num1 + num2;
    b=num1 - num2;
    c=num1 * num2;
    d=num1 / num2;
    switch (operator) {
        case '+':
            printf("%d", a);
            break;
        case '-':
            printf("%d", b);
            break;
        case '*':
            printf("%d", c);
            break;
        case '/':
            if (num2 != 0) {
                printf("%d", d);
            } else {
                printf("error");
            }
            break;
        default:
            printf("error");
    }
    return 0;
}

