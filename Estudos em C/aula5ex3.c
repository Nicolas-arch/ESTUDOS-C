#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL,"portuguese");
    int a,b,i;

    printf("\n\t Digite o valor da base:  ");
    scanf("%f",&base);

    printf("\n\n");
    system("pause");
    return 0;

}
