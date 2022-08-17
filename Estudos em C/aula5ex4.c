#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL,"portuguese");
    float potencia,base;
    int expoente, i;

    printf("\n\t Digite o valor da base:  ");
    scanf("%f",&base);
    printf("\n\t Digite o valor do expoente:  ");
    scanf("%d",&expoente);

    potencia=1;
    for(i=1;i<=expoente; i++)
    {
        potencia=potencia*base;
    }

    printf("O resultado de %.1f^%d = %.1f",base,expoente, potencia);
    printf("\n\n");
    system("pause");
    return 0;

}
