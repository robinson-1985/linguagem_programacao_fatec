#include <stdio.h>

#define par(n) ((n) % 2 == 0) 

int main(){
    int a;
    printf("Digite um número: ");
    scanf("%d",&a);

    printf (par(a) ? "\nO número é par! \n": "\nO número é ímpar! \n");
    
    return 0;
}