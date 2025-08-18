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
    printf("Exercício número 1:");
    lineBreak(4);

    valueA = inputInt("Insira o primeiro valor: ");
    lineBreak(2);
    valueB = inputInt("Insira o segundo valor: ");
    lineBreak(2);
    valueC = inputInt("Insira o terceiro valor: ");
    lineBreak(2);
    
    result = valueA + valueB;

    if (result < valueC) {
        printf("A soma do valor %d com %d é menor do que %d.", valueA, valueB, valueC);
        lineBreak(2);
    } else {
        printf("A soma do valor %d com %d não é maior do que %d.", valueA, valueB, valueC);
        lineBreak(2);
    }
    system("pause");
}

void question2() { // QUESTÃO 2

    int value;
    system("cls");
    printf("Exercício número 2:");
    lineBreak(4);

    value = inputInt("Insira o valor: ");
    lineBreak(2);

    if(value % 2 == 0) {
        printf("%d é par.", value);
        lineBreak(4);
    } else {
        printf("%d é ímpar.", value);
        lineBreak(4);
    }

    system("pause");
}

void question3() { // QUESTÃO 3

    int valueA;
    int valueB;
    int result;

    system("cls");
    printf("Exercício número 3:");
    lineBreak(4);

    valueA = inputInt("Insira o primeiro valor: ");
    lineBreak(2);
    valueB = inputInt("insira o segundo valor: ");
    lineBreak(2);

    if(valueA == valueB) {
        result = valueA + valueB;
    } else {
        result = valueA * valueB;
        }
    printf("O resultado é %d.", result);
    lineBreak(4);

    system("pause");
}

void question4() { // QUESTÃO 4

    int num;
    int result;

    system("cls");
    printf("Exercício número 4: ");
    lineBreak(4);

    num = inputInt("Insira um valor: ");
    lineBreak(2);

    if (num >= 0) {
        result = num * 2;
    } else {
        result = num * 3;
        }

    printf("O resultado é: %d", result);
    lineBreak(4);

    system("pause");
    system("cls");
}

void question5() { // QUESTÃO 5

    int num;
    int result;

    system("cls");
    printf("Exercício número: 5");
    lineBreak(4);

    num = inputInt("Insira um valor: ");
    lineBreak(2);

    if (num % 2 == 0) {
        result = num + 5;
    } else {
        result = num + 8;
    }

    printf("O resultado é: %d", result);
    lineBreak(4);
    system("pause");
}

void question6() { // QUESTÃO 6
    float weigth;
    float height;
    float imc;

    system("cls");
    printf("Exercício número 6: ");
    lineBreak(4);

    weigth = inputFloat("Insira sua massa: ");
    lineBreak(2);
    height = inputFloat("insira sua altura em centímetros: ");
    lineBreak(2);

    height = height / 100;
    imc = weigth / (height * height);

    if (imc > 30) {
        printf("Você está obeso");
        lineBreak(4);
    } else if (imc > 25) {
        printf("Você está com sobrepeso");
        lineBreak(4);
    } else if (imc > 18.5) {
        printf("Parabéns! Você está com o peso ideal :)");
        lineBreak(4);
    } else {
        printf("Você está abaixo do peso");
        lineBreak(4);
    }

    system("pause");
}
