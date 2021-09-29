#include <stdio.h>
#include <stdlib.h>

main () {
  float nmr;

  printf ("digite o numero: ");
  scanf ("%f", &nmr);
  if(nmr < 0) {
    printf("%.2f e um numero negativo . \n",nmr);
    } else if (nmr == 0) {
    printf("%.2f e igual a 0  .",nmr);
  } else{
    printf("%.2f e um numero positivo . \n",nmr);
  }
}
