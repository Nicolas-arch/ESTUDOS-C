#include <stdio.h>

#include <stdlib.h>

int main(int argc, char *argv[])
 {

 int vetor[5];

int i, x;

int flag=0;



       for(i=1;i<6;i++) {

 scanf("%i", &vetor[i]);

}

 printf("Digite um valor X para a busca:\n");

scanf("%i", &x);



       for(i=1; i<6; i++){


 if(x==vetor[i]){

 printf("valor encontrado na posicao %i\n", i);

 flag=1;

 }

}

 if(flag==0){

 printf("valor nao encontrado!\n");

}

return 0;

}
