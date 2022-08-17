#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int num1, num2;

    printf("Digite o primeiro numero:");
    scanf("%d", &num1);
    printf("Digite o segundo numero:");
    scanf("%d", &num2);

    if (num1>num2)
    {
        printf("\n\t =>%d maior que %d\n\t",num1,num2);
    }
    else
    {
        if(num1<num2)
        {
          printf("\n\t =>%d maior que %d\n\t",num2,num1);
        }
        else
        {
            printf("\n\t =>OS NUMEROS SÃO IGUAIS");
        }
    }

    system("pause");
    return 0;
}
