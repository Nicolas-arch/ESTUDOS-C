#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct no
{
    int info;
    struct no * prox;
};
typedef struct no Lista;



Lista* inicializa()
{
    return NULL;
}

Lista* insere(Lista* recebida, int valor)
{
    Lista *novo;
    //recebida=novo;
    novo=(Lista*)malloc(sizeof(Lista));
    novo->info=valor;
    novo->prox=recebida;

    return novo;
}




Lista* busca (Lista* recebida, int v)
{
    Lista* p;
    for (p= recebida; p!=NULL; p=p->prox)
    {
        if (p->info == v)
            return p;
    }
    return NULL; /* n�o achou o elemento */
}


Lista* libera(Lista *receb)
{
    Lista *aux;
    while(receb!= NULL)
    {
        aux=receb;
        receb=receb->prox;
        free(aux);
    }
    return NULL;
}

Lista* deleteFirst(Lista* recebida){

    if (recebida != NULL)
    {
        Lista* aux=recebida;
        recebida= recebida->prox;
        free(aux);
    }

    return recebida;
}

Lista* insertOnFinal(Lista* recebida, int value)
{
    Lista *novo;
    Lista *aux;
    novo=(Lista*)malloc(sizeof(Lista));
    novo->info=value;
    novo->prox=NULL;

    if(recebida != NULL)
    {
        aux = recebida;
        while(aux->prox!=NULL)

        {
            aux=aux->prox;
        }
        aux->prox=novo;
        return recebida;
    }
    return novo;

}


int vazia (Lista* recebida)
{
    if (recebida == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void imprime (Lista* recebida)
{
   Lista* p; /* vari�vel auxiliar para percorrer a lista */

   p= recebida;
   while(p!=NULL)
   {
        printf("info = %d\n", p->info);
        p=p->prox;

   }
}

int sizeOfLista(Lista * recebida){
    int count;
    for(count=1;recebida!=NULL;count++){
        recebida=recebida->prox;
    }

    return count;

}

int main()
{
    int quant;
    Lista *inicio=NULL;
    inicio = inicializa();
    inicio = insere(inicio,9);
    inicio = insere(inicio,6);
    inicio = insere(inicio,8);
    inicio = insere(inicio,5);
    inicio = insere(inicio,7);
    imprime(inicio);
    printf("\n\n");

    inicio = insertOnFinal(inicio,24);
    imprime(inicio);
    printf("\n\n");

    quant = sizeOfLista(inicio);
    printf("\n\n\tA lista possui %d n�meros\n\n", quant);

    inicio = deleteFirst(inicio);
    imprime(inicio);
    printf("\n\n");

    inicio = libera(inicio);
    if(vazia(inicio))
    {
        printf("\n\n\tLISTA VAZIA\n\n\t");
    }
}

