#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL,"portuguese");
    int num;


    printf("Elabore um programa que imprima os quadrados dos números inteiros de 5 à 12");
    printf("\n\t-------------------");

    for(num=5;num<=12;num++)
    {
        printf("\n\t%3d -- %3d",num,num*num);
    }
    printf("\n\t-------------------");
    printf("\n\t");



    system("pause");

    return 0;

}
