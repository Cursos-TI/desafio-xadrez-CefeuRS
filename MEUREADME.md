# Meu README - Xadrez (por Roberto)

Esse projeto aqui faz parte do desafio da estacio, que era pra criar um sisteminha com movimentos das peças de xadrez em 3 niveis: novato, aventureiro e mestre. A ideia era usar estrutura de repetição e representação simples das peças no tabuleiro.

Fiz tudo usando o vscode, compilando com gcc (mingw no meu caso). Testei no terminal mesmo, rodando cada nivel separado. No começo parecia meio chato lembrar os movimentos das peças, mas dps foi fluindo melhor.

## Niveis implementados:

### 🟢 Nivel Novato
- Usei estrutura **for** pra mostrar os movimentos das peças.
- Mostra a movimentação do bispo, torre e cavalo no formato de "coordenadas X e Y".
- Tudo bem simples, só com print no terminal mesmo.

### 🟡 Nivel Aventureiro
- Agora usei **while** pra controlar os laços.
- Repeti a lógica das peças mas com estrutura diferente (sem o for).
- Mesma ideia de mostrar as coordenadas possíveis das peças no tabuleiro.

### 🔴 Nivel Mestre
- Aqui usei o **do while**, que executa pelo menos uma vez.
- Manteve a estrutura das outras fases, mas usando essa outra forma de repetição.
- Também mostra os movimentos do bispo, cavalo e torre, separados por seção.

## Como rodar

Se vc tiver o gcc instalado, é só compilar no terminal que roda. Usei assim:

```bash
gcc xadrez_novato.c -o xadrez_novato.exe
./xadrez_novato.exe

gcc xadrez_aventureiro.c -o xadrez_aventureiro.exe
./xadrez_aventureiro.exe

gcc xadrez_mestre.c -o xadrez_mestre.exe
./xadrez_mestre.exe
