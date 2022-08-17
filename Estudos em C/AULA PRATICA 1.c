#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int numero,antecessor,sucessor;

    printf("Digite um valor:");
    scanf("%d", &numero);

    antecessor = numero - 1;
    sucessor = numero + 1;

    printf("\n\tO antecessor de %d é %d\n",numero,antecessor);
    printf("\n\tO sucessor de %d é %d\n\n",numero,sucessor);

    return 0;


}
