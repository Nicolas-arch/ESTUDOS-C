#include <stdio.h>
#include <stdlib.h>

void imprimir(int x){
    if(x==0)//vai verificar se chegou no ponto de para(x=0)
        printf("%d ",x);//se for igual a zero vai imprimir o 0 na tela

    else{

        //printf("%d ",  x);
        imprimir(x-1);
        printf("%d ",  x);
    }

}
int main(){

    int n;
    printf("dige um numero: ");
    scanf("%d",&n);

    imprimir(n);





    return 0;
}
