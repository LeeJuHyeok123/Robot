#include <stdio.h>

int main() {
    int a, b;

    // Input
    printf("Enter the first integer: ");
    scanf("%d", &a);

    printf("Enter the second integer: ");
    scanf("%d", &b);

    // Output
    printf("\n[Arithmetic Operation Results]\n");
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);

    if (b != 0) {
        printf("%d / %d = %d\n", a, b, a / b);
        printf("%d %% %d = %d\n", a, b, a % b);
    } else {
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}
