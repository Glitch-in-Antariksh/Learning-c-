#include <stdio.h>
int factroial(int n) {
    if (n == 0 || n == 1) return 1;
    else return n * factroial(n - 1);
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The factorial of %d is: %d\n", num, factroial(num));
    return 0;
}