#include <stdio.h>
int fib(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}
int main() {
    int start, count;
    printf("Enter starting Fibonacci index: ");
    scanf("%d", &start);
    printf("Enter number of terms after it: ");
    scanf("%d", &count);
    printf("Fibonacci sequence: ");
    for (int i = start; i < start + count; i++) {
        printf("%d ", fib(i));
    }
    return 0;
}
