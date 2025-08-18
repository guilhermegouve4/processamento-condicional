#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "menu.h"
#include "questions.h"


int main() {
    setlocale(LC_ALL, "Portuguese");

    displayIntro();
    menu();

}
