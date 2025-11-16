#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    float num1, num2;

    printf("Digite o primeiro número: ");
    // scanf("%f %f", &num1, &num2);
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf(" %f", &num2); // a função scanf() com um espaço na string para evitar buffer do enter
    // fflush(stdin); Após a primeira chamada da função scanf(), efetue a limpeza do buffer do teclado com essa instrução. (Caso seja linux: __fpurge())
    printf("a soma entre %.1f e %.1f é %.1f.", num1, num2, num1+num2);

    return 0;

}