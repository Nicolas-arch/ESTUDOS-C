#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //tela com os acentos em português
#define MAX 3






//i=linha e j=coluna

int main()
{
    setlocale(LC_ALL,"portuguese");
    int i,j,maior=0;
    int mat[MAX][MAX];
    int vet[MAX];




    printf("\n\tentrada dos valores da matriz : \n ");//Captura dos valores
    for(i=0;i<MAX;i++)
    {
        for(j=0;j<MAX;j++)
        {
            printf("mat[%d][%d]:",i,j);
            scanf("%d",&mat [i][j]);

        }
    }
    printf("\n\tMatriz : \n\t\t"); //mostrando valores capturados
    for(i=0;i<MAX;i++)
    {
        for(j=0;j<MAX;j++)
        {
            printf("%d ",mat[i][j]);
        }


       printf("\n\t\t");
    }

     printf("\n\nexercicio E:\n");//MOSTRANDO OS MAIORES VALORES DE CADA COLUNA


    for(j=0;j<MAX;j++)
    {
        for(i=0;i<MAX;i++)
        {
            if(mat[i][j]>maior)
            {
                maior=mat[i][j];
            }

        }
        vet [j] = maior;
    }
    for(i=0;i<MAX;i++)
    {
        printf("%d  ", vet[i]);
    }

    printf("\n\n");

    system("pause");
    return 0;
}
