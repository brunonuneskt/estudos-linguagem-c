#include <stdio.h>

int main() {
    int opcao = -1;
    int minutos = 0;
    int totalMinutos = 0;
    int quantidadeTreinos = 0;
    float calorias = 0;
    float totalCalorias = 0;

    printf("===== CONTROLE DE ATIVIDADE FISICA =====\n");
    printf("Bem-vindo ao sistema!\n");
    printf("Aqui voce pode registrar seus treinos e acompanhar as calorias gastas.\n");
    printf("Vamos comecar!\n");

    do {
        printf("\n===== MENU PRINCIPAL =====\n");
        printf("1 - Registrar treino\n");
        printf("2 - Consultar calorias gastas\n");
        printf("3 - Ver resumo dos treinos\n");
        printf("0 - Sair\n");

        printf("Escolha uma opcao: ");

        if (scanf("%d", &opcao) != 1) {
            printf("Entrada invalida! Digite apenas numeros.\n");

            while (getchar() != '\n') {
            }

            opcao = -1;
            continue;
        }

        switch (opcao) {
            case 1:
                printf("Digite o tempo do treino em minutos: ");

                if (scanf("%d", &minutos) != 1) {
                    printf("Entrada invalida! Digite apenas numeros.\n");

                    while (getchar() != '\n') {
                    }

                    break;
                }

                if (minutos > 0) {
                    calorias = minutos * 6;
                    totalMinutos += minutos;
                    totalCalorias += calorias;
                    quantidadeTreinos++;

                    printf("Treino registrado com sucesso!\n");
                    printf("Calorias estimadas: %.2f kcal\n", calorias);
                } else {
                    printf("Tempo invalido! Digite um valor maior que zero.\n");
                }
                break;

            case 2:
                printf("\nTotal de calorias: %.2f kcal\n", totalCalorias);
                break;

            case 3:
                printf("\n===== RESUMO DOS TREINOS =====\n");
                printf("Treinos realizados: %d\n", quantidadeTreinos);
                printf("Tempo total: %d minutos\n", totalMinutos);
                printf("Calorias estimadas: %.2f kcal\n", totalCalorias);
                break;

            case 0:
                printf("\n===== ENCERRAMENTO =====\n");
                printf("Total de treinos: %d\n", quantidadeTreinos);
                printf("Tempo total: %d minutos\n", totalMinutos);
                printf("Calorias estimadas: %.2f kcal\n", totalCalorias);
                printf("Obrigado por usar o sistema!\n");
                printf("Continue se exercitando e ate a proxima!\n");
                break;

            default:
                printf("Opcao invalida! Escolha entre 0 e 3.\n");
        }

    } while (opcao != 0);

    return 0;
}