// Name:Sumit Digge PRN:24030331372902
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b)
        printf("Largest number: %d\n", a);
    else if (b > a)
        printf("Largest number: %d\n", b);
    else
        printf("Both numbers are equal\n");

    return 0;
}
