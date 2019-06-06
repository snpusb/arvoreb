#include "arvoreb.h"
#include <stdlib.h>
#include <stdio.h>

/*Função principal:*/
int main () {

   Arvore *a = criar();

   /*Exercicio 18-2.1 Cormen*/
   a = inserir (a, 'F');
   imprimir (a, 0);
   printf("\n");
   a = inserir (a, 'S');
   imprimir (a, 0);
   printf("\n");
   a = inserir (a, 'Q');
   imprimir (a, 0);
   printf("\n");
   a = inserir (a, 'K');
   imprimir (a, 0);
   printf("\n");
   a = inserir (a, 'C');
   imprimir (a, 0);
   printf("\n");
   a = inserir (a, 'L');
   imprimir (a, 0);
   printf("\n");
   a = inserir (a, 'H');
   imprimir (a, 0);
   printf("\n");
   a = inserir (a, 'T');
   imprimir (a, 0);
   printf("\n");
   a = inserir (a, 'V');
   imprimir (a, 0);
   printf("\n");
   a = inserir (a, 'W');
   imprimir (a, 0);
   printf("\n");
   a = inserir (a, 'M');
   imprimir (a, 0);
   printf("\n");
   a = inserir (a, 'R');
   imprimir (a, 0);
   printf("\n");
   a = inserir (a, 'N');
   imprimir (a, 0);
   printf("\n");
   a = inserir (a, 'P');
   imprimir (a, 0);
   printf("\n");
   a = inserir (a, 'A');
   imprimir (a, 0);
   printf("\n");
   a = inserir (a, 'B');
   imprimir (a, 0);
   printf("\n");
   a = inserir (a, 'X');
   imprimir (a, 0);
   printf("\n");
   a = inserir (a, 'Y');
   imprimir (a, 0);
   printf("\n");
   a = inserir (a, 'D');
   imprimir (a, 0);
   printf("\n");
   a = inserir (a, 'Z');
   imprimir (a, 0);
   printf("\n");
   a = inserir (a, 'E');


   imprimir (a, 0);
   getchar();
   return 0;
}
