#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    float salario, percentual, novo;

    printf("Digite o salario:");
    scanf("%f",&salario);
    printf("Digite o percentual de aumento:");
    scanf("%f", &percentual);

    novo = salario*(1+percentual/100);

    printf("O seu salario era de %.2f.", salario);
    printf("\nAgora com o aumento de %.2f%% ficara %.2f", percentual, novo);

    system("pause");


    return 0;
}
