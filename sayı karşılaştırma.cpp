#include <stdio.h>

int main() {
    int a, b, c, max;

   
    printf("Birinci sayiyi girin: ");
    scanf("%d", &a);
    printf("Ikinci sayiyi girin: ");
    scanf("%d", &b);
    printf("Uc�nc� sayiyi girin: ");
    scanf("%d", &c);

   
    max = a;

    if(b > max) {
        max = b;
    }
    if(c > max) {
        max = c;
    }
    printf("En b�y�k sayi: %d\n", max);

    return 0;
}
