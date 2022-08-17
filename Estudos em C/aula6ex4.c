#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //tela com os acentos em português

int main()
{
    setlocale(LC_ALL,"portuguese");
    int i,numa,numb;
    printf("\n\t um algoritmo que imprime dois numeros e mostra o maior ");
    printf("\n\t digite o primeiro numero: ");
    scanf("%d",&numa);
    printf("\n\t digite o segundo numero: ");
    scanf("%d",&numb);





    if (numa>numb)
    {
        for(i=numa; i>=numa && i<=numb; i++)
        {
            printf(" %d",i);
            printf("\n\t =>%d maior que %d\n\t",numa,numb);
        }
    }
    else
    {
        if(numa<numb)
        {
          printf("\n\t =>%d maior que %d\n\t",numb,numa);
        }
        else
        {
            printf("\n\t =>OS NUMEROS SÃO IGUAIS");
        }

    }


    printf("\n\n");
    system("pause");
    return 0;
}
