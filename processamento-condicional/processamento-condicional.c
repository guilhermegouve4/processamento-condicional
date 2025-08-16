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

int main() {
    setlocale(LC_ALL, "Portuguese");
    int choice;

    index();

    printf("\n\n\n\nSelecione o exercício que deseja consultar digitando o número correspondente:\n\n\n\n\n\n\n");

    do {
        
        printf("1. Lê os valores A, B, e C e imprime na tela se a soma de A + B é menor do que C.\n\n");
        printf("2. Informa se o número inserido é par ou ímpar.\n\n");
        printf("3. Lê os valores A e B. Se os valores forem iguais calcula sua soma, caso contrário, calcula sua multiplicação.\n\n");
        printf("4. Calcula o dobro de um número caso este seja positivo e seu triplo caso seja negativo.\n\n");
        printf("5. Recebe um valor e soma 5 caso seja par. Soma 8 se for í­mpar.\n\n");
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
            printf("Programa encerrado :D");
        } else {
            printf("Comando inválido! Digite novamente:\n\n");
        }
    } while(choice != 7);

    return 0;

}

int question1() { //FUNÇÃO DA PRIMEIRA QUESTÃO

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
        printf("A soma do valor %d com %d é maior do que %d\n\n", valueA, valueB, valueC);
    } else {
        printf("A soma do valor %d com %d não é maior do que %d\n\n", valueA, valueB, valueC);
    }
    system("pause");

    main();
}

int question2() { // QUESTÃO NÚMERO 2

    int value;
    system("cls");
    printf("Exercício número 2:\n\n\n\n");

    printf("insira o valor: \n\n");
    scanf("%d", &value);

    if(value % 2 == 0) {
        printf("%d é par\n\n", value);
    } else {
        printf("%d é ímpar\n\n", value);
    }

    system("pause");

    main();
}

int question3() {

    int valueA;
    int valueB;
    int result;

    system("cls");
    printf("Exercício número 3:\n\n\n\n");

    printf("Insira o primeiro valor: \n\n");
    scanf("%d", &valueA);

    printf("Insira o segundo valor: \n\n");
    scanf("%d", &valueB);

    if(valueA == valueB) {
        result = valueA + valueB;
    } else {
        result = valueA * valueB;
        }
    printf("O resultado é %d\n\n", result);

    system("pause");

    main();
}

int question4() {

    int num;
    int result;

    system("cls");
    printf("Exercício número 4:\n\n\n\n");

    printf("Insira um valor: \n\n");
    scanf("%d", &num);

    if (num > 0) {
        result = num * 2;
    } else {
        result = num * 3;
        }

    system("pause");

    main();
}

int question5() {

    int num;
    int result;

    system("cls");
    printf("Exercí­cio número: 5\n\n\n\n");

    if (num % 2 == 0) {
        result = num + 5;
    } else {
        result = num + 8;
    }

    printf("O resultado é: %d", result);
    system("pause");

    main();
}

int question6() {
    int weigth;
    int height;
    int imc;

    system("cls");
    printf("Exercí­cio número 6:\n\n\n\n");

    printf("Insira sua massa: \n\n");
    scanf("%d", &weigth);

    printf("\n\nInsira sua altura: \n\n");
    scanf("%d", &height);

    imc = weigth / (height * height);

    if (imc < 18.5) {
        printf("Você está abaixo do peso\n\n\n\n");
    } else if (imc <= 25) {
        printf("Parabéns! Você está com o peso ideal :)");
    } else if (imc <= 30) {
        printf("Você está com sobrepeso");
    } else {
        printf("Você está obeso");
    }

    system("pause");
    main();
}

int index() {
    system("cls");
    printf("\n\nBem vindo a minha lista de exercí­cios de condicionais em C\n\n");
    printf("Universidade Unicesumar\n\n");
    printf("Guilherme A. Gouvea\n\n\n\n\n\n\n\n");

    system("pause");
    system("cls");
}
