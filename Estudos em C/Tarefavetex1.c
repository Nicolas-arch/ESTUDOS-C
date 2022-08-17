#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //tela com os acentos em português

int main()
{
    setlocale(LC_ALL,"portuguese");
    int a[20],num,i,c=0;

    printf("\n\tPrograma que procura um numero em um no seu vetor!\n");





    printf("\n\t  entrada dos valores do seu vetor:");


    for (i=1;i<=20;i++)
    {
        printf("\n\ta[%d]=",i);
        scanf("%d",&a[i]);
    }


    printf("\n\t==>digite o numero que vc quer procurar no vetor:");
    scanf("%d",&num);


    for (i=1;i<=20;i++)
    {
        if (num==a[i])
        {
            printf("\n\t o numero %d esta na posição a[%d]",num,i);
            c=1;
        }
    }
    if(c==0)
    {
        printf("n achei essa caralha");
    }

    printf("\n\n");

    system("pause");
    return 0;
}
