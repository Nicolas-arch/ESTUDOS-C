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
    novo=(Lista*)malloc(sizeof(Lista));
    novo->info=valor;
    novo->prox=recebida;

    return novo;
}

void imprime (Lista* recebida)
{
    Lista* p; /* variável auxiliar para percorrer a lista */
    for (p = recebida; p != NULL; p = p->prox)
        printf("info = %d\n", p->info);

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


Lista* busca (Lista* recebida, int v)
{
    Lista* p;
    for (p= recebida; p!=NULL; p=p->prox)
    {
        if (p->info == v)
            return p;
    }
    return NULL; /* não achou o elemento */
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


lista* deleteFirst(lista* recebida){
    lista* aux=recebida;
    recebida= recebida->prox;
    free(aux);
    return recebida;
}



int main()
{

    Lista *inicio, *local;
    inicio = inicializa();
    inicio = insere(inicio,9);
    inicio = insere(inicio,6);
    inicio = insere(inicio,8);
    inicio = insere(inicio,5);
    inicio = insere(inicio,7);
    local = busca(inicio,6);
    if(local!=NULL)
    {
        printf("o numero %d foi achado",local->info);
    }
    libera(inicio);

    inicio = deleteFirst(inicio,)


}
