#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int real()
{
    float num;
    printf("Insira um valor para o qual deseja saber a parte fracionaria: ");
    scanf("%f", &num);
    printf("a parte inteira do numero %f ? %f ",num,num - (int)num);

    return num;

}


int main()
{

    setlocale(LC_ALL,"portuguese");
    float num;

    num=real();


    printf("\n\n");



    printf("\n\n");

    system("pause");
    return 0;


}



