
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    float ALT,COMP, AREA;

    printf("\n\tDigite a altura do triangulo em cm:");
    fflush(stdout);
    scanf("%f",&ALT);
    fflush(stdin);

    printf("\tDigite o comprimento do triangulo em cm:");
    fflush(stdout);
    scanf("%f",&COMP);
    fflush(stdin);

    AREA = (ALT*COMP)/2;


    printf("\n\n\tcom a altura %.1f cm e o comprimento %.1f cm a area sera igual a %.1f cm²\n\n",ALT,COMP, AREA);
    fflush(stdout);

    if (AREA > 100)
        printf("\n\n\tPUTA AREA GRANDONA VIADO!!!!!\n\n");

    else
        printf("\n\n\tobrigado por usar esse programa\n\n!");

    system("pause");
    return 0;


    }
