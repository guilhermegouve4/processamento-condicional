#include <stdio.h>
#include <stdlib.h>
#include "questions.h"
#include "menu.h"

int inputInt(char *prompt) { // VERIFICA ENTRADA VÁLIDA DE INTEIROS
    int data;
    int status;

    do {
        printf("%s", prompt);
        status = scanf("%d", &data);

        if (status != 1) {
            printf("Valor inválido, por favor tente novamente.\n");
            while (getchar() != '\n');
            system("pause");
            system("cls");
        }
        
    } while (status != 1);

    return data;

}

float inputFloat(char *prompt) { // VERIFICA ENTRADA VÁLIDA DE PONTOS FLUTUANTES

    float data;
    int status;

    do {
        printf("%s", prompt);
        status = scanf("%f", &data);

        if (status != 1) {
            printf("Valor inválido, por favor tente novamente.\n");
            while (getchar() != '\n');
            system("pause");
            system("cls");
        }

    } while (status != 1);

    return data;
}