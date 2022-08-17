#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //tela com os acentos em português

int main()
{
    setlocale(LC_ALL,"portuguese");
    int a[10],cont=0,i;//como saber quando tenho que zerar uma variavel
    float IDmedia=0; //fazer o programa ler nome das pessoas e depois pegar as idades

    printf("\n\t\n Digite o valor das idades:");
    for(i=1;i<=10;i++)
    {
        printf("\n\n\t idade[%d]= ",i);
        scanf("%d",&a[i]);
        IDmedia=IDmedia+a[i];
    }
    IDmedia=IDmedia/10;
    for(i=1;i<=10;i++)
    {
        if (a[i]<IDmedia)
        {
            cont++;
        }
    }
    printf("\n\nAs idades impressas são:");
    for(i=1;i<=10;i++)
    {
        printf("%d, ",a[i]);
    }
    printf("\n\t a media das idades é %.2f\n",IDmedia);
    printf("\n\t as idades abaixo da media são %d",cont);


    printf("\n\n");

    system("pause");
    return 0;
}
