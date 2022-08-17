#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL,"portuguese");
    int num, i;

    printf("\n\n\t Digite o numero de numeros vao apararecer:");
    scanf("%d",&num);

    printf("\n\t os numeros no intervalo ate %d são:\n\t",num);

    for (i=0;i<=num;i++)
    {
        printf(" %d",i);
    }


    printf("\n\n");
    system("pause");
    return 0;

}
