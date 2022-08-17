/*
Crie um algoritmo que leia dois valores (x e y)
representando um intervalo.
Em seguida, leia um novo valor (z)
e verifique se z pertence ao intervalo [x,y].

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    char situacao;
    char* erro;
    char nome [101]; // cabe nome até 100 caracteres
    char txtDigitacao[1025];//cabe até 1 kbyte (1024 bytes)
    double dblDigitacao;
    int n1, n2, n3;

    setlocale(LC_ALL,"Portuguese");

    printf("\n digita teu nome: ");
    fflush(stdout);
    fgets  (nome,100,stdin);
    fflush(stdin);
    printf("Bem vindo a este programa, %s\n\n",nome);
    printf("\n PROGRAMA VAI TE MOSTRA SE O NUMERO 3 ESTA NO INTERVALO ENTRE N1 E N2");
    printf("\n digita 3 numeros para ver se o terceiro esta entre os outros dois:\n");
    fflush(stdout);

    situacao='D';
    while (situacao=='D')
    {
        printf("digite o primeiro numero:");
        fflush(stdout);
        fgets(txtDigitacao,1024,stdin);
        fflush(stdin);

        dblDigitacao=strtod(txtDigitacao,&erro);

    if (*erro!=10)
        printf("Era para digitar um número; tente novamente\n");
    else
    {
        n1=(int)dblDigitacao;

        if(n1!=dblDigitacao)
        {
            printf("Era para digitar um numero inteiro\n");
        }
        else
            situacao='P';
    }


    situacao='D'; // 'D' de É PARA DDDDDIGITAR
    while (situacao=='D')
    {
        printf("Digita o segundo numero: ");
        fflush(stdout);
        fgets (txtDigitacao,1024,stdin);
        fflush(stdin);

        dblDigitacao=strtod(txtDigitacao,&erro);
        if (*erro!=10) // foi digitado algum caractere não numérico
            printf("Era para digitar um número; tente novamente!\n");
        else
        {
            n2=(int)dblDigitacao;

            if (n2!=dblDigitacao)
                printf("Era para digitar um número inteiro; tente novamente!\n");
            else
                situacao='P'; // 'P' de É PARA PPPPPARAR DE DIGITAR
        }
    }



    situacao='D'; // 'D' de É PARA DDDDDIGITAR
    while (situacao=='D')
    {
        printf("Digita o terceiro numero: ");
        fflush(stdout);
        fgets (txtDigitacao,1024,stdin);
        fflush(stdin);

        dblDigitacao=strtod(txtDigitacao,&erro);
        if (*erro!=10) // foi digitado algum caractere não numérico
            printf("Era para digitar um número; tente novamente!\n");
        else
        {
            n3=(int)dblDigitacao;

            if (n3!=dblDigitacao)
                printf("Era para digitar um número inteiro; tente novamente!\n");
            else
                situacao='P'; // 'P' de É PARA PPPPPARAR DE DIGITAR
        }
    }



    }



    if (n1<n2)
    {
        if (n1<=n3 && n3<=n2)
        {
            printf("\n  O numero %d esta entre o intervalo de %d %d \n\n",n3, n1 ,n2);
        }
        else
        {
            printf("\n o numero %d nao esta entre o intervalo de %d %d \n\n",n3 , n1 ,n2);
        }
    }
    else
    {
        printf("\n Os limites do intervalo foram digitados de forma errada\n\n");
    }

    system("pause");

    return 0;

}
