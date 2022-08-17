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

int numero_primo(int num)
{
    int i,resultado=0;
    for (i = 2; i <= num / 2; i++) {
    if (num % i == 0) {
       resultado++;
       break;
    }
 }

 if (resultado == 0)
    printf("%d é um número primo '1'\n", num);
 else
    printf("%d não é um número primo'0'\n", num);




 return num;
}



int main()
{

    setlocale(LC_ALL,"portuguese");
    int num;

    num=ler_numero();
    system ("cls");
    numero_primo(num);

    printf("\n\n");



    printf("\n\n");

    system("pause");
    return 0;


}










