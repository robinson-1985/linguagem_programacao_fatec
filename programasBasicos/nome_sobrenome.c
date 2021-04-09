#include <stdio.h>
#include <string.h>
 
int main()
{
      char nome[50], sobrenome[50], n[50];
      int i, j=0, x=0, tamanho, sobrenome_aux, auxiliar=0;
      printf("Digite seu nome completo: ");
      fflush(stdin);
      gets (nome);
      tamanho = strlen(nome);
 
      for(i= tamanho - 1; nome[i] !=' '; i--)
       {
        sobrenome[j] = nome[i];
        j++;
 
       }
      
      sobrenome_aux = strlen(sobrenome);
      fflush(stdin);
 
      auxiliar = tamanho - sobrenome_aux;
 
 
      for (i = 0; i< auxiliar; i++)
      {
          n[x] = nome[i];
          x++;
      } 

      fflush(stdin);
      printf("%s, %s", sobrenome, n);    
 
      getchar();
}          
 
 