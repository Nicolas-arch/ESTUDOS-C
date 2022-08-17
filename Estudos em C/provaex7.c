#include <stdio.h>
#include <stdlib.h>
#include <locale.h>




int main()
{
    setlocale(LC_ALL,"portuguese");
    int sum = 0;
    int i;
    int min = 1500;
    int max = 2500;
    for(i=min;i<2500;i++){
        if(i % 7 == 0 || i % 3 == 0){
            sum+=i;
        }
    }
    printf("A soma de todos os números naturais entre 1500 e 2500 que são múltiplos de 7 ou 3 é: \n %d",sum);
    return 0;
}
