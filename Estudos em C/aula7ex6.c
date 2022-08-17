#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //tela com os acentos em português

int main()
{
    setlocale(LC_ALL,"portuguese");
    int a[15];
    int pares=0,multiplos=0,i;

    printf("Digite os numeros do seu vetor:");
    for(i=1;i<=15;i++)
    {
        printf("\n\t a[%d]= ",i);
        scanf("%d",&a[i]);
        if (a[i]%2==0)
        {
            pares++;
        }
        if(a[i]%5==0)
        {
            multiplos++;
        }
    }
    i=15;
    printf("\n\n\t  os valores do  vetor com %d numeros \n\t",i);
    for(i=1;i<=15;i++)
    {
        printf("%d ",a[i]);
    }

    printf("\n\n\tforam usados %d numero pares \n  e %d numeros multiplos de 5",pares,multiplos);






    printf("\n\n");

    system("pause");
    return 0;
}
