#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


typedef struct Arvore
{
    int info;
    struct Arvore *esq;
    struct Arvore *dir;
}Arv;


typedef struct BaseArv{
    Arv*raiz
}BArv;



BArv* Criar_Arvore()
{
    BArv *aux;
    aux=(BArv*)malloc(sizeof(BArv));
    aux->raiz= NULL;
    return aux;
}

int ArvVazia(BArv *base)
{
    if(base->raiz==NULL){
        return 1;
    }
    return 0;

}

void insere (BArv *Arvore, int num)
{
    Arvore->raiz=aux_insere_ITERATIVO(Arvore->raiz,num);
}

Arv* aux_insere_ITERATIVO(Arv *no, int num)
{
    int flag;
    Arv *Pai;
    Arv *novo= (Arv*)malloc(sizeof(Arv));
    novo->info=num;
    novo->esq=NULL;
    novo->dir=NULL;
    if (no==NULL)
    {
        return novo;
    }else
    {
        Pai=no;
        flag=0;
        while(flag==0)
        {
            if(Pai->info != num)
            {
                if(Pai->info<num)
                {
                    if(Pai->dir==NULL)
                    {
                        Pai->dir=novo;
                        flag=1;
                    }
                    else
                    {
                        Pai=Pai->dir;
                    }
                }
                else
                {
                    if(Pai->esq==NULL)
                    {
                        Pai->esq = novo;
                        flag=1;
                    }
                    else
                    {
                        Pai=Pai->esq;
                    }
                }
            }
            else
            {
                flag=2;
            }
        }
        if(flag==2)
        {
            printf("\n\n\n\t Ja existe na arvore!!\n\n\t");
        }
    }
    return no;

}



void imprime_inOrder(Arv *no)
{
    Arv *Pai;
    Pai=no;
    if(Pai->esq!=NULL)
    {
        imprime_inOrder(Pai->esq);
    }
    printf(" %2d",Pai->info);
    if(Pai->dir!=NULL)
    {
        imprime_inOrder(Pai->dir);
    }
}
void liberaArvore(Arv *Raiz)
{
    Arv *Pai;
    Pai=Raiz;
    if(Pai->dir!=NULL)
    {
        liberaArvore(Raiz);
    }
    if(Pai->esq!=NULL)
    {
        liberaArvore(Raiz);
    }
    free(Pai);
}





int main(){

    setlocale(LC_ALL,"portuguese");
    int i,num;
    BArv* RAIZ;
    RAIZ= Criar_Arvore();

    if(ArvVazia(RAIZ))
    {
        printf("\n\t\n ÀRVORE VAZIA\n\t\n");
    }

    printf("\t\n Digite um numero maior que zero: \n\t");
    scanf("%d",&num);
    while(num>0)
    {
        insere(RAIZ,num);
        printf("\t\n Digite um numero maior que zero: \n\t");
        scanf("%d",&num);
    }
    system("cls");
    if (!ArvVazia(RAIZ))
    {
        printf("\n\n\n\t Pre-order:" );
        imprime_inOrder(RAIZ->raiz);
    }else{

    printf("\n\n\n\t ARVORE VAZIA\n\n\n\t");

    }

    liberaArvore(RAIZ->raiz);
    free(RAIZ);
    RAIZ=NULL;
}

