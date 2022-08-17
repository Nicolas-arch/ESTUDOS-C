#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define max 5

int main()
{
    setlocale(LC_ALL,"portuguese");

    int i,j,k,l;
    int soma_despesa_1,soma_despesa_2;
    int despesa_1[max][max],receita_1[max][max],lucro_1[max][max];
    int despesa_2[max][max],receita_2[max][max],lucro_2[max][max];
    int soma_1,menor=9999,soma_coluna_1[max];
    int soma_2,maior=-9999,soma_linha_2[max];
    int vet_dep_lucro1[max],med_dep1[max],soma_lucro_1;
    int vet_dep_lucro2[max],med_dep2[max],soma_lucro_2;


    // Despesa empresa 1
    printf ("\nDigite valor das despesas da empresa 1:\n\n");
    for ( i=1; i<max; i++ )
    {
        for ( j=1; j<max; j++ )
        {
            printf ("\nDespesa[%d][%d] = ", i, j);
            scanf ("%d", &despesa_1[i][j]);
        }
    }

    printf("\n\tEmpresa 1:\n\t\t");
    for(i=1;i<max;i++)
    {
        for(j=1;j<max;j++)
        {
            printf(" %d ",despesa_1[i][j]);
        }
       printf("\n\t\t");
    }


    // Receita empresa
    printf ("\nDigite valor das receitas da empresa 1:\n\n");
    for ( i=1; i<max; i++ )
    {
        for ( j=1; j<max; j++ )
        {
            printf ("\nReceita[%d][%d] = ", i, j);
            scanf ("%d", &receita_1[i][j]);
        }
    }
        printf("\n\tEmpresa 1:\n\t\t");
    for(i=1;i<max;i++)
    {
        for(j=1;j<max;j++)
        {
            printf(" %d ",receita_1[i][j]);
        }
       printf("\n\t\t");
    }

    // Lucro empresa 1
    printf ("\nLucro da empresa 1:\n\n");
    for ( i=1; i<max; i++ )
    {
        for ( j=1; j<max; j++ )
        {
           lucro_1[i][j]=receita_1[i][j]-despesa_1[i][j];
        }
    }
        printf("\n\tEmpresa 1:\n\t\t");
    for(i=1;i<max;i++)
    {
        for(j=1;j<max;j++)
        {
            printf(" %d ",lucro_1[i][j]);
        }
       printf("\n\t\t");
    }

    //--------------------------------------------------------------------------------------------------\\


    //Despesa empresa 2
    printf ("\nDigite valor das despesas da empresa 2:\n\n");
    for ( k=1; k<max; k++ )
    {
        for ( l=1; l<max; l++ )
        {
            printf ("\nDespesa[%d][%d] = ", k,l);
            scanf ("%d", &despesa_2[k][l]);
        }
    }

    printf("\n\tEmpresa 2:\n\t\t");
    for(k=1;k<max;k++)
    {
        for(l=1;l<max;l++)
        {
            printf(" %d ",despesa_2[k][l]);
        }
       printf("\n\t\t");
    }


    // Receita empresa 2
    printf ("\nDigite valor das receitas da empresa 2:\n\n");
    for ( k=1; k<max;k++ )
    {
        for ( l=1; l<max; l++ )
        {
            printf ("\nReceita[%d][%d] = ", k, l);
            scanf ("%d", &receita_2[k][l]);
        }
    }
        printf("\n\tEmpresa 2:\n\t\t");
    for(k=1;k<max;k++)
    {
        for(l=1;l<max;l++)
        {
            printf(" %d ",receita_2[k][l]);
        }
       printf("\n\t\t");
    }

    // Lucro empresa 2
    printf ("\nLucro da empresa 2:\n\n");
    for ( k=1; k<max; k++ )
    {
        for ( l=1; l<max; l++ )
        {
           lucro_2[k][l]=receita_2[k][l]-despesa_2[k][l];
        }
    }
    printf("\n\tEmpresa 2:\n\t\t");
    for(k=1;k<max;k++)
    {
        for(l=1;l<max;l++)
        {
            printf(" %d ",lucro_2[k][l]);
        }
       printf("\n\t\t");
    }


    //----------------------------------------------------------------------------------------------\\

    printf("\n\n");
    for(i=1;i<max;i++)
    {
        for(j=1;j<max;j++)
        {
            soma_despesa_1 += despesa_1[i][j];
        }
    }
    printf(" Soma da despesa empresa 1: %d\n\n",soma_despesa_1);

    soma_despesa_2=0;
    printf("\n\n");
    for(k=1;k<max;k++)
    {
        for(l=1;l<max;l++)
        {
            soma_despesa_2 += despesa_2[k][l];
        }
    }
    printf(" Soma da despesa empresa 2: %d\n",soma_despesa_2);

    if (soma_despesa_1>soma_despesa_2)
    {
        printf("Empresa 2 com a menor despesa total: %d\n",soma_despesa_2);
    }
    else if (soma_despesa_1<soma_despesa_2)
    {
        printf("Empresa 1 com a menor despesa total: %d\n",soma_despesa_1);
    }
    else
    {
        printf("Empresas com a mesma soma de despesa total\n");
    }

    //----------------------------------------------------------------------------------------------\\
    //O trimestre que a empresa 1 teve o menor lucro

    printf("\n\n");
    for(j=1;j<max;j++)
    {
        soma_1=0;
        for(i=1;i<max;i++)
        {
            soma_1 += lucro_1[i][j];
        }
        soma_coluna_1[j] = soma_1;
    }
    for(j=1;j<max;j++)
    {
        if (soma_coluna_1[j]<menor)
        {
            menor=soma_coluna_1[j];
        }
    }
    printf("\n\no menor trimestre é %d\n\n",menor);

    //O departamento da empresa 2 com maior receita
    for ( k=1; k<max;k++ )
    {
        soma_2=0;
        for ( l=1; l<max; l++ )
        {
            soma_2 += receita_2[k][l];
        }
        soma_linha_2[k] = soma_2;
    }
    for(k=1;k<max;k++)
    {
        if (soma_linha_2[k]>maior)
        {
            maior=soma_linha_2[k];
        }
    }
    printf("\n\no maior da receita é \n\n%d\n\n",maior);

    // Para cada empresa o lucro médio por departamento no ano de 2020



    printf("\n\nEMPRESA 1\n\n");
    printf("\n lucro total de cada departamento da empresa 1:\n\n");

    for ( i=1; i<max; i++ )
    {
        soma_lucro_1=0;
        for(j=1;j<max;j++)
        {
            soma_lucro_1+=lucro_1[i][j];
        }
        vet_dep_lucro1[i]=soma_lucro_1;
    }
    for(i=1;i<max;i++)
    {
        printf(" %d ",vet_dep_lucro1[i]);
    }

    printf("\n\n Lucro medio de cada empresa por departamento:\n\n");

    for ( i=1; i<max; i++ )
    {
        for(j=1;j<max;j++)
        {
            med_dep1[i]= vet_dep_lucro1[i]/4;

        }
        printf(" %d ",med_dep1[i]);
    }










    printf("\n\nEMPRESA 2\n\n");
    printf("\n lucro total de cada departamento da empresa 2 :\n\n");


    for ( k=1; k<max; k++ )
    {
        soma_lucro_2=0;
        for(l=1;l<max;l++)
        {
            soma_lucro_2+=lucro_2[k][l];
        }
        vet_dep_lucro2[k]=soma_lucro_2;
    }
    for(k=1;k<max;k++)
    {
        printf(" %d ",vet_dep_lucro2[k]);
    }




    printf("\n\n Lucro medio de cada empresa por departamento:\n\n");

    for ( k=1; k<max; k++ )
    {
        for(l=1;l<max;l++)
        {
            med_dep2[k]= vet_dep_lucro2[k]/4;

        }
        printf(" %d ",med_dep2[k]);
    }


    printf("\n\n");

    system("pause");
    return 0;
}


