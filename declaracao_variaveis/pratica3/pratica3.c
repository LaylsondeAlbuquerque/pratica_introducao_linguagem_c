#include <stdio.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "Portuguese");

    int a, b, c, d;

    a = 10;
    b = a + 1;
    c = b + 1;
    d = c + 1;
    a = b + c + d;

    printf("O valor da variável 'c' é: %d", c);

    return 0;
    
}