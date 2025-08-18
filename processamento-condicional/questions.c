#include <stdio.h>
#include <stdlib.h>
#include "questions.h"
#include "tools.h"

void question1() { // QUESTÃO 1

    int valueA;
    int valueB;
    int valueC;
    int result;

    system("cls");

    valueA = inputInt("Insira o primeiro valor: \n\n");
    valueB = inputInt("Insira o segundo valor: \n\n");
    valueC = inputInt("Insira o terceiro valor: \n\n");
    
    result = valueA + valueB;

    if (result < valueC) {
        printf("A soma do valor %d com %d é menor do que %d\n\n", valueA, valueB, valueC);
    } else {
        printf("A soma do valor %d com %d não é maior do que %d\n\n", valueA, valueB, valueC);
    }
    system("pause");
}

void question2() { // QUESTÃO 2

    int value;
    system("cls");
    printf("Exercício número 2:\n\n\n\n");

    value = inputInt("Insira o valor: \n\n");

    if(value % 2 == 0) {
        printf("%d é par\n\n", value);
    } else {
        printf("%d é ímpar\n\n", value);
    }

    system("pause");
}

void question3() { // QUESTÃO 3

    int valueA;
    int valueB;
    int result;

    system("cls");
    printf("Exercício número 3:\n\n\n\n");

    valueA = inputInt("Insira o primeiro valor: \n\n");
    valueB = inputInt("insira o segundo valor: \n\n");

    if(valueA == valueB) {
        result = valueA + valueB;
    } else {
        result = valueA * valueB;
        }
    printf("O resultado é %d\n\n", result);

    system("pause");
}

void question4() { // QUESTÃO 4

    int num;
    int result;

    system("cls");
    printf("Exercício número 4:\n\n\n\n");

    num = inputInt("Insira um valor: \n\n");

    if (num >= 0) {
        result = num * 2;
    } else {
        result = num * 3;
        }

    printf("O resultado é: %d\n\n\n\n", result);
    system("pause");
    system("cls");
}

void question5() { // QUESTÃO 5

    int num;
    int result;

    system("cls");
    printf("Exercício número: 5\n\n\n\n");

    num = inputInt("Insira um valor: \n\n");

    if (num % 2 == 0) {
        result = num + 5;
    } else {
        result = num + 8;
    }

    printf("O resultado é: %d\n\n\n\n", result);
    system("pause");
}

void question6() { // QUESTÃO 6
    float weigth;
    float height;
    float imc;

    system("cls");
    printf("Exercício número 6:\n\n\n\n");

    weigth = inputFloat("Insira sua massa: \n\n");
    height = inputFloat("insira sua altura em centímetros\n\n");

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
