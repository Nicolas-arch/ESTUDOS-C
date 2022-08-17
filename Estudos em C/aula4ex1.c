#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int total = 0, num,Pmaior=-990,Smaior=-990;

    while( total < 10 )

    {
        printf( "Entre com um numero: " );
        scanf( "%d", &num );
        if (num > Pmaior)
        {
            Smaior=Pmaior;
            Pmaior=num;
        }
        else
        {
            if (num>Smaior)
            {
                Smaior=num;
            }
        }
        total ++;
    }
    printf("\n\n\tO maior valor lido   %d ",Pmaior);
    printf("\n\n\tE o Segundo maior valor lido   %d ",Smaior);

    printf("\n\n");



    system("pause");
    return 0;
}
