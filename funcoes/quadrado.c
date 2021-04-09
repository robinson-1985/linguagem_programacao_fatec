#include <stdio.h>

#define quadrado(n) ((n)*(n)) //quadrado(n) é uma variável, o programador que define.

main(){
    int numero, calculo;
    printf("\n Digite um número: ");
    scanf("%i", &numero);

    calculo = quadrado(numero);

    printf("\n O quadrado do número digitado: %i é igual a: %i \n"
    , numero, quadrado(numero));

    return 0;
}