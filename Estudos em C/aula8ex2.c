#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //tela com os acentos em português
#define max 2
int main()
{
    setlocale(LC_ALL,"portuguese");
    int i,j,A[max][max],B[max][max],s[max][max];


    printf("\n\n\t entrada dos valores da matriz A: \n ");
    for(i=0;i<max;i++)
    {
        for(j=0;j<max;j++)
        {
            printf("A[%d][%d]:",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    printf("\n\n\t entrada dos valores da matriz B: \n ");
    for(i=0;i<max;i++)
    {
        for(j=0;j<max;j++)
        {
            printf("B[%d][%d]:",i,j);
            scanf("%d",&A[i][j]);
        }
    }





    printf("\n\n");

    system("pause");
    return 0;
}
