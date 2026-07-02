# Teste de Lógica

Este repositório contém as soluções das Perguntas 1 e 2 do teste de lógica, desenvolvidas em C.

## Pré-requisitos

- GCC instalado
- Terminal, PowerShell ou prompt de comando

## Arquivos

- `Pergunta_1.c`: solução e exemplo de execução
- `Pergunta_1.h`: declaração das funções
- `teste_pergunta_1.c`: testes automatizados
- `Pergunta_2.c`: árvore de frutas, busca e exemplo de execução
- `Pergunta_2.h`: estrutura do nó e declaração das funções
- `teste_pergunta_2.c`: testes automatizados da busca
- `uso_de_ia.md`: descrição de como a IA foi utilizada

## Pergunta 1 - Array com números 1 à esquerda

### Como compilar e executar

Compile a solução com todos os avisos habilitados:

```bash
gcc -std=c11 -Wall -Wextra -Wpedantic Pergunta_1.c -o Pergunta_1
```

Execute no Linux ou macOS:

```bash
./Pergunta_1
```

Execute no Windows:

```powershell
.\Pergunta_1.exe
```

### Entrada

O exemplo usa o array definido no `main`:

```text
2, 1, 5, 2, 5, 2, 1, 1, 1, 7, 9, 13, 127, 21
```

### Saída esperada

```text
1
1
1
1
2
5
2
5
2
7
9
13
127
21
```

### Estratégia adotada

A função percorre o array da esquerda para a direita. Quando encontra o número `1`, desloca os elementos anteriores uma posição para a direita e coloca esse `1` na próxima posição livre do início.

Assim, todos os números `1` ficam no começo e a ordem relativa dos outros valores é preservada. A alteração é feita no próprio array, sem criar um segundo array.

- Complexidade de tempo: `O(n²)` no pior caso
- Complexidade de espaço: `O(1)`

### Testes automatizados

Compile os testes:

```bash
gcc -std=c11 -Wall -Wextra -Wpedantic -DTESTE Pergunta_1.c teste_pergunta_1.c -o teste_pergunta_1
```

Execute no Linux ou macOS:

```bash
./teste_pergunta_1
```

Execute no Windows:

```powershell
.\teste_pergunta_1.exe
```

Se o programa terminar sem mensagens e retornar código `0`, todos os testes passaram.

## Uso do Codex

O Codex ajudou a organizar o código em funções, revisar os comentários, completar a documentação e criar testes automatizados. 
As mudanças foram revisadas manualmente antes de serem incorporadas ao projeto.

## Pergunta 2

A Pergunta 2 representa uma fruteira como uma árvore binária e busca uma fruta pelo nome.

### Como compilar e executar

Compile a solução com todos os avisos habilitados:

```bash
gcc -std=c11 -Wall -Wextra -Wpedantic Pergunta_2.c -o Pergunta_2
```

Execute no Linux ou macOS:

```bash
./Pergunta_2
```

Execute no Windows:

```powershell
.\Pergunta_2.exe
```

### Exemplo de entrada

```text
Banana
```

### Saída esperada

```text
Digite o nome da fruta que deseja buscar: Banana
Maçã -> Pera -> Abacaxi -> Laranja -> Banana
```

Quando a fruta não existe na árvore, o programa exibe:

```text
Fruta não encontrada.
```

### Estratégia adotada

A função `buscar_fruta` faz uma busca recursiva em profundidade. Ela verifica o nó atual, depois a subárvore esquerda e, por último, a subárvore direita.

Cada nó visitado é acrescentado ao caminho. Quando um ramo não contém a fruta procurada, esse trecho é removido antes de a busca continuar no próximo ramo.

- Complexidade de tempo: `O(n)` no pior caso
- Complexidade de espaço: `O(h)` para a pilha de recursão, sendo `h` a altura da árvore

### Testes automatizados

Os testes validam a busca na raiz, em um nó mais profundo e por uma fruta inexistente.

Compile os testes:

```bash
gcc -std=c11 -Wall -Wextra -Wpedantic -DTESTE Pergunta_2.c teste_pergunta_2.c -o teste_pergunta_2
```

Execute no Linux ou macOS:

```bash
./teste_pergunta_2
```

Execute no Windows:

```powershell
.\teste_pergunta_2.exe
```

Se o programa terminar sem mensagens e retornar código `0`, todos os testes passaram.
