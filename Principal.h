#pragma once

#include "Universidade.h"
#include "Professor.h"
#include "Aluno.h"
#include "Departamento.h"

class Principal
{
  private:
    Aluno Leonardo;
    Professor Einstein;
    Professor Newton;

    Universidade UTFPR;
    Universidade Princeton;
    Universidade Cambridge;

    Departamento DAFIS;
    Departamento DAMAT;
    Departamento DAINF;

  public:
    Principal ();
    ~Principal ();
    void executar ();
};
