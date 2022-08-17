#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int num;

    printf("Digite um numero:");
    scanf("%d",&num);

    if((num%5)==0)
    {
        printf("\n\n\t %d é multiplo de 5",num);
    }
    else
    {
        printf("\n\n\t %d não é multiplo de 5",num);

    }
    system("pause");
    return 0;


}
