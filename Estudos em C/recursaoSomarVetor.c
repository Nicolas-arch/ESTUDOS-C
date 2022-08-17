#include <stdio.h>
#include <stdlib.h>

int vetor(int n[],int tam){
    if(tam==0)
        return 0;
    else{
        return n[tam-1] +vetor(n,tam-1);
    }


}
int main(){

    int vet[10]={1,2,3,4,5,6,7,8,9,10},n;

    printf("soma do vetor: %d",vetor(vet,10));





    return 0;
}
