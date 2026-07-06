#include <assert.h>
#include <string.h>

#include "Pergunta_2.h"

static void testar_busca_na_raiz(No* fruteira) {
    char caminho[256] = "";

    assert(buscar_fruta(fruteira, "Maçã", caminho, sizeof(caminho)) == 1);
    assert(strcmp(caminho, "Maçã") == 0);
}

static void testar_busca_em_profundidade(No* fruteira) {
    char caminho[256] = "";

    assert(buscar_fruta(fruteira, "Banana", caminho, sizeof(caminho)) == 1);
    assert(strcmp(caminho, "Maçã -> Pera -> Abacaxi -> Laranja -> Banana") == 0);
}

static void testar_fruta_inexistente(No* fruteira) {
    char caminho[256] = "";

    assert(buscar_fruta(fruteira, "Uva", caminho, sizeof(caminho)) == 0);
    assert(strcmp(caminho, "") == 0);
}

int main(void) {
    No* fruteira = criar_fruteira();

    testar_busca_na_raiz(fruteira);
    testar_busca_em_profundidade(fruteira);
    testar_fruta_inexistente(fruteira);

    return 0;
}
