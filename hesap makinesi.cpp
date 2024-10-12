#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    printf("Bir i�lem se�in (+, -, *, /): ");
    scanf("%c", &operator);

    printf("�ki say� girin: ");
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
                printf("Hata! S�f�ra b�lme yap�lamaz.\n");
            }
            break;
        default:
            printf("Ge�ersiz i�lem.\n");
            break;
    }

    return 0;
}
