#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //tela com os acentos em português

int main()
{
    setlocale(LC_ALL,"portuguese");
    int a[20],i, maior,menor,igual;

    printf("programa que mostra os numeors maiores,\n menores e iguais ao primeiro numero do vetor");

    printf("Digite os numeros do seu vetor:");

    for(i=1;i<=20;i++)
    {
        printf("\n\t a[%d]=",i);
        scanf("%d",&a[i]);

    }
    for(i=1;i<=20;i++)
    {
        if(a[1]>a[i])
        {
            menor=a[i];
            printf("o numero %d é menor que o 1º numero do vetor\n\n",menor);
        }
        if(a[1]<a[i])
        {
            maior=a[i];
            printf("o numero %d é maior que o 1º numero do vetor\n\n",maior);
        }
        if(a[1]==a[i])
        {
            igual=a[i];
            printf("o numero %d é igual que o 1º numero do vetor\n\n",igual);
        }
    }
    printf("\n\n");

    system("pause");
    return 0;
}
