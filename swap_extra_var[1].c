// Name:Sumit Digge PRN:24030331372902
#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter value of A and B: ");
    scanf("%d %d", &a, &b);

    c = a;
    a = b;
    b = c;

    printf("After swapping: A = %d, B = %d\n", a, b);

    return 0;
}
