#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#define max 15

int main(int a[])
{
    setlocale(LC_ALL,"portuguese");

    int i,j;



    printf("\n\n\tDigite um vetor de %d posi��es: ",max);

    for(i=0;i<max;i++)
    {
        printf("\n\n\tPosi��o[%d]: ",i);
        scanf("%d", &a[i]);
    }

    for(i=0;i<max;i++)
    {
        if((a[max]%3==0) && (a[max]%7==0))
        {
            printf("os numeros s�o %d", a[i]);
        }
    }

    return 0;
}

