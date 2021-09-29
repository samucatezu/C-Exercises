
#include <stdio.h>

void main() {
    float salarioMinimo, salarioFunc;
    char nameFunc[61];

    printf("Digite o nome do funcionario: ");
    scanf("%s", nameFunc);
    printf("Digite o salário do funcionario: ");
    scanf("%f", &salarioFunc);
    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salarioMinimo);

    if (salarioFunc <= (salarioMinimo * 3.0)) {
        salarioFunc += salarioFunc * 0.5;
    } else
    if (salarioFunc >= (salarioMinimo * 3.0) && salarioFunc <= (salarioMinimo * 10.0)) {
        salarioFunc += salarioFunc * 0.2;
    } else
    if (salarioFunc > (salarioMinimo * 10.0) && salarioFunc < (salarioMinimo * 20.0)) {
        salarioFunc += salarioFunc * 0.15;
    } else {
        salarioFunc += salarioFunc * 0.1;
    }

    printf("Novo salario de %s sera: %4.2f \n", nameFunc, salarioFunc);
}
