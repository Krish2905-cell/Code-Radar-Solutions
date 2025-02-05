#include <stdio.h>

int main() {
    int a, shiftCount;
    scanf("%d", &a);
    scanf("%d", &shiftCount);
    int result = a << shiftCount;
    printf("%d", result);
    return 0;
}
