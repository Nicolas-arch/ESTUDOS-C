#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL,"portuguese");
    int n,i;

    printf("\n\n\t digite quantos numeros a serem impressos: ");
    scanf("%d",n);
    printf("\t\t____________________________");
    printf("\n\t\t|   K   |   3*K   |   5*K   |");
    printf("\n\t\t____________________________");



    system("pause");

    return 0;

}
