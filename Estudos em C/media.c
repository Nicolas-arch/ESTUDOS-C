#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    float n1,n2,media;

    printf("Digite a primeira nota:");
    scanf("%f", &n1);
    printf("Digite a segunda nota:");
    scanf("%f", &n2);

    media=(n1+n2)/2;

    printf("\n\t A media final vai ser igual a %.2f%",media);
    if(media >=5.0)
    {
        printf("\n\t =>PARABENS VC FOI APROVADO!!");
    }
    else
    {
        printf("\n\t =>PARABENS VC FOI reprovado!!");
    }

    system("pause");

    return 0;


}
