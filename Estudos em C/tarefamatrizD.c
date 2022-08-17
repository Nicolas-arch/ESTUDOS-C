#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //tela com os acentos em português
#define max 5





//i=linha e j=coluna

int main()
{
    setlocale(LC_ALL,"portuguese");
    int i,j;
    int mat[max][max];
    int vet[max];



    printf("\n\tentrada dos valores da matriz : \n ");
    for(i=1;i<max;i++)
    {
        for(j=1;j<max;j++)
        {
            printf("mat[%d][%d]:",i,j);
            scanf("%d",&mat [i][j]);

        }
    }
    printf("\n\tMatriz : \n\t\t");
    for(i=1;i<max;i++)
    {
        for(j=1;j<max;j++)
        {
            printf("%d ",mat[i][j]);
        }


       printf("\n\t\t");
    }

     printf("\n\nexercicio D:\n");


     printf("a soma das linhas é igual a  :");
       printf("\n");



    for(j=1;j<max;j++)
    {
        for(i=1;i<max;i++)
        {
            vet[j]= vet[j]+mat[i][j];

        }
        printf("%d ",vet[j]);
    }










    printf("\n\n");

    system("pause");
    return 0;
}
