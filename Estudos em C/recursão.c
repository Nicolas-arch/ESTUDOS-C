#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int soma (int n)
{
    if(n==1)
    {
        return 1;
    }
    return n+soma(n-1);
}
int main()
{
    printf("\n\n Valor da soma de %d = %d",4, soma(4));
}
