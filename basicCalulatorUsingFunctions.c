#include <stdio.h>

float add(float a, float b) { return a + b; }
float sub(float a, float b) { return a - b; }
float mul(float a, float b) { return a * b; }
float div(float a, float b) {
  return b ? a / b : (printf("Division by zero\n"), 0);
}

int main() {
    float a, b, r;
    char o;
    printf("Enter first number: "); scanf("%f", &a);
    printf("Enter operator (+, -, *, /): "); scanf(" %c", &o);
    printf("Enter second number: "); scanf("%f", &b);
    switch(o) {
        case '+': r = add(a, b); break;
        case '-': r = sub(a, b); break;
        case '*': r = mul(a, b); break;
        case '/': r = div(a, b); break;
        default: printf("Invalid operator\n"); return 1;
    }
    printf("Result: %.2f\n", r);
    return 0;
}