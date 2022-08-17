#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL,"portuguese");
    int Pmaior,Smaior,num,cont;

    Pmaior=-9999;
    Smaior=-9999;
    cont=1;
    while(cont<=6)
    {
        printf("\n\n\t Digite um numero:");
        scanf("%d",&num);
        if(num>Pmaior)
        {
            Smaior=Pmaior;
            Pmaior=num;
        }
        else
        {
            if(num>Smaior)
            {
                Smaior=num;
            }
        }
        cont++;
    }
    printf("\n\n o maior numero é %0.d",Pmaior);
    printf("\n\n o segundo maior numero é %0.d",Smaior);





    system("pause");

    return 0;

}
