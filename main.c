#include "util.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));
  int A, N, inicio, fim;

    print(" /|  |     . _    |-|-     "); 
    print("/-||`|)()|`|(_ |_|| ||_||`(|");
    print("--------------------------------");
    printf("Insira a quantidade de amostras(mudas): ");
    scanf("%d", &A);
    printf("Insira a quantidade de nós(galhos): ");
    scanf("%d", &N);

    RegBST registrosBst[A];
    RegAVL registrosAvl[A];

    for (int i = 0; i < A; i++) {
      int *numerosAleatorios = geraNumerosAleatorios(N);

      BST *rBst = malloc(sizeof(BST));
      AVL *rAvl = malloc(sizeof(AVL));

      rBst = NULL;
      rAvl = NULL;

      RegAVL regAvl;
      RegBST regBst;

      inicio = clock();
      for (int k = 0; k < N; k++) {
        rBst = bstInsert(rBst, numerosAleatorios[k]);
      }
      fim = clock();
      regBst.tempoConstrucao = (double)(fim - inicio) / CLOCKS_PER_SEC;

      inicio = clock();
      for (int j = 0; j < N; j++) {
        rAvl = avlInsert(rAvl, numerosAleatorios[j]);
      }
      fim = clock();
      regAvl.tempoConstrucao = (double)(fim - inicio) / CLOCKS_PER_SEC;


      regAvl.nos = N;
      regBst.nos = N;
      regAvl.altura = avlCalculaAltura(rAvl);
      regBst.altura = bstCalculaAltura(rBst);

      registrosBst[i] = regBst;
      registrosAvl[i] = regAvl;

      avlFree(rAvl);
      bstFree(rBst);
      free(numerosAleatorios);
    }
    
    print("--------------------------------");
    relatorioGeral(A, registrosAvl, registrosBst);
    print("--------------------------------");
    relatorioBST(A, registrosBst);
    print("--------------------------------");
    relatorioAvl(A, registrosAvl);
    print("--------------------------------");
}