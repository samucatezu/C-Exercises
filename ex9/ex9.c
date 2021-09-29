#include <stdio.h>
#include <stdlib.h>

    int main () {
   float num[ 15 ];
   int i;
   /* Lendo as notas do aluno */
   system("clear");
   for ( i = 1; i <= 15; i++ ) {
      printf("Entre com o %d numero:\n", i);
      scanf("%f", &num[i]);
   }
   /* Mostrando na tela as notas armazenadas */
   printf("Numeros declarados entre 10 e 150: \n");

   for (i = 1; i <= 15; i++ ) {
     if(num[i] >= 10 &&  num[i] <= 150){
      printf(" %d  %3.f  ", i, num[i] );
     }

   }
   return 0;
}

