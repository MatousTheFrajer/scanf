#include "stdio.h"
#include <math.h>

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
        printf("obvod: %d\n", a + b + c);
        float s = (2 * (a * b)) / 2;
        printf("obsah: %d\n", sqrt(s * (s - a) * (s - b) * (s - c)));
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
