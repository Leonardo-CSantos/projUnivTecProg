#pragma once

#include "Pessoa.h"
#include "Universidade.h"

class Aluno : public Pessoa
{
    private:
        int RA;
        Universidade* pUniv;

    public:
        Aluno (int dia, int mes, int ano, int ra, const char* n);
        Aluno ();
        ~Aluno ();
        void setRA (int n);
        int getRA ();
        void setUniv (Universidade* u);
        void getUniv ();
};
