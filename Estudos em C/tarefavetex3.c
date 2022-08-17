#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //tela com os acentos em português

int main()
{
    setlocale(LC_ALL,"portuguese");
    int a[10],b[10],c[20];
    int i,impares=0,pares=0;

    printf("Digite os valores do primeiro vetor:");

    for(pares=1;pares<=10;pares++)
    {
        printf("\n\t a[%d]=",pares);
        scanf("%d",&a[pares]);
    }

    printf("Digite os valores do segundo vetor:");

    for(impares=1;impares<=10;impares++)
    {
        printf("\n\t b[%d]=",impares);
        scanf("%d",&b[impares]);
    }
    impares=1;
    pares=1;

    for(i=1;i<=20;i++)
    {
        if( i % 2 == 0 )
        {
            c[i]=a[pares];
            printf("\n c[%d]=%d",i,a[pares]);
            pares++;
        }
        else
        {
            c[i]=b[impares];
            printf("\n c[%d]=%d ",i,b[impares]);
            impares++;

        }

    }
    printf("\n\n");

    system("pause");
    return 0;
}
