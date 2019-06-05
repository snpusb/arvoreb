#include "arvoreb.h"

/*Dividir o no em dois*/
Arvore* dividir_no (Arvore *x, int i, Arvore *y) {
   /*Completar!!!!!!!!!!!!!!*/
  // x = inserir(x, y.chaves[T]);
  // Arvore *k = criar();

   printf("Completar\n");
   return x;
}

/*Descrição: inserir e organizar o vetor*/
Arvore* inserir_arvore_nao_cheia (Arvore *x, TIPO k)
{
    int i = 0;
    while((i<x->n)&&(k > x->chaves[i]))
      i ++;
    if(x->folha)
    {
      if(k<x->chaves[i])
      {
        TIPO aux = 0;
        aux = x->chaves[i];
        x->chaves[i] = k;
        i++;
        while(i<=x->n)
        {
          k = x->chaves[i];
          x->chaves[i] = aux;
          aux = k;
          i++;
        }
        (x->n)++;
      }
      else if(i == x->n)
      {
        x->chaves[i] = k;
        (x->n) ++;
      }
    }
    else
    {
      return inserir_arvore_nao_cheia(x->filhos[i],k);
    }
   //printf("Completar\n");
   return x;
}

/*Função para inserir uma chave em uma árvore B:*/
Arvore *inserir (Arvore *raiz, TIPO chave) {
   Arvore *r = raiz;
   if (r->n == (2*T - 1)) {
      Arvore *s = criar();
      s->folha = FALSE;
      s->filhos[0] = r;
      s = dividir_no (s, 0, r);
      s = inserir_arvore_nao_cheia (s, chave);
      return s;
   }
   else {
      return inserir_arvore_nao_cheia (r, chave);
   }
}
