#include <stdio.h>
#include <math.h>
#define tam 10

/* funções */
void criaImagem(int matriz[tam][tam]);
void mostraImagem (int matriz[tam][tam]);

/* variaveis */
int x, y, i, j, l, c;
int imgOriginal [tam][tam];
int imgFiltrada [tam][tam];


int main (){

  criaImagem(imgOriginal); /* chama a funcao de criar imagem */
  mostraImagem(imgOriginal); /* imprime a imagem na tela */

  for (i=1; i< tam -1; i++){
    for (j=1; j< tam-1 ;j++){

      imgFiltrada[i][j] = imgOriginal[i-1][j-1] + imgOriginal[i-1][j] + imgOriginal[i-1][j+1] +
                          imgOriginal[i][j-1]   + imgOriginal[i][j]   + imgOriginal[i][j+1] +
                          imgOriginal[i+1][j-1] + imgOriginal[i+1][j] + imgOriginal[i+1][j+1];

      imgFiltrada [i][j] = (int)imgFiltrada [i][j]/9;
    }
  }

  printf("\n\n");
  mostraImagem (imgFiltrada); /* imprime a nova matriz na tela */

}

/* funcao pra criar a imagem */
void criaImagem(int matriz[tam][tam]){

  for (y = 0; y < tam; y++){
    for (x = 0; x < tam; x++){

      matriz[y][x] = (int)(pow(( (x+1-(tam/2)) * (y+1-(tam/2)) ), 2) + pow((( (x-1-(tam/2)) + (y-1-(tam/2)) )), 2)) % 255;
    }
  }
}

/* funcao pra imprimir a imagem */
void mostraImagem (int matriz[tam][tam]){

  int i, j;
  for (i = 0; i < tam; i++){
    for (j = 0; j < tam; j++){

      printf("  %5d ", matriz[i][j] );
    }
    printf("\n");

  }
}
