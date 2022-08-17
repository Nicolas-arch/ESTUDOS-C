#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    float l1,l2,l3,volume;

    printf("\n\tDigite o tamanho do primeiro lado em cm:");
    fflush(stdout);
    scanf("%f",&l1);
    fflush(stdin);

    printf("\tDigite o tamanho do segundo lado em cm:");
    fflush(stdout);
    scanf("%f",&l2);
    fflush(stdin);

    printf("\tDigite o tamanho do terceiro lado em cm:");
    fflush(stdout);
    scanf("%f",&l3);
    fflush(stdin);

    volume = (l1*l2*l3);


    printf("\n\n\t co as medidas dos tres lados %.0f cm, %.0f cm, %.0f cm o volume total sera %.0f cm³. \n\n",l1,l2,l3,volume);
    fflush(stdout);

    if (volume > 100)
        printf("\n\n\tPUTA volume GRANDONA VIADO!!!!!\n\n");

    else
        printf("\n\n\tobrigado por usar esse programa\n\n!");

    system("pause");
    return 0;


    }
