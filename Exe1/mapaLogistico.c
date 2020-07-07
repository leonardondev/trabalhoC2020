#include <stdio.h>
#include <stdlib.h>


int main() {

  /* variaveis */
  float N;
  float r;
  float x0=0.2;
  float x1=0;
  int i;
  FILE* resultados;

  printf("Digite o valor de N: ");
  scanf("%f", &N);

  printf("Digite o valor de r: ");
  scanf("%f", &r);



  resultados = fopen("dados.txt","a");



  for ( i = 0; i < N; i++){


    x1 = r * x0 * ( 1 - x0 ) ;


    printf("passo %d: x1 = %f\n", i+1, x1);
    fprintf(resultados,"passo %d: x1 = %f\n", i+1, x1);

    x0 = x1;
  }

  fclose(resultados);

}
