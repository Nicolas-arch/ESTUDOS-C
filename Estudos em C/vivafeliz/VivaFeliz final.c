#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#define max 30

void salario(float vetDinheiro[])//funcionando
{
    int i;
    float media,soma;

    for(i=0;i<max;i++)//preencher vetor
    {
        printf("Qual é o valor do %d saláraio: ",i);
        scanf("%f",&vetDinheiro[i]);
    }
    //for (i=0;i<max;i++) // printar o vetor
    //{
    //    printf("VETOR FILHO %f\n",vetDinheiro[i]);
    //}
    for(i=0;i<max;i++)//somar os valores dentro do vetor
    {
        soma+=vetDinheiro[i];
    }
    media=soma/max;
    printf("\n\nA media de salario é: %f\n\n",media);


}

void filho(int vetFilho[])//olhar comentario na main
{
    int i,maisQuatro=0;

    for(i=0;i<max;i++)//preencher vetor
    {
        printf("Quantos filhos tem a familia %d: ",i);
        scanf("%d",&vetFilho[i]);
    }
    //for (i=0;i<max;i++) // printar o vetor
    //{
    //    printf("VETOR FILHO %i\n",vetFilho[i]);
    //}
    for(i=0;i<max;i++)//comparar os valores das posicoes dentro do vetor com mais de 4
    {
        if (vetFilho[i]>4)
        {
            maisQuatro++;
        }
    }
    printf("\n\nFamilia com mais de 4 filhos: %d\n\n",maisQuatro);
}

void idade(float vetDinheiro[],int vetIdade[])//funcionando
{
    int i,posicao;
    float maior;

    for(i=0;i<max;i++) //preencher vetor
    {
        printf("Quantos anos tem a pessoa que recebe o salario %d: ",i);
        scanf("%d",&vetIdade[i]);
    }
    //for (i=0;i<max;i++) // printar o vetor # O PROGRAMA NAO CONSEGUE PRINTAR O VETOR IDADE
    //{
        //printf("VETOR IDADE %i\n",vetIdade[i]);
    //}

    maior = vetDinheiro[0];
    posicao=0;
    for (i=0;i<max;i++)//maior valor do vetorDinheiro
    {
        if (maior<vetDinheiro[i])
        {
            maior=vetDinheiro[i];
            posicao=i;
        }
    }
    //printf("\n\n\nMAIOR %f",maior);
    //printf("\n\n\nPOSICAO %d",posicao);


    for (i=0;i<max;i++)//idade da pessoa com maior salário familiar
    {
        if (posicao==i)
        {
            printf("\n\nIdade da pessoa com o maior salario familiar: %d, R$ %.1f\n\n",vetIdade[i],maior);
        }
    }
}

void menorDinQtdFilho(float vetDinheiro[], int vetFilho[])//funcionando
{
    int i,posicao,numFilho;
    float menor;

    menor= vetDinheiro[0];
    posicao=0;
    for (i=0;i<max;i++)
    {
        if(menor>vetDinheiro[i])
        {
            menor=vetDinheiro[i];
            posicao=i;
        }
    }
    for (i=0;i<max;i++)
    {
        if(posicao==i)
        {
            printf("\n\nO menor sário: R$ %f - Numero de filhos: %d\n\n",menor,vetFilho[i]);
        }
    }



}

void percentualIdade(int vetIdade[])
{
    int i;
    float percentual,qtd=0;


    for(i=0;i<max;i++)
    {
        if((vetIdade[i]> 25) && (vetIdade[i]<40))
        {
            qtd++;
            percentual=(qtd/max)*100;

        }

    }
    printf("\n\nPercentual de famílias cujo o responsável possui  entre 25 e 40 anos é %.2f %% \n\n",percentual);
}

void percentualSalario(float vetDinheiro[],int vetFilho[])
{
    int i;
    float percentual2,qtd=0;

    for(i=0;i<max;i++)
    {
        if((vetDinheiro[i]>= 2550) && (vetFilho[i]==0))
        {
            qtd++;
        }


    }
    percentual2=(qtd/max)*100;

    printf("\n\nPercentual de famílias com salário familiar maior que R$2549,99 e que  não possui filhos: %.2f %%\n\n", percentual2);


}

void umOUdois(int vetFilho[])//ARRUMAR
{
    int i;
    int qtd=0;

    for(i=0;i<max;i++)
    {
        if((vetFilho[i]== 1)||(vetFilho[i]== 2))
        {
            qtd++;

        }

    }
    printf("\n\nNumero de familias com 1 ou 2 filhos: %d\n\n",qtd);

}

int main()
{
    setlocale(LC_ALL,"portuguese");

    int vetIdade[max];
    int vetFilho[max];
    float vetDinheiro[max];

    salario(vetDinheiro);
    filho(vetFilho);
    idade(vetDinheiro,vetIdade);
    menorDinQtdFilho(vetDinheiro,vetFilho);
    percentualIdade(vetIdade);
    percentualSalario(vetDinheiro,vetFilho);
    umOUdois(vetFilho);
}
