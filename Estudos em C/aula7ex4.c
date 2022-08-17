#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //tela com os acentos em português

#define max 20
int main()
{
    setlocale(LC_ALL,"portuguese");
    int i,j,n;
    int indo[max],volta[max];

    do
    {
        printf("\n\t qual o tamanho do seu vetor:");
        printf("\n\t digite um numero menor ou igual a 20:");
        scanf("%d",&n);
        if (n>20);
        {
            printf("\n\n\n\tvalor invalidor, porfavor digite novamente!\n\n");
        }
    }while(n>20);

    j=n-1;

    printf("digite os valores do seu vetor para ser lido ao contrario:");
    for(i=1;i<=n;i++)
    {
        printf("\n\tindo[%d]= ",i);
        scanf("%d",&indo[i]);
        volta[j] = indo[i];
        j=j-1;
    }

    printf("\n\n\t\t=>Resultados: \n");
    printf("\n\tvetor  original: ");
    for(i=1; i<=n; i++)
    {
        printf("%2d ",indo[i]);
    }
    printf("\n\tvetor invertido: ");
    for(i=0; i<n; i++)
    {
        printf("%2d ",volta[i]);
    }


    printf("\n\n");

    system("pause");
    return 0;
}
