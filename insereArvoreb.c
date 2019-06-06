#include "arvoreb.h"

/*Dividir o no em dois*/
Arvore* inserir_arvore_nao_cheia(Arvore *x, TIPO k)
{
	int i = 0;
	while ((i < x->n) && (k > x->chaves[i]))
		i++;
	if (x->folha)
	{
		if (k < x->chaves[i])
		{
			TIPO aux = 0;
			aux = x->chaves[i];
			x->chaves[i] = k;
			i++;

			while (i <= x->n)
			{
				k = x->chaves[i];
				x->chaves[i] = aux;
				aux = k;
				i++;
			}
			(x->n)++;
		}
		else if (i == x->n)
		{
			x->chaves[i] = k;
			(x->n)++;
		}
	}
	else
	{
		if (x->filhos[i]->n == (2 * T - 1))
		{
			x->filhos[i] = inserir(x->filhos[i], k);
			if (x->filhos[i]->chaves[0] < x->chaves[i]) {
				TIPO aux = 0;
				aux = x->chaves[i];
				x->chaves[i] = x->filhos[i]->chaves[0];
				Arvore *auxar,*vlr1,*vlr2;
				auxar = x->filhos[i + 1];
				vlr1 = x->filhos[i]->filhos[0];
				vlr2 = x->filhos[i]->filhos[1];
				x->filhos[i] = vlr1;
				x->filhos[i+1] = vlr2;
				i++;
				while (i <= x->n)
				{
					k = x->chaves[i];
					x->chaves[i] = aux;
					aux = k;
					Arvore *auxar2 = x->filhos[i+1];
					x->filhos[i+1] = auxar;
					auxar = auxar2;
					i++;
				}
				(x->n)++;
			}
			else if (i == x->n)
			{
				x->chaves[i] = x->filhos[i]->chaves[0];
				Arvore *vlr1, *vlr2;
				vlr1 = x->filhos[i]->filhos[0];
				vlr2 = x->filhos[i]->filhos[1];
				x->filhos[i] = vlr1;
				x->filhos[i + 1] = vlr2;
				(x->n)++;
			}
		}
		else
		{
			x->filhos[i] = inserir(x->filhos[i], k);
		}
	}
	return x;
}

Arvore* dividir_no(Arvore *x, int i, Arvore *y) {

	Arvore *aux1, *aux2;
	aux1 = criar();
	aux2 = criar();
	x->chaves[0] = y->chaves[T - 1];
	x->n++;
	x->filhos[0] = aux1;
	x->filhos[1] = aux2;
	if (y->folha == FALSE)
	{
		aux1->folha = FALSE;
		aux2->folha = FALSE;
	}
	int j = 0;
	while (j<T)
	{
		aux1->filhos[j] = y->filhos[j];
		j++;
	}
	while (j >= T&&j < (2 * T ))
	{
		aux2->filhos[j-T] = y->filhos[j];
		j++;
	}
	while (i < T-1)
	{
		aux1 = inserir(aux1, y->chaves[i]);
		i++;
	}
	i++;
	while (i >= T&&i < (2 * T) - 1)
	{
		aux2 = inserir(aux2, y->chaves[i]);
		i++;
	}

	//implementaçao da divisao para nó nao folha

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
