#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    printf("Nechta son kiritasiz: ");
    scanf("%d", &n);

    int *massiv = malloc(n * sizeof(int));

    printf("Sonlarni kiriting:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &massiv[i]);
    }

    // Avval nechta juft, nechta toq borligini sanaymiz
    int juft_soni = 0, toq_soni = 0;
    for (int i = 0; i < n; i++) {
        if (massiv[i] % 2 == 0)
            juft_soni++;
        else
            toq_soni++;
    }

    // Aynan shuncha joyga massiv ochamiz
    int *juft = malloc(juft_soni * sizeof(int));
    int *toq = malloc(toq_soni * sizeof(int));

    // Sonlarni mos massivga joylaymiz
    int j = 0, t = 0;
    for (int i = 0; i < n; i++) {
        if (massiv[i] % 2 == 0)
            juft[j++] = massiv[i];
        else
            toq[t++] = massiv[i];
    }

    printf("Juft sonlar: ");
    for (int i = 0; i < juft_soni; i++)
        printf("%d ", juft[i]);
    printf("\n");

    printf("Toq sonlar: ");
    for (int i = 0; i < toq_soni; i++)
        printf("%d ", toq[i]);
    printf("\n");

    free(massiv);
    free(juft);
    free(toq);

    return 0;
}