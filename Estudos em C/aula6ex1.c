#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //tela com os acentos em portugu�s

int main()
{
    setlocale(LC_ALL,"portuguese");
    int i;
    printf("\n\t um algoritmo que imprime os n�meros de 10 a 60 ");



    for(i=10; i>=10 && i<=60; i++)
    {
        printf(" %d",i);
    }

    printf("\n\n");
    system("pause");
    return 0;
}
