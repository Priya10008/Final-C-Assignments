#include <stdio.h>

int fact(int n) {
    int i, f = 1;
    for(i = 1; i <= n; i++)
        f = f * i;
    return f;
}

// recursion
int factRec(int n) {
    if(n == 0 || n == 1)
        return 1;
    return n * factRec(n - 1);
}

int main() {
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("Factorial (without recursion) = %d\n", fact(n));
    printf("Factorial (with recursion) = %d\n", factRec(n));

    return 0;
}
