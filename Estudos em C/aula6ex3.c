#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL,"portuguese");
    int i,num;
    printf("\n\t digite o valor a ser estudado:\n");
    scanf("%d",&num);
    printf("\n\n\t\ os divisores de %d são:",num);
    for(i=1; i<=num;i++)
    {
        if ((num%i)==0)
        {
            printf("  %d  ",i);
        }

    }




    system("pause");

    return 0;

}
