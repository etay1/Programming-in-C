#include <stdio.h>

int fib(int n) {
    if (n <= 1)
        return n;

    return fib(n - 1) + fib(n - 2);
}

int findMax(int a[], int n) {
    if (n == 1)
        return a[0];

    int max = findMax(a, n - 1);
    if (a[n - 1] > max)
        max = a[n - 1];

    return max;
}

int main() {
    int n;
    printf("PSET 1\nEnter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci sequence:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", fib(i));
    }

    printf("\n\nPSET 2\n");
    int a[] = {7, 1, -3, 15, 3, 0, 42};
    printf("a[] = {7, 1, -3, 15, 3, 0, 42}");
    int q = sizeof(a) / sizeof(a[0]);
    printf("\nMax of a[] is %d", findMax(a, q));

    return 0;
}
