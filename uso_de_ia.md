# Uso de IA

## Ferramentas utilizadas

Foram utilizados o ChatGPT e o Codex.

## Como as ferramentas ajudaram

- Discussão de estratégias para mover os números `1` sem alterar a ordem dos demais elementos
- Revisão e organização do código em funções menores
- Melhoria dos comentários e da documentação
- Criação de testes automatizados para validar a solução

## Prompts empregados

Os pedidos feitos às ferramentas incluíram:

- avaliar uma solução baseada em trocas e verificar se ela preservava a ordem dos elementos;
- sugerir uma solução por deslocamento dentro do próprio array;
- organizar o código com funções fora do `main`;
- escrever instruções simples de compilação, execução e teste.

## Validação

A lógica inicial foi desenvolvida manualmente, incluindo uma primeira tentativa baseada em trocas. Após identificar que essa abordagem não preservava a ordem relativa dos elementos, a solução foi ajustada para usar deslocamento dentro do próprio array.

## Etapa da Pergunta 2

Nesta etapa, somente o Codex foi utilizado. A ferramenta ajudou a:

- separar a definição da estrutura e as declarações em um arquivo de cabeçalho;
- adicionar um comentário objetivo sobre o retrocesso da busca;
- criar testes automatizados com `assert`;
- acrescentar ao README as instruções e a estratégia da Pergunta 2.

A lógica e a ordem da busca original foram mantidas e revisadas, sem mudança na estratégia.

A solução foi testada localmente com frutas existentes, como `Banana` e `Laranja`, e com uma fruta inexistente, como `Uva`, para validar tanto o caminho encontrado quanto o caso de não encontrado.
