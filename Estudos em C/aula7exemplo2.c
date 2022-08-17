#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL,"portuguese");
    int veta[5],vetb[5],vetc[5],i;

    //leitura do vetor A
    printf("entrada dos valores do vetor A:");
    for(i=0;i<5;i++)
    {
        printf("\n\t veta[%d]=",i);
        scanf("%d",&veta[i]);
    }
    printf("entrada dos valores do vetor b:");
    for(i=0;i<5;i++)
    {
        printf("\n\t vetb[%d]=",i);
        scanf("%d",&vetb[i]);
        vetc[i] = veta[i] + vetb[i];
    }

    printf("\n\t soma dos vetores:");
    for(i=0;i<5;i++)
    {
        printf("\n\n\t\t %d + %d = %d ",veta[i],vetb[i],vetc[i]);
    }


    system("pause");

    return 0;

}
