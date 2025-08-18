#include <stdio.h>
#include <stdlib.h>
#include "questions.h"
#include "menu.h"
#include "tools.h"

int displayIntro() {
    system("cls");
    printf("Bem vindo a minha lista de exerc�cios de condicionais em C");
    lineBreak(2);
    printf("Universidade Unicesumar");
    lineBreak(2);
    printf("Guilherme A. Gouvea");
    lineBreak(8);

    system("pause");
    system("cls");
}

int menu() {
        int choice;
        int sureToQuit = 0;

        
    do {
        
        system("cls");
        printf("Selecione o exerc�cio que deseja consultar digitando o n�mero correspondente: ");
        lineBreak(6);
        
        printf("1. L� os valores A, B, e C e imprime na tela se a soma de A + B � menor do que C.");
        lineBreak(2);
        printf("2. Informa se o n�mero inserido � par ou �mpar.");
        lineBreak(2);
        printf("3. L� os valores A e B. Se os valores forem iguais calcula sua soma, caso contr�rio, calcula sua multiplica��o.");
        lineBreak(2);
        printf("4. Calcula o dobro de um n�mero caso este seja positivo e seu triplo caso seja negativo.");
        lineBreak(2);
        printf("5. Recebe um valor e soma 5 caso seja par. Soma 8 se for �mpar.");
        lineBreak(2);
        printf("6. Com base na altura e no peso, calcula o IMC.");
        lineBreak(2);
        printf("7. Selecione para sair.");
        lineBreak(5);

        choice = inputInt("Insira o n�mero do exerc�cio: " );
        lineBreak(2);
        
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
            printf("Comando inv�lido! Digite novamente: ");
            lineBreak(2);
            system("pause");
        }
    } while(sureToQuit == 0);

    return 0;
}

int quitf() {

    int quit;
    do {

        system("cls");
        printf("Tem certeza que deseja sair?");
        lineBreak(4);
        printf("1. Sim");
        lineBreak(2);
        printf("2. N�o");
        lineBreak(2);
        scanf("%d", &quit);
        
        if (quit == 1) {
            system("cls");
            printf("Obrigado por utilizar o programa :).");
            lineBreak(8);
            system("pause");
            return 1;
        } else if (quit == 2) {
            return 0;
        } else {
            system("cls");
            printf("COMANDO INV�LIDO! Digite 1 para SIM ou 2 para N�O");
            lineBreak(4);
            system("pause");
        }
    } while (quit != 1 && quit != 2);

    return 0;

}
