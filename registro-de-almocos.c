#include <stdio.h>

int main() {
    int almocos[7];
    int total = 0;
    float media;
    int i;

    // Registra os almocos de cada dia
    for (i = 0; i < 7; i++) {
        printf("Digite a quantidade de almocos do dia %d: ", i + 1);
        scanf("%d", &almocos[i]);
    }

    // Soma os almocos da semana
    for (i = 0; i < 7; i++) {
        total = total + almocos[i];
    }

    // Calcula a media semanal
    media = total / 7.0;

    // Mostra os resultados
    printf("\n--- Consumo de Almocos ---\n");

    for (i = 0; i < 7; i++) {
        printf("Dia %d: %d almocos\n", i + 1, almocos[i]);
    }

    printf("\nTotal da semana: %d almocos\n", total);
    printf("Media diaria: %.2f almocos\n", media);

    return 0;
}
