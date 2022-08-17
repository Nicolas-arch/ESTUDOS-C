
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    float a,b,c,x1,x2,delta;

    printf("\n\tDigite o valor A:");
    fflush(stdout);
    scanf("%f",&a);
    fflush(stdin);

    printf("\n\tDigite o valor B:");
    fflush(stdout);
    scanf("%f",&b);
    fflush(stdin);

    printf("\n\tDigite o valor C:");
    fflush(stdout);
    scanf("%f",&c);
    fflush(stdin);

    delta = (b*b) - 4*a*c;

    x1 = -b + sqrt(delta)/2*a;
    x2 = -b - sqrt(delta)/2*a;

    if (delta > 0)
    {
        printf("\n\tcom o delta igual a %.0f  As raizes são %.0f e %.0f\n",delta,x1,x2);
    }
        if (delta == 0)
    {
        printf("\n\tcom o delta igual a %.0f  As raizes x1 e x2 são %.0f\n",delta,x2);
    }
    else
    {
        printf("\t\n   não existe raiz\n");
    }




    system("pause");
    return 0;


    }
