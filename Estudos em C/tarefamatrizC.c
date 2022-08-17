
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //tela com os acentos em português
#define max 3



//i=linha e j=coluna

int main()
{
    setlocale(LC_ALL,"portuguese");
    int i,j,mat[max][max],soma;



    printf("\n\tentrada dos valores da matriz : \n ");
    for(i=0;i<max;i++)
    {
        for(j=0;j<max;j++)
        {
            printf("mat[%d][%d]:",i,j);
            scanf("%d",&mat [i][j]);

        }
    }
    printf("\n\tMatriz : \n\t\t");
    for(i=0;i<max;i++)
    {
        for(j=0;j<max;j++)
        {
            printf("%d ",mat[i][j]);
        }


       printf("\n\t\t");
    }

    printf("\n\nexercicio C:");


    for(i=0;i<max;i++)
    {
        for(j=0;j<max;j++)
        {
            if(i==j)
            {
               soma =soma + mat[i][j];
               printf("A soma da diagonal principal %2d. ",soma);
            }

        }
    }





    printf("\n\n");

    system("pause");
    return 0;
}
