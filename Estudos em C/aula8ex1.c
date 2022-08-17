#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //tela com os acentos em português
#define max 4
int main()
{
    setlocale(LC_ALL,"portuguese");
    int i,j,mat[max][max],maior,lin,col;

    maior=-9999;

    printf("\n\n\t entrada dos valores da matriz: \n ");
    for(i=0;i<max;i++)
    {
        for(j=0;j<max;j++)
        {
            printf("mat[%d][%d]:",i,j);
            scanf("%d",&mat[i][j]);
            if (mat[i][j]>maior)
            {
                maior=mat[i][j];
                lin=i;
                col=j;
            }

        }
    }
    printf("\n\n\n resultado:");
    printf("\n\t Matriz: \n\t\t");


    return 0;
}
