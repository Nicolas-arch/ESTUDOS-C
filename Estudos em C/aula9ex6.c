#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int ler_numero()
{
    int num;
    printf("Insira um valor para o qual deseja saber se é primo ou n: ");
    scanf("%d", &num);
    return num;

}

int soma_digito(int num)
{

    int soma,resto;

 //   num = int(input('numero: '))
    if (num > 0)
        {
            soma = 0;
            while (num != 0)
            {
                resto = num % 10;
                num = (num - resto)/ 10;
                soma = soma + resto;

            }
            printf("soma: %d",soma);
        }

    else
    {
        printf("numero invalido...");
    }



 return num;
}



int main()
{

    setlocale(LC_ALL,"portuguese");
    int num;

    num=ler_numero();
    system ("cls");
    soma_digito(num);

    printf("\n\n");



    printf("\n\n");

    system("pause");
    return 0;


}




















