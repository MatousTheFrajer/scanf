#include "stdio.h"

int main() {
    int vstup, a, b, c;
    printf("vyber si:\n");
    printf("1) trojuhelnik\n");
    printf("2) obdelnik\n");
    printf("3) kruznice\n");
    scanf("%d", &vstup);
    if (vstup == 1) {
        // resime trojuhelnik 
        printf("zadej delku strany: ");
        scanf("%d", &a);
        printf("zadej druhou delku strany: ");
        scanf("%d", &b);
        printf("zadej treti delku strany: ");
        scanf("%d", &c);
        printf("vyska: %d\n", ((a + b + c) / 2)/2);
        printf("obvod: %d\n", a + b + c);
        printf("obsah: %d\n", a * a * a);
    }
    else if (vstup == 2) {
        // resime obdelnik
        printf("zadej delku strany: ");
        scanf("%d", &a);
        printf("zadej druhou delku strany: ");
        scanf("%d", &b);
        if (a == b) {
            printf("je to ctverec\n");
            printf("obvod: %d\n", 2 * (a * b));
            printf("obsah: %d\n", a * b);
            }
            else {
                // resime kruznici
                printf("zadej polomer: ");
                scanf("%d", &a);
                printf("obvod: %d\n", 2 * 3, 14 * a);
                printf("obsah: %d\n", 3, 14 * a * a);
            }
        }
    }

