#include <stdio.h>
#include <stdlib.h>

int main()
{
   int numero;

   printf("Informe um numero: ");
   scanf("%d", &numero);

   if(numero % 2 == 0)
   {
       printf("Este numero e par.\n");
   }
   else
   {
       printf("Este numero e impar\n");
   }
    return 0;
}
