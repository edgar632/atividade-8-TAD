#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char tp[20];
    char cr[10];
    int pos[2];
} Xadrez;

typedef struct {
    Xadrez **tblXadrez;
} TabuleiroXadrez;

Xadrez* criarXadrez(char tipo[], char cor[], int posicao[]);
TabuleiroXadrez* criarTabuleiroXadrez();

void moverPeca(Xadrez* peca, int novaPosicao[]);
void capturarPeca(Xadrez* peca, Xadrez* pecaOponente);
int verificarMovimentoValido(Xadrez* peca, int novaPosicao[]);
char** obterInfoPeca(Xadrez* peca);

int moverPecaTabuleiro(TabuleiroXadrez* tabuleiro, int posicaoAtual[], int novaPosicao[]);
int capturarPecaTabuleiro(TabuleiroXadrez* tabuleiro, int posicaoAtual[], int posicaoOponente[]);
int verificarMovimentoValidoTabuleiro(TabuleiroXadrez* tabuleiro, int posicaoAtual[], int novaPosicao[]);

