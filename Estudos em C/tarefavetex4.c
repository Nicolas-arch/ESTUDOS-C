#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //tela com os acentos em português

int main()
{
    setlocale(LC_ALL,"portuguese");
    int a[10],b[10],c[10];
    int i,impar=1,par=1;

    printf("Digite os valores do vetor:");

    for(i=1;i<=10;i++)
    {
        printf("\n\t a[%d]=",i);
        scanf("%d",&a[i]);
    }



    for(i=1;i<=10;i++)
    {
        if (a[i] %2==0)
        {
            b[par]=a[i];
            printf("\n vetor par=%d",b[par]);
            par++;
        }
        else
        {
           c[impar]=a[i];
           printf("\n vetor impar=%d",c[impar]);
           impar++;
        }
    }

    printf("\n\n");

printf("foram usados %d numero impares \n  e %d numeros pares",i-impar,i-par);




    printf("\n\n");

    system("pause");
    return 0;
}
