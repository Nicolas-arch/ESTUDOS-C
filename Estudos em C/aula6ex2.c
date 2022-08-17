#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL,"portuguese");
    int i;

    printf("Elabore um algoritmo, da forma mais eficiente possível,  que imprima os 10 primeiros números pares. ");
    printf("\n\tOs 10 primeiros numros pare:\n\t");
    printf("\n\t-------------------");

    for(i=1;i<=10;i++)
    {
        printf("\n\t%3d",i*2);
    }
    printf("\n\t-------------------");
    printf("\n\t");




    system("pause");

    return 0;

}
