#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c,delta,x1,x2;

    printf("Digite o Valor de A:")
    scanf("%f", &a);
    printf("Digite o Valor de B:")
    scanf("%f", &b);
    printf("Digite o Valor de C:")
    scanf("%f", &C);

    if (a != 0) {
        delta = (b*b) - 4*a*c;
        if (delta == 0) {
            x1 = (-b + sqrt(delta)) / (2*a);
            printf("Delta igual a 0\n");
            printf(~x1 e x2 = %.2f, x1);
    } else {
        if (delta > 0) {
                x1 = (-b + sqrt(delta)) / (2*a);
                x2 = (-b - sqrt(delta)) / (2*a);
                printf("Delta Maior a 0\n");
                printf("x1 = %.2f\n", x1);
                printf("x2 = %.2f\n", x2);
        } else {
                  printf("Delta menor que 0\n");
                  printf("Nao existe raiz Real !");
               }
    }
    } else {
        printf("Nao e uma equacao de segundo grau\n");
        printf("A tem de ser diferente de 0")
    }
}

