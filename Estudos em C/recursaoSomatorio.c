#include <stdio.h>
#include <stdlib.h>

int somatorio(int n){
    if(n==0)
        return 0;
    else{
        return n +somatorio(n-1);
    }


}
int main(){

    int n;
    printf("dige um numero: ");
    scanf("%d",&n);

    printf("soma de 1 ate %d: %d",n,somatorio(n));





    return 0;
}
