#pragma once

#include "Aluno.h"

class ElAluno
{
    private:
        Aluno* pAl;
        ElAluno* pAlAnt;
        ElAluno* pAlProx;
        float notap1;
        float notap2;
        float notafinal;
        int faltas;

    public:
        ElAluno ();
        ~ElAluno ();
        void setAluno (Aluno* a);
        Aluno* getAluno ();
        void setAlAnt (ElAluno* a);
        ElAluno* getAlAnt ();
        void setAlProx (ElAluno* a);
        ElAluno* getAlProx ();
        void setNotap1 (float n);
        float getNotap1 ();
        void setNotap2 (float n);
        float getNotap2 ();
        void setNotafinal ();
        float getNotafinal ();
        void marcarFalta ();
        int getFaltas ();
};