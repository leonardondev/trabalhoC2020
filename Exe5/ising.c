#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define J 1.0
#define TAM 41

double hamiltoniana(char* spins);
void monteCarlo (char* spins);

 /*variaevis*/
  char spins[TAM];
  double H;

int main(){

  monteCarlo(spins);/* preencheu*/
  H = hamiltoniana(spins); /*calculou*/
  printf ("H = %f\n", H);

}

double hamiltoniana(char* spins){/* vetor de spins */

  double soma=0;

  char resultadoProduto;
  int i;
  for (i = 0; i < TAM-1; i++){
    /*produto vetorial*/
    if (spins[i] == spins[i+1]){
        resultadoProduto = 1;
    }
    else{
        resultadoProduto = -1;
    }

    /*somatorio*/
    soma = soma -J * (resultadoProduto);

  }

  return soma;
}


void monteCarlo (char* spins) {

  /* declarando as variaveis*/
  int i, n, x;
  time_t t;

  /*iniciallizando o rand*/
  srand((unsigned) time(&t));


  for( i = 0 ; i < TAM ; i++ ) {
    /*sorteando os valores*/
    x = rand ()%11;

    /*preenchendo o spins*/
    if (x < 5)
      spins[i] = -1;
    else
      spins[i] = 1;

  }/*fim for*/

}

