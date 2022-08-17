#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL,"portuguese");
    int i, a, b;

    printf("\n\t Digite um valor:");
    scanf("%d",&a);
    printf("\n\t Digite um segundo valor:");
    scanf("%d",&b);
    printf("\n\n\n Resultado:\n\t");

    if(a>b)
    {
        for(i=b;i<=a;i++)
        {
            printf(" %d ",i);
        }

    }
    else
    {
        for(i=a;i<=b;i++)
        {
            printf(" %d ",i);
        }
    }



    system("pause");

    return 0;

}
