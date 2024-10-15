#include <stdio.h>

int main(void) {
    int a, b, num;
    printf(" inserisci i valori di a:");
    scanf("%d", &a);
    printf(" inserisci i valori di b:");
    scanf("%d", &b);
    printf(" inserisci i valori di num:");
    scanf("%d", &num);
    int i = a;
    /*while (i >= a && i <= b) {
        printf("i multipli di num sono: %d\n" ,num * i);
        i++;

    }*/
    for (i = a; i <= b; i++) {
        printf("i multipli di num sono: %d\n" ,num * i);
    }
    return 0;
}