#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

struct no
{
    int num;
    struct no*prox;
};
typedef struct no lista;

lista*inicializa()
{
    return NULL;
}

lista* insere(lista* recebida, int valor)
{
    lista *novo;
    novo=(lista*)malloc(sizeof(lista));
    novo->num=valor;
    novo->prox=recebida;
    return novo;

}
lista*busca(lista*recebida,int search)
{
    lista*p;
    for(p=recebida;p!=NULL;p=p->prox)
    {
        if(p->num==search)
        {
            return p;
        }
    }
    return NULL;
}

lista*libera(lista*recebida)
{
    while(recebida!=NULL)
    {
        lista*aux;
        recebida=recebida->prox;
        free(aux);
    }
    return NULL;
}
lista*deleteFirst(lista*recebida)
{
    if(recebida!=NULL)
    {
        lista*aux=recebida;
        recebida=recebida->prox;
        free(aux);
    }
    return NULL;
}
lista* insertOnFinal(lista*recebida,int in)
{
    lista*aux;
    lista*novo;
    novo=(lista*)malloc(sizeof(lista));
    novo->num=in;
    novo->prox=NULL;
    if(recebida!=NULL)
    {
        aux=recebida;
        while(aux->prox!=NULL)
        {
            aux=aux->prox;
        }
    }else
    {
        aux->prox=novo;
        return recebida;
    }
    return novo;
}

int vazia(lista*recebida)
{
    if(recebida==NULL)
    {
        return 1;
    }
    return 0;
}

void imprime(lista*recebida)
{
    lista*p;
    for(p=recebida;p!=NULL;p=p->prox)
    {
        printf(" d%",p->num);
    }

}
int sizeOfLista(lista*recebida)
{
    int count;
    for(count=1;recebida!=NULL;count++)
    {
       recebida=recebida->prox;

    }
    return count;
}
void printSomeOne(lista*recebida,int n)
{
    int auxNum;
    for (auxNum=1;recebida!=NULL && auxNum <=n;auxNum++)
    {
        recebida=recebida->prox;
    }
}

void printLastOne(lista*recebida)
{
    lista*aux;
    while(recebida!=NULL)
    {
        recebida=recebida->prox;

        if(recebida==NULL)
        {
            printf("\n\no ultimo numedo da lista é %d\n\n",aux->num);
        }
        aux=recebida;
    }
}


main()
{
    setlocale(LC_ALL,"portuguese");

    lista *inicio,*local;
    inicio=inicializa();
    inicio=insere(inicio,1);
    inicio=insere(inicio,2);
    inicio=insere(inicio,3);
    inicio=insere(inicio,4);
    inicio=insere(inicio,5);
    imprime(inicio);
}
