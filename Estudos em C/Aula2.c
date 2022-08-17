Lista*insere(lista*recebida, int valor)
{
    lista *novo
    novo=(lista*)malloc(sizeof(lista));
    novo->info = valor;
    novo->prox = recebida;
    return novo;


}


//função que verifica lista vazia

int vazia(lista*recebida)
{
    if(recebida== NULL)
    {

    }
}

lista*busca(int busca)
