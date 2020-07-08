#include <stdio.h>
#include <math.h>

#define tam 512


/* declaracao das funcoes */
void criaCampo(float matriz[tam][tam]);
void mostraMatriz(float matriz[tam][tam]);
void mostraGradiente(float matriz[tam-2][tam-2]);


/* gradiente */
float gradienteX[tam-2][tam-2];
float gradienteY[tam-2][tam-2];


int main(){

  /* variaveis */
  int c, l;

  /* criacao do campo */
  float campo[tam][tam];
  criaCampo(campo);
  printf("\npotencial eletrico\n");
  mostraMatriz(campo);


  /* gradiete na direcao i */
  for ( l = tam-2; l > 0 ; l-- ){
    for ( c = 1 ; c < tam-1 ; c++ ){

      gradienteX[l-1][c-1] =  campo[l][c-1] - campo[l][c];
    }
  }


  /* gradiente na direcao j */
  for (c = 1 ; c < tam-1 ; c++ ){
    for (l = tam-2 ; l > 0 ; l-- ){

      gradienteY[l-1][c-1] = campo[l-1][c] - campo[l][c];
    }
  }

  printf("\ncomponente i do campo eletrico\n");
  mostraGradiente(gradienteX);

  printf("\ncomponente j do campo eletrico\n");
  mostraGradiente(gradienteY);


  return 0;
}


void criaCampo(float matriz[tam][tam]){

  int x,y;

  for (y = 0; y < tam; y++){
    for (x = 0; x < tam; x++){
      /*funcao*/
      matriz[y][x] = (float)sqrt(pow((sin( (x+1-(tam/2)) * (y+1-(tam/2)) )),2) + pow((( (x-1-(tam/2)) + (y-1-(tam/2)) )),2));
    }
  }
}


void mostraMatriz(float matriz[tam][tam]){

  int i, j;
  for (i = 0; i < tam; i++){
    for (j = 0; j < tam; j++){

      printf("  %6.3f ", matriz[i][j] );
    }
    printf("\n");

  }
}



void mostraGradiente(float matriz[tam-2][tam-2]){

  int i, j;
  for (i = 0; i < tam-2; i++){
    for (j = 0; j < tam-2; j++){

      printf("  %6.3f ", matriz[i][j] );
    }
    printf("\n");

  }
}

