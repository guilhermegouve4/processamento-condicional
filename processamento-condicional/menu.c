#include <stdio.h>
#include <stdlib.h>
#include "questions.h"
#include "menu.h"
#include "tools.h"

int displayIntro() {
    system("cls");
    printf("\n\nBem vindo a minha lista de exercícios de condicionais em C\n\n");
    printf("Universidade Unicesumar\n\n");
    printf("Guilherme A. Gouvea\n\n\n\n\n\n\n\n");

    system("pause");
    system("cls");
}

int menu() {
        int choice;
        int sureToQuit = 0;

        
    do {
        
        system("cls");
        printf("\n\nSelecione o exercício que deseja consultar digitando o número correspondente:\n\n\n\n\n\n\n");
        
        printf("1. Lê os valores A, B, e C e imprime na tela se a soma de A + B é menor do que C.\n\n");
        printf("2. Informa se o número inserido é par ou ímpar.\n\n");
        printf("3. Lê os valores A e B. Se os valores forem iguais calcula sua soma, caso contrário, calcula sua multiplicação.\n\n");
        printf("4. Calcula o dobro de um número caso este seja positivo e seu triplo caso seja negativo.\n\n");
        printf("5. Recebe um valor e soma 5 caso seja par. Soma 8 se for ímpar.\n\n");
        printf("6. Com base na altura e no peso, calcula o IMC\n\n");
        printf("7. Selecione para sair.\n\n");

        choice = inputInt("Insira o número do exercício: \n\n" );
        
        if (choice == 1) {
            question1();
        } else if (choice == 2) {
            question2();
        } else if (choice == 3) {
            question3();
        } else if (choice == 4) {
            question4();
        } else if (choice == 5) {
            question5();
        } else if (choice == 6) {
            question6();
        } else if (choice == 7) {
            if (quitf() == 1) {
                sureToQuit = 1;
            }
        } else {
            printf("\n\nComando inválido! Digite novamente:\n\n");
            system("pause");
        }
    } while(sureToQuit == 0);

    return 0;
}

int quitf() {

    int quit;
    do {

        system("cls");
        printf("\n\n\n\nTem certeza que deseja sair?\n\n\n\n");
        printf("1. Sim\n\n");
        printf("2. Não\n\n");
        scanf("%d", &quit);
        
        if (quit == 1) {
            system("cls");
            printf("Obrigado por utilizar o programa :).\n\n\n\n");
            system("pause");
            return 1;
        } else if (quit == 2) {
            return 0;
        } else {
            system("cls");
            printf("COMANDO INVÁLIDO! Digite 1 para SIM ou 2 para NÃO\n\n\n\n");
            system("pause");
        }
    } while (quit != 1 && quit != 2);

    return 0;

}
