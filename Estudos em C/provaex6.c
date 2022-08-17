#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int x[20];
    int y[20];
    int valorAtualX=0;
    int i;
    int divisiveisPorOito = 0;
    for(i=0;i<20;i++){
        printf("Digite o valor da posição %d do vetor:\n",i);
        scanf("%d",&x[i]);
    }


    for(i=0;i<20;i++){
        valorAtualX = x[i];
        if(valorAtualX <= 0){
            if(valorAtualX<0){
                y[i] = valorAtualX + 7;
            }
            if(valorAtualX == 0){
                y[i] = valorAtualX * 2;
            }
        }else{
            y[i] = valorAtualX - 3;
        }
    }
    printf("Vetor lido: \n");
    for(i=0;i<20;i++){
        printf("[%d] = %d\n",i,x[i]);
    }
    printf("Vetor construído: \n");
    for(i=0;i<20;i++){
        printf("[%d] = %d\n",i,y[i]);
    }
    printf("Valore de Y divisiveis por 8: \n");

    for(i=0;i<20;i++){
        if(y[i] % 8 == 0){
            divisiveisPorOito += 1;
        }
    }
    printf("%d",divisiveisPorOito);
    return 0;
}
