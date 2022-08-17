#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    float Pterra,Plua;

    printf("\n\tDigite seu peso:");
    fflush(stdout);
    scanf("%f",&Pterra);
    fflush(stdin);



    Plua = Pterra*0.17;


    printf("\n\n\t caso você tenha a oportunidade de ir para lua seu peso passara a ser %.0f kg\n\n",Plua);
    fflush(stdout);

    if (Plua > 100)
        printf("\n\n\tPUTA Q PARIU GORDO ATE NA LUA!!!!!\n\n");

    else
        printf("\n\n\t obrigado por usar esse programa\n\n!");

    system("pause");
    return 0;


    }
