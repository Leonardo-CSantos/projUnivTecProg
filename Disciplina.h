#pragma once

#include "ElAluno.h"
class Departamento;

class Disciplina
{
    private:
        char nome[50];
        Departamento* pDpto;
        ElAluno* pAlPrim;
        ElAluno* pAlAtual;
        int maxAlunos;
        int nAlunos;

    public:
        Disciplina (int n = 0);
        ~Disciplina ();
        void setNome (const char* n="");
        char* getNome ();
        void setDpto (Departamento* d);
        Departamento* getDpto ();
        void incluiAluno (Aluno* a);
        void listaAlunos ();
};
