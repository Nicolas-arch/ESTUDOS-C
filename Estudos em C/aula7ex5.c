#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL,"portuguese");
  int numero;
  int soma;
  printf("Informe um n�mero inteiro");
  scanf("%d",&numero);
  printf("O n�mero informado foi %d\n",numero);

  soma = 1;

  for (int i=1 ; i <= (numero/2+1) ; i++ ) {
    if ( numero % i == 0 ) {
      printf("%d - ",i);
      soma += i;
    }
  }
  printf("A soma dos divisores de %d (exceto ele mesmo) � %d\n",numero,soma);
  return 0;
}
