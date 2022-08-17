#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#define max 2


int main()
 {
    setlocale(LC_ALL,"portuguese");
    int vetnumero[max],i=0;
//    int soma,div;

    printf("\n\t=> Entrada dos numeros inteiros:\n");
    for(i=0; i<max; i++)
    {
        printf("\n\tvetnumero[%d]=",i);
        scanf("%d",&vetnumero[i]);
    }
    for(i=0; i<max; i++)
    {
        printf("%d \n\n",vetnumero[i]);
    }



/*
  soma = 1;

  for (int i=2 ; i <= (numero/2+1) ; i++ ) {
    if ( numero % i == 0 ) {
      printf("%d - ",i);
      soma += i;
    }
  }
 printf("A soma dos divisores de %d (exceto ele mesmo) é %d\n",numero,soma);
*/
    system("pause");
    return 0;
}
