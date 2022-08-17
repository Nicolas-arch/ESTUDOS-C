#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int ler_numero()
{
    int num1,num2;
    printf("Insira um primeiro numero que vai ser elevado ao quadrado: ");
    scanf("%d", &num1);
    printf("Insira um segundo numero: ");
    scanf("%d", &num2);
    return num1,num2;

}

int quad(int num1,num2)
{

    int quad,soma;

    quad= num1*num1;
    soma= quad+num2;

    printf("a soma do quadrado do primeiro numero com o segundo é igual a %d",soma);




}

int main()
{

    setlocale(LC_ALL,"portuguese");
    int num1,num2;

    num=ler_numero();
    system ("cls");
    quad(num1,num2);

    printf("\n\n");



    printf("\n\n");

    system("pause");
    return 0;


}




















