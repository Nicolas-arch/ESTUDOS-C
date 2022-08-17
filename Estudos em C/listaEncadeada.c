#include <stdio.h>
#include <stdlib.h>


typedef struct no{
    int valor;
    struct no *prox;

}No;

void inserir_no_inicio(No **lista,int num){

    No *novo=malloc(sizeof(No));
    if(novo){
        novo->valor=num;
        novo->prox=*lista;
        *lista=novo;
    }
    else{
        printf("erro");
    }
}

void insere_no_final(No**lista,int num){
    No *aux,*novo=malloc(sizeof(No));
    if(novo){
        novo->valor=num;//prenche o campo valor com o numero a ser inserido
        novo->prox=NULL;//prox é  nulo
        if(*lista==NULL){
            *lista=novo;


        }else{
            aux=*lista;
            while(aux->prox){
                aux=aux->prox;
            aux->prox=novo;
            }
        }
    }



}

void insere_no_meio(No **lista,int num,int ant){
    No *novo,*aux=malloc(sizeof(No));
    if(novo){
        novo->valor=num;
        if(*lista==NULL){
            novo->prox=NULL;
            *lista=novo;
        }else{

            aux=*lista;
            while(aux->valor != ant && aux->prox){
                aux=aux->prox;
            novo->prox=aux->prox;
            aux->prox=novo;
            }
        }


    }
    else{
        printf("erro");
    }

}


void imprimir(No *no){
    printf("\n\tLISTA: \n");
    while(no){
        printf("%d ",no->valor);
        no=no->prox;
    }
    printf("\n\n");
}


int main(){

    int opcao, valor, anterior;
    No *lista=NULL;
    do{
        printf("\n\t0-Sair\n\t1-inserir inicio\n\t2-Inserir final\n\t3-Inserir meio\n\t4-Imprimir\n");
        scanf(" %d ",&opcao);

        switch(opcao){
        case 1:
            printf("Digite um valor: ");
            scanf(" %d ",&valor );
            inserir_no_inicio(&lista,valor);
            break;
        case 2:
            printf("Digite um valor: ");
            scanf(" %d ",&valor );
            insere_no_final(&lista,valor);
            break;
        case 3:
            printf("Digite um valor e o valor de referencia: ");
            scanf(" %d ",&valor,&anterior );
            insere_no_meio(&lista,valor,anterior);
            break;
        case 4:
            imprimir(lista);
            break;
        default:
            if(opcao!=0)
                  printf("opcao invalida\n");
        }

    }while(opcao !=0);
        return 0;



}

