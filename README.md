# Processamento Condicional - Exercícios em C

Este repositório contém uma aplicação desenvolvida em linguagem C para a disciplina de Linguagens de Programação, no 1º semestre do curso de Análise e Desenvolvimento de Sistemas (ADS). O projeto aborda a lógica de processamento condicional, utilizando estruturas `if/else`, e demonstra a aplicação de conceitos de programação modular.

---

### Funcionalidades do Programa

O programa apresenta um menu interativo que permite ao usuário selecionar e executar 6 exercícios de lógica condicional:

1.  Calcula se a soma de dois valores (A + B) é menor que um terceiro valor (C).
2.  Verifica se um número é par ou ímpar.
3.  Compara dois valores (A e B) e, se forem iguais, soma-os; caso contrário, multiplica-os.
4.  Calcula o dobro de um número se ele for positivo, e o triplo se for negativo.
5.  Soma 5 a um número par e 8 a um número ímpar.
6.  Calcula o Índice de Massa Corporal (IMC) com base no peso e na altura, e informa a classificação.

---

### Estrutura do Projeto

O código foi arquitetado com base no princípio de **programação modular**, separando as funcionalidades em arquivos específicos para promover a reutilização e a organização do código.

-   `main.c`: Contém a função principal que inicializa e executa o menu da aplicação.
-   `menu.c` / `menu.h`: Contém a lógica de navegação do menu e a interface de seleção de exercícios.
-   `questions.c` / `questions.h`: Contém a implementação de cada um dos 6 exercícios lógicos.
-   `tools.c` / `tools.h`: Contém funções utilitárias e robustas para entrada de dados (`inputInt`, `inputFloat`) e formatação visual (`lineBreak`).

---

### Autor

**Guilherme Augusto Gouvea**
[![GitHub](https://img.shields.io/badge/GitHub-100000?style=for-the-badge&logo=github&logoColor=white)](https://github.com/guilhermegouve4)