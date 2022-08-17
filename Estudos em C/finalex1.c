#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#define max 15

int main(int a[])
{
    setlocale(LC_ALL,"portuguese");

    int i,j;



    printf("\n\n\tDigite um vetor de %d posições: ",max);

    for(i=0;i<max;i++)
    {
        printf("\n\n\tPosição[%d]: ",i);
        scanf("%d", &a[i]);
    }

    for(i=0;i<max;i++)
    {
        if((a[max]%3==0) && (a[max]%7==0))
        {
            printf("os numeros são %d", a[i]);
        }
    }

    return 0;
}

