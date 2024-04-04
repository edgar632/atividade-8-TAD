#include <stdbool.h>

typedef struct {
    char tit[100];
    char aut[100];
    int anoPub;
    int copDisp;
} Biblioteca;

Biblioteca* criarBiblioteca(char titulo[], char autor[], int anoPublicacao, int copiasDisponiveis);
void devolverCopia(Biblioteca* livro);
void emprestarCopia(Biblioteca* livro);
void obterInformacoes(Biblioteca* livro);
bool verificarDisponibilidadeCopia(Biblioteca* livro);
int obterCopiasDisponiveis(Biblioteca* livro);
int obterAnoPublicacao(Biblioteca* livro);
char* obterAutor(Biblioteca* livro);
char* obterTitulo(Biblioteca* livro);
