#include <stdio.h>
#define courant 0.25
#define tamanhoBarra 20

void mostraVetor(float* v, int tempo);

int main (){

  /* variaveis */
  float vetor [tamanhoBarra] = {100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100};
  int i, j;
  int tempoSimulacao;

  printf("digite quantos instantes deseja ter na simulacao\n");
  scanf("%i", &tempoSimulacao);


  /* simulacao */
  for (j = 0; j < tempoSimulacao; j++){

    mostraVetor(vetor, j);/* vetor no tempo j */

    /* muda temperatura da barra inteira */
    for (i = 1; i < tamanhoBarra-1; i++){

      /* formula -> uij = u(x,t)  onde x=espsco e t=tempo */
      vetor[i] = vetor[i] + courant * ( vetor [i+1] - 2* vetor [i] + vetor [i-1]);
      /*    j+1        j                       j                j           j       */

    }

  }

}



void mostraVetor(float* v, int tempo){
  int i;
  printf("t=%d [ ", tempo);

  for ( i = 0; i < tamanhoBarra; i++){
    printf("%5.2f, ", v[i]);
  }

  printf("]\n");

}
