#include <stdio.h>
#include <stdlib.h>

int Fatorial(int n){
    if(n==0 || n==1)
        return 1;
    else{
        return n*Fatorial(n-1);
    }


}
int main(){

    int n;
    printf("dige um numero: ");
    scanf("%d",&n);

    printf("o Fatorial de %d: %d",n,Fatorial(n));





    return 0;
}
