#include <stdio.h>
#include <locale.h>
int main(){

    setlocale(LC_ALL, "Portuguese");
    int cont = 1;
    cont = cont + 1;

    printf("A variável cont ao final possui o valor: %d", cont);

    return 0;

}