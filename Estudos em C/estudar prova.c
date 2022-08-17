#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

struct loc
{
    int num;
    struct loc* prox;
};
typedef struct loc lista;

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
lista* busca(lista*recebida, int v )
{
    lista*p;
    for(p=recebida;p!=NULL;p=p->prox)
    {
        if(p->num==v )
        {
            return p;
        }

    }

    return NULL;
}
lista*libera(lista*recebida)
{
    lista*aux;
    while(recebida!=NULL)
    {
        aux=recebida;
        recebida=recebida->prox;
        free(aux);
    }
    return NULL;
}
lista* deleteFirst(lista* recebida)
{
    if(recebida !=NULL)
    {
        lista* aux=recebida;
        recebida= recebida->prox;
        free(aux);
    }
    return recebida;
}

lista* insertOnFinal(lista* recebida, int value)
{
    lista *novo;
    lista *aux;
    novo=(lista*)malloc(sizeof(lista));
    novo->num=value;
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

int vazia( lista*recebida)
{
    if(recebida==NULL)
    {
        return 1;
    }else{

        return 0;
    }
}


void imprime(lista*recebida)
{

    lista*p;
    for(p=recebida;p!=NULL;p=p->prox)
        printf(" %d",p->num);

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

void printSomeOne(lista * recebida, int n)
{
    int auxNumber;
    for(auxNumber=1; recebida!=NULL && auxNumber<=n;auxNumber++)
    {
        recebida=recebida->prox;
        if(auxNumber==n)
        {
            printf("\n %d o Numero: %d\n", n,recebida->num);
        }

    }

}

void printLastOne(lista * recebida)
{
    lista *aux= recebida;
    while(recebida!=NULL)
    {
        recebida=recebida->prox;
        if(recebida==NULL)
        {
            printf("\nUltimo Numero: %d\n", aux->num);
        }

        else
        {
            aux=recebida;
        }

    }
}


int main()
{
    setlocale(LC_ALL,"portuguese");

    int quant;
    lista *inicio,*local;
    inicio=inicializa();
    inicio=insere(inicio,1);
    inicio=insere(inicio,2);
    inicio=insere(inicio,3);
    inicio=insere(inicio,4);
    inicio=insere(inicio,5);
    inicio=insere(inicio,6);
    inicio=insere(inicio,7);
    inicio=insere(inicio,8);
    inicio=insere(inicio,9);
    inicio=insere(inicio,10);
    inicio=insere(inicio,11);
    inicio=insere(inicio,12);
    inicio=insere(inicio,13);
    inicio=insere(inicio,14);
    imprime(inicio);

    local=busca(inicio,1);
    if(local!=NULL)
    {
       printf("\n\no numero buscado foi %d\n\n",local->num);
    }
    else
    {
        printf("\n\nnumero nao encontrado\n\n");
    }

    printf("Deletando o Primeiro:\n\n");
    inicio=deleteFirst(inicio);
    imprime(inicio);

    printf("\n\n inserindo no final:\n\n ");

    inicio=insertOnFinal(inicio,55);
    imprime(inicio);

    printf("\n\n");

    quant=sizeOfLista(inicio);
    printf("\n\n tamanho da  lista:\n\n\t %d\n\n",quant);



    printf(" imprimindo alguem chamado:\n\n");
    printSomeOne(inicio,11);
    printf("\n\n");

    printf("imprimindo o ultimo:\n\n");
    printLastOne(inicio);
    printf("\n\n");






    libera(inicio);
}
