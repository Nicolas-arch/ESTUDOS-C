#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int ler_numero()
{
    int num;
    printf("Insira um valor para o qual deseja calcular seu fatorial: ");
    scanf("%d", &num);
    return num;

}

int fatorial(int num)
{
    int fat,backup;
    backup=num;
    for(fat = 1; num > 1; num = num - 1)
    {
        fat = fat * num;
    }
    printf(" o fatorial do numero %d é %d",backup,fat);
    return fat;
}

int main()
{

    setlocale(LC_ALL,"portuguese");
    int num;

    num=ler_numero();
    system ("cls");
    fatorial(num);

    printf("\n\n");



    printf("\n\n");

    system("pause");
    return 0;


}



