#include <stdio.h>
#include <stdlib.h>

int paresvetor(int vet[],int tam, int soma, int quant){

    if(tam==0)
        return soma/quant;
    else{
            if(vet[tam-1]%2==0)

                return paresvetor(vet,tam-1,soma+vet[tam-1],quant+=1);
            else
                return paresvetor(vet,tam-1,soma,quant);
    }


}
int main(){

    int vet[10]={1,2,3,4,5,6,7,8,9,10};
    int soma;
    printf("media dos numeros pares do vetor: %d\n\ne a soma dos pares e: %d\n",paresvetor(vet,10,soma,0));


    //printf("soma dos pares: %d", paresvetor(0,0,soma,0));

    return 0;
}
