#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL,"portuguese");
    int n,k;

    printf("\n\t Digite um numero natural:");
    scanf("%d",&n);

    printf("\tos numeros naturais são:\n\n");

    for(k=1;k<=n;k++)
    {
      printf("%2d ",k);
      if((k%10)==0)
      {
          printf("\n");
      }

    }





    system("pause");

    return 0;

}
