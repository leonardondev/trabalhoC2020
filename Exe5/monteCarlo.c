#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int main () {

  /* declarando as variaveis*/

  int i, n, x;
  time_t t;
  char vetor [100];

  /*iniciallizando o rand*/

  n = 100;
  srand((unsigned) time(&t));


  for( i = 0 ; i < n ; i++ ) {

  /*sorteando os valores*/

    x = rand ()%11;

    /*preenchendo o vetor*/

    if (x < 8)
      vetor[i] = -1;
    else
      vetor[i] = 1;

    printf("[%i] = %i\n",i+1, vetor [i]);

  }/*fim for*/
}






