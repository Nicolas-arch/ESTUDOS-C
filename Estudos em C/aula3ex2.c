#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    float num;

    printf("\n\t digite um numero qualquer: \t");
    fflush(stdout);
    scanf("%f",&num);
    fflush(stdin);

    if (num<0)
    {
        printf("\n\t seu numero é negativo\n\t");
    }
    else
    {
        if (num>0)
        {
            printf("\n\t seu numero é positivo\n\t");
        }
        else
        {
            printf("\n\t seu numero é nulo\n\t");
        }
    }






    system("pause");
    return 0;
}
