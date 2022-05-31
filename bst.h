typedef struct noBst {
    int chave;
    struct noBst * esq;
    struct noBst * dir;
} BST;

typedef struct RegistroBST {
  int altura;
  int nos;
  double tempoConstrucao;
} RegBST;

/**
 * @brief exibe o relatório de tempo e altura da árvore
 * */
void relatorioBST(int tamanho, RegBST registros[tamanho]);

/**
 * @param tamanho do array de registros
 * @param array de registros
 * @return tempo médio de construção das árvores
 * */
double tempoMedioRegistrosBst(int tamanho, RegBST registros[tamanho]);

/**
 * @param tamanho do array de registros
 * @param array de registros
 * @return altura média das árvores
 * */
double alturaMediaRegistrosBst(int tamanho, RegBST registros[tamanho]);

/**
 * Responsável pela criação de um espaço na memória
 * que "caiba" o equivalente a uma struct noBst.
 * @return o ponteiro para o nó criado
 * */
BST *bstNovoNo(int chaveParaCriacao);

/**
 * @brief Insere um novo nó em uma BST comum, mantendo as propriedades da BST
 *
 * @param raiz nó que será usado como início do algoritmo de busca para inserção
 * @param chaveParaInsercao chave do novo nó inserido
 * @return BST* raíz da árvore (na BST comum nunca muda)
 */
BST *bstInsert(BST * raiz, int chaveParaInsercao);

/**
 * @brief Calcula a altura de um nó recebido por parâmetro como raíz
 *
 * @param raiz nó a se calcular a altura
 * @return int a altura calculada do nó
 */
int bstCalculaAltura(BST * raiz);

void bstFree(BST * raiz);