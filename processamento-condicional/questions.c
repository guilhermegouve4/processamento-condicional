#include <stdio.h>
#include <stdlib.h>
#include "questions.h"

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
        printf("A soma do valor %d com %d é menor do que %d\n\n", valueA, valueB, valueC);
    } else {
        printf("A soma do valor %d com %d não é maior do que %d\n\n", valueA, valueB, valueC);
    }
    system("pause");
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
}

int question4() {

    int num;
    int result;

    system("cls");
    printf("Exercício número 4:\n\n\n\n");

    printf("Insira um valor: \n\n");
    scanf("%d", &num);

    if (num >= 0) {
        result = num * 2;
    } else {
        result = num * 3;
        }
    printf("O resultado é: %d\n\n\n\n", result);
    system("pause");
    system("cls");
}

int question5() {

    int num;
    int result;

    system("cls");
    printf("Exercício número: 5\n\n\n\n");
    printf("Insira um valor: \n\n");
    scanf("%d", &num);

    if (num % 2 == 0) {
        result = num + 5;
    } else {
        result = num + 8;
    }

    printf("O resultado é: %d\n\n\n\n", result);
    system("pause");
}

int question6() { // FUNÇÃO QUE CALCULA O IMC 
    float weigth;
    float height;
    float imc;

    system("cls");
    printf("Exercício número 6:\n\n\n\n");

    printf("Insira sua massa: \n\n");
    scanf("%f", &weigth);

    printf("\nInsira sua altura em centímetros (Ex: 175): \n\n");
    scanf("%f", &height);

    height = height / 100;
    imc = weigth / (height * height);

    if (imc > 30) {
        printf("\n\nVocê está obeso\n\n\n\n");
    } else if (imc > 25) {
        printf("\n\nVocê está com sobrepeso\n\n\n\n");
    } else if (imc > 18.5) {
        printf("\n\nParabéns! Você está com o peso ideal :)\n\n\n\n");
    } else {
        printf("\n\nVocê está abaixo do peso\n\n\n\n");
    }

    system("pause");
}
