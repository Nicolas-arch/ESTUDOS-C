#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int num, sucessor, antecessor,soma;

    printf("obrigado por usar esse programa!!");
    printf("\n porfavor digite um numero:");
    fflush(stdout);
    scanf("%d",&num);
    fflush(stdin);

    sucessor = (3*num) + 1;

    antecessor = (2*num) - 1;

    soma = sucessor + antecessor;

    printf ("\n\t A soma dos dois sera igual a %0.d",soma);

    system("pause");
    return 0;

}
