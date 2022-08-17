#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int soma = 0, num;

    while( num > 0 )

    {
        printf( "Entre com um numero: " );
        scanf( "%d", &num );
        if (num>0)
        {
            soma=soma+num;
        }


    }
    printf("\n\n\ta soma dos numeros selecionados é   %d ",soma);


    printf("\n\n");



    system("pause");
    return 0;
}
