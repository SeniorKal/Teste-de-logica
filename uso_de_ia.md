# Uso de IA

## Ferramentas utilizadas

Foram utilizados o ChatGPT, o Codex e o GitHub Copilot.

Durante o desenvolvimento, o GitHub Copilot também foi utilizado para sugestões pontuais de código, como autocomplete e sintaxe. Todas as sugestões foram revisadas, adaptadas quando necessário e testadas manualmente antes de serem incorporadas.

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

## Etapa da Pergunta 3

Nesta etapa, o Codex foi utilizado apenas para:

- organização do código;
- melhoria da documentação;
- criação de testes automatizados;
- revisão de comentários.

A lógica da solução e a forma de buscar a combinação já existiam e não foram criadas pela IA.

A solução foi validada manualmente com valores que possuem combinação e valores que não possuem combinação, confirmando o comportamento nos dois casos.

## Etapa da Pergunta 4

A lógica inicial da Pergunta 4 já havia sido implementada manualmente. Nesta etapa, o Codex foi utilizado apenas para:

- organização do código;
- melhoria da documentação;
- revisão de comentários;
- criação de testes automatizados.

A estratégia original foi mantida. As mudanças foram revisadas manualmente, e a solução foi testada localmente após as alterações.
