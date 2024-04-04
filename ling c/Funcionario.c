#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nm[50];
    int id;
    char cg[50];
    double sl;
    struct Departamento* depto;
} Funcionario;

typedef struct Departamento {
    char nm[50];
    int id;
    char loc[50];
    Funcionario** funcs;
    int numFuncionarios;
} Departamento;

Funcionario* criarFuncionario(char nome[], int id, char cargo[], double salario, Departamento* departamento);
void atualizarInfoPessoais(Funcionario* funcionario, char nome[], char cargo[], double salario);
void transferirDepto(Funcionario* funcionario, Departamento* novoDepartamento);
Departamento* obterDeptoAssociado(Funcionario* funcionario);

Departamento* criarDepartamento(char nome[], int id, char localizacao[]);
void adicionarFuncionario(Departamento* departamento, Funcionario* funcionario);
void removerFuncionario(Departamento* departamento, Funcionario* funcionario);
Funcionario** obterFuncionarios(Departamento* departamento);
