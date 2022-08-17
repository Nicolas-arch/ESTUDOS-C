#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL,"portuguese");
    int  n,soma,qtdi,num,cont;

    printf("\n\n\t Digite o valor total de numeros a ser lido:");
    scanf("%d",&n);
    cont=1;
    qtdi=0;
    soma=0;
    while(cont<=n)
    {
        printf("\n\n\tdigite o %do. numero",cont);
        scanf("%d",&num);
        if((num%2)==0)
        {
            soma=soma+num;
        }
        else
        {
            qtdi=qtdi+1;
        }
        cont++;

    }

    printf("\n\n\t a soma dos valores pares é %d",soma);
    printf("\n\n\t foram digitados %d numeros impares\n\n",qtdi);






    system("pause");

    return 0;

}
