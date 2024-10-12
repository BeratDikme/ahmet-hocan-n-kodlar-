#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    printf("Bir iþlem seçin (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Ýki sayý girin: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Hata! Sýfýra bölme yapýlamaz.\n");
            }
            break;
        default:
            printf("Geçersiz iþlem.\n");
            break;
    }

    return 0;
}
