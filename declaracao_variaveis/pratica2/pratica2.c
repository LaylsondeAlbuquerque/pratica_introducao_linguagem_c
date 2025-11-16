#include <stdio.h>
#include <locale.h>

int main (){

    setlocale(LC_ALL, "Portuguese");

    char escolha = 'A';

    escolha += -2;

    printf("O valor final da variável é: %c", escolha);
}