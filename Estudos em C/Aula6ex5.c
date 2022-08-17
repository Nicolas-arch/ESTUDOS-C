//BIBLIOTECAS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //tela com os acentos em português

int main()
{
    setlocale(LC_ALL,"portuguese");
    int numero,elevado=1,total,n;
    printf("\t\nprograma que calcula a potencialização de um numero");
    printf("\n\tdigite um numero a ser elevado:");
    scanf("%d",&numero);
    printf("\n\tdigite qunatas vezes o numero sera elevado:");
    scanf("%d",&n);

    while(elevado<n)
    {
        /*printf( "Total = %d\n", total );*/
        numero*numero=total;
        elevado++;

    }

    printf("o numero %d elevado a %d é igual a %d",numero,n
           ,total);





    printf("\n\n");
    system("pause");
    return 0;
}
