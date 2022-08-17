#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

#define MAX 5


void lerVetor (int entrada[])
{
    int i;

    printf("\n\n\tDigite um vetor de %d posições:", MAX);

    for(i=0; i<MAX; i++)
    {
        printf("\n\n\tPosição[%d]: ", i);
        scanf("%d", &entrada[i]);
    }
}

void numPerfeito (int entrada[], int *saida)
{
    int i, j, soma=0, count=0;

    for(i=0; i<MAX; i++)
    {
        if((entrada[i]!=1) && (entrada[i]!=0))
        {
        for(j=1; j<entrada[i]; j++)
        {
            if(entrada[i]%j==0)
            {
                soma=soma+j;
            }
        }
        if(soma==entrada[i])
        {
            count++;
        }
        soma=0;
        }
    }

    *saida=count;
}

void numQuasePerfeito(int entrada[],int *saida)
{
    int i, j, soma=0, aux=0;

    for(i=0; i<MAX; i++)
    {
        if(entrada[i]!=1)
        {
            for(j=1; j<entrada[i]; j++)
            {
                if(entrada[i]%j==0)
                {
                    soma=soma+j;
                }
            }
            if(soma==(entrada[i]-1))
            {
                aux++;
            }
            soma=0;
        }
    }
    *saida=aux;
}

void numDeficiente(int entrada[],int *saida)
{
    int i, j, soma=0, aux=0;

    for(i=0; i<MAX; i++)
    {
        if(entrada[i]!=1)
        {
            for(j=1; j<entrada[i]; j++)
            {
                if(entrada[i]%j==0)
                {
                    soma=soma+j;
                }
            }
            if(soma<(entrada[i]))
            {
                aux++;
            }
            soma=0;
        }
    }
    *saida=aux;
}

void numAbundante(int entrada[],int *saida)
{
    int i, j, soma=0, aux=0;

    for(i=0; i<MAX; i++)
    {
        if(entrada[i]!=1)
        {
            for(j=1; j<entrada[i]; j++)
            {
                if(entrada[i]%j==0)
                {
                    soma=soma+j;
                }
            }
            if(soma>(entrada[i]))
            {
                aux++;
            }
            soma=0;
        }
    }
    *saida=aux;
}

void imprime(int entrada[], int a, int b, int c, int d)
{
    system("cls");
    int i;

    printf("\n\n\t\t-------------- DADOS INSERIDOS: --------------");

    for(i=0; i<MAX; i++)
    {
        printf("\n\n\t\tPosição[%d]: %d",i ,entrada[i]);
    }
    printf("\n");

    printf("\n\n\t\t---------------- RESULTADOS: -----------------");
    printf("\n\n\t\tQuantidade de Números Perfeitos...........: %d", a);
    printf("\n\n\t\tQuantidade de Números Quase Perfeitos.....: %d", b);
    printf("\n\n\t\tQuantidade de Números Deficientes.........: %d", c);
    printf("\n\n\t\tQuantidade de Números Abundantes..........: %d", d);

    printf("\n\n");
}

int main()
{
    setlocale(LC_ALL,"portuguese");

    int r_numPerfeito=0, r_numQuasePerfeito=0, r_numDeficiente=0, r_numAbundante=0, vet[MAX];

    lerVetor(vet);
    numPerfeito(vet, &r_numPerfeito);
    numQuasePerfeito(vet, &r_numQuasePerfeito);
    numDeficiente(vet, &r_numDeficiente);
    numAbundante(vet, &r_numAbundante);
    imprime(vet, r_numPerfeito, r_numQuasePerfeito, r_numDeficiente, r_numAbundante);

    system("pause");
}
