// Sample code of adding two integer values using user-defined language.
#include <stdio.h>

int main() {
    int a, b, result;

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Enter another number: ");
    scanf("%d", &b);

    result = a + b;

    printf("The result of %d + %d is: %d\n", a, b, result);

    return 0;
}
