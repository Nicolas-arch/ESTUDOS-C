#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    float numx,numy,numz;

    printf("digite um numero:");
    scanf("%f",&numx);
    printf("digite um segundo numero:");
    scanf("%f",&numy);
    printf("digite um terceiro numero para verificar se esta no intervalo:");
    scanf("%f",&numz);

    if (numx<numy)
    {
        if (numz<numx || numz>numy)
        {
            printf( "o numero %.1f não esta no intervalo entre %.1f e %.1f",numz,numx,numy);
        }
        else
        {
            printf( "o numero %.1f esta no intervalo entre %.1f e %.1f",numz,numx,numy);
        }
    }
    else //(numx>numy)
    {
        if (numz<numy || numz>numx)
        {
            printf( "o numero %.1f não esta no intervalo entre %.1f e %.1f",numz,numx,numy);
        }
        else
        {
            printf( "o numero %.1f esta no intervalo entre %.1f e %.1f",numz,numx,numy);
        }
    }

    system("pause");
    return 0;
}
