#include <stdio.h>

#define par(n) ((n) % 2 == 0) 

int main(){
    int a;
    printf("Digite um número: ");
    scanf("%d",&a);

    if par(a) 
        printf("\nO número é par! \n");
    else
        printf("\nO número é ímpar! \n");
    
    return 0;
}