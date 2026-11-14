4.1 Program to find the sum of first N natural numbers [5]
C program


#include <stdio.h>

int sum(int n) {
    if (n == 0)
        return 0;

    return n + sum(n - 1);
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum = %d\n", sum(n));

    return 0;
}

4.2 Program to find the factorial of a number [5]
C program

#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;

    return n * factorial(n - 1);
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Factorial is not defined for negative numbers");
    else
        printf("Factorial = %d\n", factorial(n));

    return 0;
}

4.3 Program to find the Nth term of a Fibonacci series [5]
C program

#include <stdio.h>

int fibonacci(int n) {
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    printf("Enter term position: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Invalid position");
    else
        printf("Fibonacci term = %d\n", fibonacci(n));

    return 0;
}

4.4 Program to generate N terms of a Fibonacci series [5]
C program

#include <stdio.h>

int fibonacci(int n) {
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Enter a positive number");
        return 0;
    }

    printf("Fibonacci series:\n");

    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}
