#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL,"portuguese");
    int i,qtd;

    printf("Elabore um algoritmo, da forma mais eficiente possível,  que imprima os 10 primeiros números pares. ");
    printf("\n\tquantos numeros pares vc deseja imprimir:\n\t");
    scanf("%d",&qtd);

    printf("\n\t-------------------");


    printf("\n\n os %d primeiros numeros pares:",qtd);
    for(i=1;i<=qtd;i++)
    {
        printf("\n\t%3d",i*2);
    }
    printf("\n\t-------------------");
    printf("\n\t");




    system("pause");

    return 0;

}
