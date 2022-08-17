#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //tela com os acentos em português
#define max 20




//i=linha e j=coluna

int main()
{
    setlocale(LC_ALL,"portuguese");
    int i,j,mat[max][max],backup;



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

    printf("\n\nexercicio A:");

    for(i=0;i<max;i++)
    {
            backup=mat[i][0];
            mat[i][0]=mat[i][2];
            mat[i][2]=backup;

       printf("\n\t\t");
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









    printf("\n\n");

    system("pause");
    return 0;
}
