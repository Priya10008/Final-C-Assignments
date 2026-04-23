#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if (n <= 1)
        return 0;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

long long factorial(int n) {
    if (n < 0)
        return -1;
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

void primeFactors(int n) {
    if (n <= 1) {
        printf("No prime factors\n");
        return;
    }
    printf("Prime factors: ");
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }
    printf("\n");
}

int main() {
    int num, choice;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nMenu:\n");
    printf("1. Square Root\n");
    printf("2. Square\n");
    printf("3. Cube\n");
    printf("4. Check Prime\n");
    printf("5. Factorial\n");
    printf("6. Prime Factors\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            if (num < 0)
                printf("Square root not defined for negative numbers\n");
            else
                printf("Square Root = %.2f\n", sqrt(num));
            break;
        case 2:
            printf("Square = %d\n", num * num);
            break;
        case 3:
            printf("Cube = %d\n", num * num * num);
            break;
        case 4:
            if (isPrime(num))
                printf("The number is Prime\n");
            else
                printf("The number is Not Prime\n");
            break;
        case 5: {
            long long fact = factorial(num);
            if (fact == -1)
                printf("Factorial not defined for negative numbers\n");
            else
                printf("Factorial = %lld\n", fact);
            break;
        }
        case 6:
            primeFactors(num);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
