# Processamento Condicional - Exerc�cios em C

Este reposit�rio cont�m uma aplica��o desenvolvida em linguagem C para a disciplina de Linguagens de Programa��o, no 1� semestre do curso de An�lise e Desenvolvimento de Sistemas (ADS). O projeto aborda a l�gica de processamento condicional, utilizando estruturas `if/else`, e demonstra a aplica��o de conceitos de programa��o modular.

---

### Funcionalidades do Programa

O programa apresenta um menu interativo que permite ao usu�rio selecionar e executar 6 exerc�cios de l�gica condicional:

1.  Calcula se a soma de dois valores (A + B) � menor que um terceiro valor (C).
2.  Verifica se um n�mero � par ou �mpar.
3.  Compara dois valores (A e B) e, se forem iguais, soma-os; caso contr�rio, multiplica-os.
4.  Calcula o dobro de um n�mero se ele for positivo, e o triplo se for negativo.
5.  Soma 5 a um n�mero par e 8 a um n�mero �mpar.
6.  Calcula o �ndice de Massa Corporal (IMC) com base no peso e na altura, e informa a classifica��o.

---

### Estrutura do Projeto

O c�digo foi arquitetado com base no princ�pio de **programa��o modular**, separando as funcionalidades em arquivos espec�ficos para promover a reutiliza��o e a organiza��o do c�digo.

-   `main.c`: Cont�m a fun��o principal que inicializa e executa o menu da aplica��o.
-   `menu.c` / `menu.h`: Cont�m a l�gica de navega��o do menu e a interface de sele��o de exerc�cios.
-   `questions.c` / `questions.h`: Cont�m a implementa��o de cada um dos 6 exerc�cios l�gicos.
-   `tools.c` / `tools.h`: Cont�m fun��es utilit�rias e robustas para entrada de dados (`inputInt`, `inputFloat`) e formata��o visual (`lineBreak`).

---

### Autor

**Guilherme Augusto Gouvea**
[![GitHub](https://img.shields.io/badge/GitHub-100000?style=for-the-badge&logo=github&logoColor=white)](https://github.com/guilhermegouve4)