#include <stdio.h>

long long factorial(int n) {
    long long fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

double power(double x, int n) {
    double result = 1;
    for(int i = 0; i < n; i++) {
        result *= x;
    }
    return result;
}

int main() {
    int n;
    double x, sum = 0.0;

    printf("Enter value of x (in radians): ");
    scanf("%lf", &x);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        int p = 2 * i + 1;
        double term = power(x, p) / factorial(p);

        if(i % 2 == 0)
            sum += term;
        else
            sum -= term;
    }

    printf("Sum of sine series = %lf\n", sum);

    return 0;
