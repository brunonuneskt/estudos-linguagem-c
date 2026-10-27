#include <stdio.h>

int main() {
    float precos[10] = {25.90, 8.50, 5.99, 19.90, 4.50, 7.99, 3.99, 6.50, 12.90, 9.50};
    float temp;

    // Mostrar os precos originais
    printf("=== PRECOS ORIGINAIS ===\n");

    for (int i = 0; i < 10; i++) {
        printf("R$ %.2f\n", precos[i]);
    }

    // Ordenar do menor para o maior
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (precos[j] > precos[j + 1]) {
                temp = precos[j];
                precos[j] = precos[j + 1];
                precos[j + 1] = temp;
            }
        }
    }

    printf("\n=== ORDEM CRESCENTE ===\n");

    for (int i = 0; i < 10; i++) {
        printf("R$ %.2f\n", precos[i]);
    }

    // Ordenar do maior para o menor
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (precos[j] < precos[j + 1]) {
                temp = precos[j];
                precos[j] = precos[j + 1];
                precos[j + 1] = temp;
            }
        }
    }

    printf("\n=== ORDEM DECRESCENTE ===\n");

    for (int i = 0; i < 10; i++) {
        printf("R$ %.2f\n", precos[i]);
    }

    return 0;
}
