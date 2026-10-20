#include <stdio.h>
void otkaz(int n, int asos, char *buf) {
    const char raqamlar[] = "0123456789ABCDEF";
    char teskari[33];
    int i = 0;
    int manfiymi = 0;

    if (n < 0) {
        manfiymi = 1;
        n = -n;
    }

    if (n == 0) {
        teskari[i++] = '0';
    } else {
        while (n > 0) {
            int qoldiq = n % asos;
            teskari[i++] = raqamlar[qoldiq];
            n = n / asos;
        }
    }

    if (manfiymi) {
        teskari[i++] = '-';
    }

    int j = 0;
    while (i > 0) {
        buf[j++] = teskari[--i];
    }
    buf[j] = '\0';
}

int main(void) {
    int son;
    char ikkilik[33], sakkizlik[33], unaltilik[33];

    printf("Sonni kiriting: ");
    if (scanf("%d", &son) != 1) {
        printf("Xato: butun son kiriting!\n");
        return 1;
    }

    otkaz(son, 2, ikkilik);
    otkaz(son, 8, sakkizlik);
    otkaz(son, 16, unaltilik);

    printf("Ikkilik:    %s\n", ikkilik);
    printf("Sakkizlik:  %s\n", sakkizlik);
    printf("O'n oltilik: %s\n", unaltilik);
    printf("son o'zgaruvchisining manzili: %p\n", (void*)&son);
    return 0;
}