#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL,"portuguese");
    int num,inter1,inter2,inter3,inter4;

    inter1=0;
    inter2=0;
    inter3=0;
    inter4=0;
    num=0;
    while(num>=0)
    {
        printf("\n\n\t digite um numero: ");
        scanf("%d",&num);
        if(num>=0)
        {
            if(num<=25)
            {
                inter1++;
            }
            else
            {
                if(num<=50)
                {
                    inter2++;
                }
                else
                {
                    if(num<=75)
                       {
                           inter3++;
                       }
                        else
                        {
                            if(num<=100);
                            {
                                inter4++;
                            }
                        }
                }
            }
        }
        else
        {
            printf("\n\n\t =>numero negativo digitado. calculando resultado.......");
        }
    }
    printf("\n\n\t =>RESULTADO<=");
    printf("\n\n\t =>Intervalo [ 0; 25] = %d",inter1 );
    printf("\n\n\t =>Intervalo [ 26; 50] = %d",inter2 );
    printf("\n\n\t =>Intervalo [ 51; 75] = %d",inter3 );
    printf("\n\n\t =>Intervalo [ 76; 100] = %d\n\n",inter4 );







    system("pause");

    return 0;

}
