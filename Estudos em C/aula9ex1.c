#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int ler_numero()
{
    int num;
    printf("Insira um valor para o qual deseja saber se � par ou impar: ");
    scanf("%d", &num);
    return num;

}

int parimpar(int num)
{
    int backup;
    backup=num;
    if (backup%2==0)
    {
        printf("o numero %d � 1(par)",num);
    }
    else
    {
       printf("o numero %d � 0(impar)",num);
    }
    return backup;

}

int main()
{

    setlocale(LC_ALL,"portuguese");
    int num;

    num=ler_numero();
    system ("cls");
    parimpar(num);

    printf("\n\n");



    printf("\n\n");

    system("pause");
    return 0;


}



