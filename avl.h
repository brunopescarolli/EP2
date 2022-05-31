typedef struct noAvl {
    int chave;
    int altura;
    struct noAvl * esq;
    struct noAvl * dir;
} AVL;

typedef struct RegistroAVL {
  int altura;
  int nos;
  double tempoConstrucao;
} RegAVL;

/**
 * @brief exibe o relatório de tempo e altura da árvore
 * */
void relatorioAvl(int tamanho, RegAVL registros[tamanho]);

/**
 * @param tamanho do array de registros
 * @param array de registros
 * @return tempo médio de construção das árvores
 * */
double tempoMedioRegistrosAvl(int tamanho, RegAVL registros[tamanho]);

/**
 * @param tamanho do array de registros
 * @param array de registros
 * @return altura das árvores
 * */
double alturaMediaRegistrosAvl(int tamanho, RegAVL registros[tamanho]);

/**
 * Responsável pela criação de um espaço na memória
 * que "caiba" o equivalente a uma struct noAvl.
 * @return o ponteiro para o nó criado
 * */
AVL *avlNovoNo(int chaveParaCriacao);

/**
 * @brief Acessa o campo altura do nó AVL
 *
 * @param raiz
 * @return int
 */
int avlGetAltura(AVL *raiz);
/**
 * @brief Calcula a altura de um nó recebido por parâmetro como raíz
 *
 * @param raiz nó a se calcular a altura
 * @return int a altura calculada do nó
 */
int avlCalculaAltura(AVL *raiz);

/**
 * @brief Calcula o fator de balanceamento de um nó
 *
 * @param no um nó AVL
 * @return int o fator de balanceamento do nó
 */
int avlCalculaFb(AVL *no);
/**
 * @brief Recebe um nó AVL e realiza uma rotação à esquerda
 *        com esse nó como pivô. Ao realizar a rotação,
 *        calcula e atualiza a altura do nó recebido e da nova
 *        raíz gerada após a rotação
 *
 * @param raiz
 * @return AVL* nova raíz após a rotação
 */
AVL *avlRotL(AVL *raiz);

/**
 * @brief Recebe um nó AVL e realiza uma rotação à direita
 *        com esse nó como pivô. Ao realizar a rotação,
 *        calcula e atualiza a altura do nó recebido e da nova
 *        raíz gerada após a rotação
 *
 * @param raiz
 * @return AVL* nova raíz após a rotação
 */
AVL *avlRotR(AVL *raiz);

/**
 * @brief Insere um novo nó em uma árvore AVL, que tem raíz recebida por param.
 *        A árvore se auto balanceará e mudará a raíz, se necessário.
 *
 * @param raiz nó que será usado como início do algoritmo de busca para inserção
 * @param chaveParaInsercao chave do novo nó inserido
 * @return AVL* raíz da árvore (pode alterar)
 */
AVL *avlInsert(AVL *raiz, int chave);

void avlFree(AVL *raiz);