#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    float media,soma=0,nota;
    int contador=1,numalunos;

    printf("digite a quantidade de alunos:");
    scanf("%d",&numalunos);

    while (contador<=numalunos)
    {
        printf("digite a nota do aluno %d:",contador);
        scanf("%f",&nota);
        soma = soma+nota;
        contador  =contador+1;
    }
    media=soma/numalunos;


    printf("\n\n\n\t A media da sala de %0.d alunos é %.1f",numalunos,media);

    system("pause");
    return 0;
}
