#include <stdio.h>
#include <locale.h>

#define max 5

typedef struct{
int matricula;
int numdepend;
float salario;
}cadastro;

int sal_menor_depend(cadastro familias[])
{
    int i,qtdDepend=9999;
    float menorS;
    for(i=0;i<max;i++)
    {
        if(familias[i].numdepend<qtdDepend)
        {
            menorS=familias[i].salario;
            qtdDepend=familias[i].numdepend;
        }
    }

    return menorS;
}

float media_sal(cadastro familias[]){
    int i;
    float media = 0;
    for(i=0;i<max;i++){
        media += familias[i].salario;
    }
    media = media / max;
    return media;
}

int main()
{
    setlocale (LC_ALL, "Portuguese");
    cadastro familias[max];
    int i;
    float media, menorSal;

    for(i=0;i<max;i++)
    {
        printf("\n\n\n");
        printf("Usuário %d\n",i);
        printf("Digite o numero de matricula: \n");
        scanf("%d",&familias[i].matricula);

        printf("Digite o numero de dependentes: \n");
        scanf("%d",&familias[i].numdepend);

        printf("Digite o salario: \n");
        scanf("%f",&familias[i].salario);
    }
    media=media_sal(familias);
    menorSal=sal_menor_depend(familias);
    system("cls");
    printf("O salário do cadastrado com menor número de dependentes é: %f\n\n", menorSal);
    printf("A média salária é: %f", media);

}
