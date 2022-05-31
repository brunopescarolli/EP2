#include "avl.h"
#include "bst.h"

/**
 * @brief Retorna o maior valor entre a e b.
 *
 * @param a
 * @param b
 * @return int o maior valor
 */
int MAX(int a, int b);

/**
 * @brief Gera N números aleatórios que serão as chaves das árvores
 * 
 * @param N número de nós, inputado do usuário
 * @return int* array de números gerados
 */
int *geraNumerosAleatorios(int N);


void relatorioGeral(int tamanho, RegAVL registrosAvl[tamanho], RegBST registrosBst[tamanho]);

double tempoMedioGeral(int tamanho, RegAVL registrosAvl[tamanho], RegBST registrosBst[tamanho]);

double alturaMediaGeral(int tamanho, RegAVL registrosAvl[tamanho], RegBST registrosBst[tamanho]);

void print(char *msg);