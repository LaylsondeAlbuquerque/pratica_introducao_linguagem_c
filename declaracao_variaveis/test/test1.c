#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int a, b, c;
    a = b + c;
    b = 1;
    c = b + 1;

    printf("%d", a); // retorna um valor aleatório

    return 0;
}