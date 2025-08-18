#include <stdio.h>
#include <stdlib.h>
#include "questions.h"
#include "menu.h"
#include "tools.h"

int displayIntro() {
    system("cls");
    printf("\n\nBem vindo a minha lista de exerc�cios de condicionais em C\n\n");
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
        printf("\n\nSelecione o exerc�cio que deseja consultar digitando o n�mero correspondente:\n\n\n\n\n\n\n");
        
        printf("1. L� os valores A, B, e C e imprime na tela se a soma de A + B � menor do que C.\n\n");
        printf("2. Informa se o n�mero inserido � par ou �mpar.\n\n");
        printf("3. L� os valores A e B. Se os valores forem iguais calcula sua soma, caso contr�rio, calcula sua multiplica��o.\n\n");
        printf("4. Calcula o dobro de um n�mero caso este seja positivo e seu triplo caso seja negativo.\n\n");
        printf("5. Recebe um valor e soma 5 caso seja par. Soma 8 se for �mpar.\n\n");
        printf("6. Com base na altura e no peso, calcula o IMC\n\n");
        printf("7. Selecione para sair.\n\n");

        choice = inputInt("Insira o n�mero do exerc�cio: \n\n" );
        
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
            printf("\n\nComando inv�lido! Digite novamente:\n\n");
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
        printf("2. N�o\n\n");
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
            printf("COMANDO INV�LIDO! Digite 1 para SIM ou 2 para N�O\n\n\n\n");
            system("pause");
        }
    } while (quit != 1 && quit != 2);

    return 0;

}
