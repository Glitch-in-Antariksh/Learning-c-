#include <stdio.h>
void centigradeToFahrenheit(){
    float c, f;
    printf("Enter temperature in Centigrade: ");
    scanf("%f", &c);
    f = (c * 9 / 5) + 32;
    printf("%.2f Centigrade = %.2f Fahrenheit\n", c, f);
}

void fahrenheitToCentigrade(){
    float f, c;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);
    c = (f - 32) * 5 / 9;
    printf("%.2f Fahrenheit = %.2f Centigrade\n", f, c);
}

int main(){
    int choice;
    printf("Choose conversion:\n");
    printf("1. Centigrade to Fahrenheit\n");
    printf("2. Fahrenheit to Centigrade\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if (choice == 1)
        centigradeToFahrenheit();
    else if (choice == 2)
        fahrenheitToCentigrade();
    else
        printf("Invalid choice.\n");
    return 0;
}
