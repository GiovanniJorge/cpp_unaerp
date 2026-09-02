# C++ Unaerp

<p align="center">
  <img alt="C++" src="https://img.shields.io/badge/C%2B%2B-17%2F20-00599C?logo=c%2B%2B&logoColor=white" />
  <img alt="status" src="https://img.shields.io/badge/status-conclu%C3%ADdo-brightgreen" />
  <img alt="licença" src="https://img.shields.io/badge/licen%C3%A7a-MIT-blue" />
</p>

## Sumário

- [Descrição do Projeto](#descrição-do-projeto)
- [Arquitetura e Estrutura do Repositório](#arquitetura-e-estrutura-do-repositório)
- [Como Executar Localmente](#como-executar-localmente)
- [Uso e Exemplos](#uso-e-exemplos)
- [Troubleshooting / FAQ](#troubleshooting--faq)
- [Contribuição](#contribuição)
- [Autor](#autor)
- [Licença](#licença)

## Descrição do Projeto

Este repositório reúne exercícios em linguagem C++ desenvolvidos para fins acadêmicos e didáticos, com foco em fundamentos da programação, lógica de algoritmos, estruturas de controle, funções, arrays e resolução de problemas práticos.

Cada arquivo representa um exercício ou mini-programa independente, pensado para facilitar o estudo e a prática da linguagem em ambiente universitário. O objetivo principal é oferecer uma base sólida em C++ por meio de exemplos claros, objetivos e executáveis.

## Arquitetura e Estrutura do Repositório

A organização do projeto é simples e direta, priorizando clareza e didática sobre complexidade arquitetural:

```text
cpp-unaerp/
├── LICENSE
├── README.md
├── .gitignore
├── .gitattributes
└── exercicios-geral/
    ├── analise-de-vendas-semanais.cpp
    ├── aprovacao-aluno.cpp
    ├── controle-de-estoque.cpp
    ├── conversao-de-temperaturas.cpp
    ├── despesas-mensais.cpp
    ├── elipse.cpp
    ├── imagem-em-tons-de-cinza.cpp
    ├── notas-de-aluno.cpp
    ├── pesquisa-de-satisfacao.cpp
    ├── programacao-celsius.cpp
    ├── programacao-cubo.cpp
    ├── programacao-pitagoras.cpp
    ├── switch-case.cpp
    ├── tabela-de-estoque.cpp
    ├── temperatura-de-cidades.cpp
    ├── tipo-de-triangulo.cpp
    ├── triangulos.cpp
    └── valores-suavisados.cpp
```

### Como o projeto funciona

- Cada arquivo `.cpp` é um programa independente;
- Não há backend, banco de dados ou infraestrutura externa;
- O código é compilado e executado de forma isolada;
- O fluxo principal é: escolher o exercício → compilar → executar → aprender a lógica.

## Como Executar Localmente

### Pré-requisitos

Antes de compilar os programas, certifique-se de ter instalado:

- Um compilador C++ moderno, como `g++` ou `clang++`;
- Terminal de linha de comando;
- `git` para clonar o repositório.

Verifique a instalação:

```bash
g++ --version
```

ou

```bash
clang++ --version
```

### Clonando o repositório

```bash
git clone https://github.com/GiovanniJorge/cpp-unaerp.git
cd cpp-unaerp
```

### Compilando um exercício específico

Exemplo com `g++`:

```bash
g++ -std=c++17 -Wall -Wextra -pedantic exercicios-geral/elipse.cpp -o elipse
./elipse
```

Também é possível compilar outros exercícios da mesma forma:

```bash
g++ -std=c++17 -Wall -Wextra -pedantic exercicios-geral/aprovacao-aluno.cpp -o aprovacao-aluno
./aprovacao-aluno
```

### Compilando todos os exercícios da pasta

```bash
cd exercicios-geral
g++ -std=c++17 -Wall -Wextra -pedantic *.cpp -o exercicios
./exercicios
```

> Observação: a prática mais comum no estudo de exercícios em C++ é compilar um arquivo por vez para entender cada problema isoladamente.

## Uso e Exemplos

Após compilar, basta executar o binário gerado. Os exemplos desse repositório servem para:

- praticar lógica de programação;
- testar estruturas de controle;
- aprender entrada e saída em C++;
- estudar resolução de problemas acadêmicos.

### Exemplo prático

```bash
g++ -std=c++17 -Wall -Wextra -pedantic exercicios-geral/temperatura-de-cidades.cpp -o temperatura-de-cidades
./temperatura-de-cidades
```

Esse padrão pode ser repetido para qualquer outro arquivo da pasta `exercicios-geral`.

## Troubleshooting / FAQ

### 1. O comando `g++` não é reconhecido
Isso indica que o compilador C++ não está instalado ou não está disponível no `PATH`.

Solução:

```bash
sudo apt update
sudo apt install g++
```

No Windows, uma opção é instalar MinGW ou MSYS2 e adicionar o compilador ao ambiente.

### 2. Erro ao compilar com `-std=c++17`
Se o compilador for antigo, pode ocorrer incompatibilidade de versão.

Solução:

- Atualize o compilador;
- Verifique a versão com `g++ --version`;
- Use uma ferramenta atualizada.

### 3. Arquivo não encontrado
Esse erro geralmente acontece quando o caminho do arquivo está incorreto.

Solução:

```bash
g++ -std=c++17 -Wall -Wextra -pedantic exercicios-geral/nome-do-arquivo.cpp -o nome-do-arquivo
```

### 4. O programa compila, mas não executa como esperado
Isso pode acontecer por lógica do algoritmo, entrada incorreta ou erro na implementação.

Solução:

- revise o código do programa;
- verifique a entrada solicitada;
- teste com valores simples e conhecidos.

## Contribuição

Contribuições são bem-vindas. Se você quiser adicionar novos exercícios, melhorar a organização, corrigir erros ou reforçar a qualidade didática do material, siga os passos abaixo:

1. Faça um fork do repositório;
2. Crie uma branch com nome descritivo:

```bash
git checkout -b feature/nova-atividade
```

3. Faça commits claros e objetivos;
4. Abra um Pull Request descrevendo as alterações e o contexto da melhoria.

## Autor

- Nome: Giovanni Jorge
- GitHub: [@GiovanniJorge](https://github.com/GiovanniJorge)

## Licença

Este projeto está licenciado sob a licença MIT. Consulte o arquivo [LICENSE](LICENSE) na raiz do repositório para mais detalhes.
