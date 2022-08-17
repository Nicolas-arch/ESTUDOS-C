#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#define max 5

void leitorvetor()
{
    setlocale(LC_ALL,"portuguese");
    int vetnumero[max],i;


    printf("\n\t=> Entrada dos numeros inteiros:\n");
    for(i=1; i<max; i++)
    {
        printf("\n\tNumero inteiro[%d]= ",i);
        scanf("%d",&vetnumero[i]);
    }

}

void NumPerfeito(int vetnumero[])//feito
{
    int soma=0,i,j,count=0;



       for(j=1;j<max;j++)
        {
            if(vetnumero[i]%j == 0)
            {
            soma+=j;
            }
        }
        if(soma==vetnumero[i])
        {
            count++;
        }



    printf("\n\nA quantidade de numeros inteiros perfeitos é %d \n\n",count);


}

void NumQuasePerfeito(int vetnumero[])//fazer
{
    int soma=0,i,j,count=0;



    for(j=0;j<max;j++)
    {
        if(vetnumero[i]%vetnumero[i]-1==0 )
        {
            soma++;
        }
    }


    if(soma==vetnumero[i]-1)
    {
        count++;

    }
    printf("\n\nA quantidade de numeros inteiros quase perfeitos é %d \n\n",count);

}

void NumDeficiente(int vetnumero[])//feito
{
    int i,soma=0,count=0;



    for(i=1; i<max;i++)
    {
        if(vetnumero[i]%i==0)
        {
            soma+=i;
        }
    }

    if(soma<(vetnumero[i])-1)
    {
        count++;
    }

    printf("\n\nA quantidade de numeros inteiros deficientes é %d \n\n",count);

}

void NumAbundante(int vetnumero[])//feito
{
    int soma=0,i,count=0;



    for(i=1;i<max;i++)
    {
        if(vetnumero[i]%i==0)
        {
            soma+=i;
        }
    }

    if (vetnumero[i]>soma)
    {
        count++;
    }
    printf("\n\nA quantidade de numeros inteiros abundantes é %d \n\n",count);

}


int main()
{
    setlocale(LC_ALL,"portuguese");
    int vetnumero[max];


    leitorvetor();

    NumPerfeito(vetnumero);
    NumQuasePerfeito(vetnumero);
    NumDeficiente(vetnumero);
    NumAbundante(vetnumero);

}
