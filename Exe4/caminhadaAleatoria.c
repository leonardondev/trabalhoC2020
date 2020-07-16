
#include <stdlib.h>
#include<stdio.h>
#include<time.h>


int main () {

/* declarando as variaveis*/

 int i, n, soma, x;
 time_t t;

/*iniciallizando o rand*/

    printf("escolha o numero de posicoes que o bebado vai assumir \n");
    scanf("%i", &n);
    printf("\n");
    printf("\n");

    srand((unsigned) time(&t));

 soma = 0;

 for( i = 0 ; i < n ; i++ ) {

 /*sorteando os valores*/

 x = rand()%21-10;
 printf("o a distancia eh:%i\n", x);

/*novo = antigo + x*/
  soma = soma   + x;

/*achando a posicao*/

printf("a posicao no instante %i do bebado eh: %i\n",i+1, soma);
printf("\n");
 }}
