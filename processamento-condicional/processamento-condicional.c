#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int question1();
int question2();
int question3();
int question4();
int question5();
int question6();
int index();
int menu();
int quitf();

int main() {
    setlocale(LC_ALL, "Portuguese");

    index();
    menu();

}

int question1() { //FUN��O DA PRIMEIRA QUEST�O

    int valueA;
    int valueB;
    int valueC;
    int result;

    printf("Insira o primeiro valor: \n\n");
    scanf("%d", &valueA);

    printf("Insira o segundo valor: \n\n");
    scanf("%d", &valueB);

    printf("insira o terceiro valor: \n\n");
    scanf("%d", &valueC);

    result = valueA + valueB;

    if (result < valueC) {
        printf("A soma do valor %d com %d � maior do que %d\n\n", valueA, valueB, valueC);
    } else {
        printf("A soma do valor %d com %d n�o � maior do que %d\n\n", valueA, valueB, valueC);
    }
    system("pause");
}

int question2() { // QUEST�O N�MERO 2

    int value;
    system("cls");
    printf("Exerc�cio n�mero 2:\n\n\n\n");

    printf("insira o valor: \n\n");
    scanf("%d", &value);

    if(value % 2 == 0) {
        printf("%d � par\n\n", value);
    } else {
        printf("%d � �mpar\n\n", value);
    }

    system("pause");
}

int question3() {

    int valueA;
    int valueB;
    int result;

    system("cls");
    printf("Exerc�cio n�mero 3:\n\n\n\n");

    printf("Insira o primeiro valor: \n\n");
    scanf("%d", &valueA);

    printf("Insira o segundo valor: \n\n");
    scanf("%d", &valueB);

    if(valueA == valueB) {
        result = valueA + valueB;
    } else {
        result = valueA * valueB;
        }
    printf("O resultado � %d\n\n", result);

    system("pause");
}

int question4() {

    int num;
    int result;

    system("cls");
    printf("Exerc�cio n�mero 4:\n\n\n\n");

    printf("Insira um valor: \n\n");
    scanf("%d", &num);

    if (num >= 0) {
        result = num * 2;
    } else {
        result = num * 3;
        }
    printf("O resultado �: %d\n\n\n\n", result);
    system("pause");
    system("cls");
}

int question5() {

    int num;
    int result;

    system("cls");
    printf("Exerc�cio n�mero: 5\n\n\n\n");
    printf("Insira um valor: \n\n");
    scanf("%d", &num);

    if (num % 2 == 0) {
        result = num + 5;
    } else {
        result = num + 8;
    }

    printf("O resultado �: %d\n\n\n\n", result);
    system("pause");
}

int question6() {
    float weigth;
    float height;
    float imc;

    system("cls");
    printf("Exerc�cio n�mero 6:\n\n\n\n");

    printf("Insira sua massa: \n\n");
    scanf("%f", &weigth);

    printf("\nInsira sua altura em metros (Ex: 1.75): \n\n");
    scanf("%f", &height);

    imc = weigth / (height * height);

    if (imc < 18.5) {
        printf("\n\nVoc� est� abaixo do peso\n\n\n\n");
    } else if (imc <= 25) {
        printf("Parab�ns! Voc� est� com o peso ideal :)");
    } else if (imc <= 30) {
        printf("Voc� est� com sobrepeso");
    } else {
        printf("Voc� est� obeso");
    }

    system("pause");
}

int index() {
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
        printf("\n\n\n\nSelecione o exerc�cio que deseja consultar digitando o n�mero correspondente:\n\n\n\n\n\n\n");
        
        printf("1. L� os valores A, B, e C e imprime na tela se a soma de A + B � menor do que C.\n\n");
        printf("2. Informa se o n�mero inserido � par ou �mpar.\n\n");
        printf("3. L� os valores A e B. Se os valores forem iguais calcula sua soma, caso contr�rio, calcula sua multiplica��o.\n\n");
        printf("4. Calcula o dobro de um n�mero caso este seja positivo e seu triplo caso seja negativo.\n\n");
        printf("5. Recebe um valor e soma 5 caso seja par. Soma 8 se for �mpar.\n\n");
        printf("6. Com base na altura e no peso, calcula o IMC\n\n");
        printf("7. Selecione para sair.\n\n");

        scanf("%d", &choice);
        system("cls");
        
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
            printf("Comando inv�lido! Digite novamente:\n\n");
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
