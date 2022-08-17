#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //tela com os acentos em português

int main()
{
    setlocale(LC_ALL,"portuguese");
    int a[5], b[5],c[5], i, qtd;

    printf("quantas multiplicações você quer que seja feita: ");
    scanf("%d",&qtd);

    printf("\n\tentrada dos valores do vetor a:");
    for (i=1;i<=qtd;i++)
    {
      printf("\n\ta[%d]=",i);
      scanf("%d",&a[i]);
    }
    printf("\n\tentrada dos valores do vetor b:");
    for (i=1;i<=qtd;i++)
    {
      printf("\n\tb[%d]=",i);
      scanf("%d",&b[i]);
      c[i] = a[i] * b[i];
    }
    printf("\n\tdados os numeros dos vetores,calculemos a multiplicação deles: ");
    for (i=1;i<=qtd;i++)
    {
        printf("\n\t\t %d X %d = %d",a[i],b[i],c[i]);
    }




    printf("\n\n");

    system("pause");
    return 0;
}
