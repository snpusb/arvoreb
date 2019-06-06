#include "arvoreb.h"
#include <stdlib.h>
#include <stdio.h>
#define TAM 23
/*Função principal:*/
int main () {

   Arvore *a = criar();

   /*Exercicio 18-2.1 Cormen*/
   TIPO vecTeste[TAM] = {91,90,80,71,72,50,45,47,10,8,7,5,2,3,22,44,55,66,68,17,6,21,67};
   for(int i = 0;i < TAM;i++)
   {
     a = inserir(a,vecTeste[i]);
   }

   imprimir (a, 0);
   getchar();
   return 0;
}
