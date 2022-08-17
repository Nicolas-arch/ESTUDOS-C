#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL,"portuguese");

    float precoVenda, custo=1,lucro;

    while(custo>0)
    {
        printf("Digite o valor do produto: ");
        scanf("%f",&custo);

        if(custo<30)
        {
            precoVenda= 1.75*custo;
            lucro = 0.75*custo;
            printf("Custo: %.2f \n Preco de venda: %.2f \n Lucro: %.2f \n",custo,precoVenda,lucro);
        }
        else if((custo>=30)&&(custo<=55))
        {
            precoVenda= 1.50*custo;
            lucro = 0.50*custo;
            printf("Custo: %.2f \n Preco de venda: %.2f \n Lucro: %.2f \n",custo,precoVenda,lucro);
        }
        else
        {
            precoVenda= 1.30*custo;
            lucro = 0.30*custo;
            printf("Custo: %.2f \n Preco de venda: %.2f \n Lucro: %.2f \n",custo,precoVenda,lucro);
        }


        system("pause");
        system("cls");
    }


    system("pause");
    return 0;
}
