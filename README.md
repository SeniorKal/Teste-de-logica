# Teste de Lógica

Este repositório contém as soluções das Perguntas 1, 2, 3 e 4 do teste de lógica, desenvolvidas em C.

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
- `Pergunta_3.c`: busca de uma combinação de dois números
- `Pergunta_3.h`: declaração da função da Pergunta 3
- `teste_pergunta_3.c`: testes automatizados das combinações
- `Pergunta_4.c`: preenchimento de um intervalo numérico
- `Pergunta_4.h`: declaração das funções da Pergunta 4
- `teste_pergunta_4.c`: testes automatizados dos intervalos
- `uso_de_ia.md`: descrição de como a IA foi utilizada

## Pergunta 1 - Array com números 1 à esquerda

A Pergunta 1 move todos os números `1` para o início do array sem alterar a ordem relativa dos demais elementos.

### Como compilar

Compile a solução com todos os avisos habilitados:

```bash
gcc -std=c11 -Wall -Wextra -Wpedantic Pergunta_1.c -o Pergunta_1
```

### Como executar

Execute no Linux ou macOS:

```bash
./Pergunta_1
```

Execute no Windows:

```powershell
.\Pergunta_1.exe
```

### Exemplo de entrada

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

Os testes validam um array misto, um array sem números `1` e um array formado somente por números `1`.

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

## Pergunta 2 - Busca de fruta em árvore binária

A Pergunta 2 representa uma fruteira como uma árvore binária e busca uma fruta pelo nome.

### Como compilar

Compile a solução com todos os avisos habilitados:

```bash
gcc -std=c11 -Wall -Wextra -Wpedantic Pergunta_2.c -o Pergunta_2
```

### Como executar

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

## Pergunta 3 - Soma de dois elementos

A Pergunta 3 verifica se dois elementos distintos do array resultam em um valor informado.

### Como compilar

Compile a solução com todos os avisos habilitados:

```bash
gcc -std=c11 -Wall -Wextra -Wpedantic Pergunta_3.c -o Pergunta_3
```

### Como executar

Execute no Linux ou macOS:

```bash
./Pergunta_3
```

Execute no Windows:

```powershell
.\Pergunta_3.exe
```

### Exemplo de entrada

```text
9
```

### Saída esperada

```text
[1, 15, 2, 7, 2, 5, 7, 1, 4]
Digite um numero para verificar se existe soma de dois elementos que resulta nele: 9
Existe uma combinação que resulta em: 9
```

### Estratégia adotada

A função `existe_soma` percorre o array com dois laços. Para cada elemento, ela compara somente os elementos das posições seguintes e retorna `true` ao encontrar um par cuja soma seja igual ao valor informado.

Se nenhum par produzir o valor procurado, a função retorna `false`.

- Complexidade de tempo: `O(n²)` no pior caso
- Complexidade de espaço: `O(1)`

### Testes automatizados

Os testes validam combinações para `9` e `20`, a ausência de combinação para `100`, um array vazio e um array com apenas um elemento.

Compile os testes:

```bash
gcc -std=c11 -Wall -Wextra -Wpedantic -DTESTE Pergunta_3.c teste_pergunta_3.c -o teste_pergunta_3
```

Execute no Linux ou macOS:

```bash
./teste_pergunta_3
```

Execute no Windows:

```powershell
.\teste_pergunta_3.exe
```

Se o programa terminar sem mensagens e retornar código `0`, todos os testes passaram.

## Pergunta 4 - Completar intervalo numérico

A Pergunta 4 encontra o maior número de um array e preenche o próprio array com todos os valores de `0` até esse maior número.

### Como compilar

Compile a solução com todos os avisos habilitados:

```bash
gcc -std=c11 -Wall -Wextra -Wpedantic Pergunta_4.c -o Pergunta_4
```

### Como executar

Execute no Linux ou macOS:

```bash
./Pergunta_4
```

Execute no Windows:

```powershell
.\Pergunta_4.exe
```

### Exemplo de entrada

O exemplo usa o array definido no `main`:

```text
[9, 2, 3, 1, 4]
```

### Saída esperada

```text
0 1 2 3 4 5 6 7 8 9
```

### Estratégia adotada

A função `encontrar_maior` percorre o array para identificar o maior valor. O tamanho final é calculado como esse valor mais `1`.

Em seguida, `completar_intervalo` sobrescreve o próprio array com os números de `0` até o maior valor, e `printArray` imprime o resultado.

- Complexidade de tempo: `O(n + m)`, sendo `n` o tamanho original e `m` o tamanho do intervalo final
- Complexidade de espaço: `O(1)`

### Testes automatizados

Os testes validam o array do enunciado, um array já completo, um array com apenas um elemento e outro array fora de ordem.

Compile os testes:

```bash
gcc -std=c11 -Wall -Wextra -Wpedantic -DTESTE Pergunta_4.c teste_pergunta_4.c -o teste_pergunta_4
```

Execute no Linux ou macOS:

```bash
./teste_pergunta_4
```

Execute no Windows:

```powershell
.\teste_pergunta_4.exe
```

Se o programa terminar sem mensagens e retornar código `0`, todos os testes passaram.

## Uso do Codex

O Codex ajudou a organizar o código em funções, revisar os comentários, completar a documentação e criar testes automatizados.

As mudanças foram revisadas manualmente antes de serem incorporadas ao projeto.
