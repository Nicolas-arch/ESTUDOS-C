#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#define max 5

int mediaSalario()
{
    int i=0,soma=0,total=0,maior,menor,posicao;
    int vetSalario[max];


    for(i=0;i<max;i++)//preencher vetor
    {
        printf("Qual é o valor do %d saláraio: ",i);
        scanf("%d",&vetSalario[i]);
    }

    for(i=0;i<max;i++)//soma dos valores do vetor
    {
        soma+=vetSalario[i];
    }
    total = soma/max;
    printf("\n\nA media de salario é: %d\n\n",total);

    maior = vetSalario[0];
    for (i=1;i<max;i++)//maior valor do vetor
    {
        if (vetSalario[i]>maior)
        {
            maior=vetSalario[i];
        }
    }

    menor = vetSalario[0];
    for (i=1;i<max;i++)//menor valor do vetor
    {
        if (vetSalario[i]<menor)
        {
            menor=vetSalario[i];
        }
    }

    for (i=1;i<max;i++)//posicao do valor no vetor
    {
        if (maior==vetSalario[i])
        {
            posicao=i;
        }
    }

    return (maior,menor,posicao);
}


int qtdFamiliaGrande()
{
    int i=0,maisQuatro;
    int vetFam[max];

    for(i=0;i<max;i++)
    {
        printf("Quantos filhos tem a familia %d: ",i);
        scanf("%d",&vetFam[i]);
    }
    for(i=0;i<max;i++)// ARRUMAR
    {
        if (i>=4)
        {
            maisQuatro+=i;
        }
    }
    printf("\n\nFamilia com mais de 4 filhos:%d\n\n",maisQuatro);
    return maisQuatro;
}

int idadeMaiorSalario(int posicao)
{
    int i=0;
    int *vetIdade[max];


    for(i=0;i<max;i++) //preencher vetor
    {
        printf("Quantos anos tem a pessoa que recebe o salario %d: ",i);
        scanf("%d",&vetIdade[i]);
    }


    for (i=0;i<max;i++)//idade da pessoa com maior salário familiar
    {
        if (posicao==i)
        {
            printf("\n\nIdade da pessoa com o maior salario familiar: %d\n\n",*vetIdade[i]);
        }
    }
    return *vetIdade;
}
/*
int menorSalQtdFilho(int menor,)//FAZER
{
    int i;

}
*/
int percentualidade(int *vetIdade)
{
    int count=0,i=0;
    float percentual;
    printf("Percentual de famílias cujo o responsável possui  entre 25 e 40 anos é");


    for (i=0;i<max;i++)
    {
        if(&vetIdade[i]>= 25 || &vetIdade[i]<=40)
        {
        count ++;
        printf("%d",count);
        }

    }
    percentual=(count/30)*100
    printf("o percentual de pessoas com idade entre 25 a 40 anos é %f%",percentual);


}
int percentualsalfilho(int *)
{
    int i=0,count2=0;
    float percentual;

    printf("Percentual de famílias com salário familiar maior que R$2549,99 e que  não possui filhos");


    for (i=0;i<max;i++)
    {
        if(&vetSalario[i]>= 2549,99)
        {
        count ++;
        printf("%d",count);
        }

    }



}

int main()
{

    setlocale(LC_ALL,"portuguese");

    printf("##################################\n");
    printf("#Pesquisa da prefeitura VivaFeliz#\n");
    printf("##################################\n\n");

    int salario,*vetIdade;



    salario=mediaSalario();
    vetIdade=qtdFamiliaGrande();
    idadeMaiorSalario(salario);
    percentualidade(&vetIdade);

}
