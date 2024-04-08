#pragma once

#include "Pessoa.h"
#include "Universidade.h"
class Departamento;

class Professor : public Pessoa
{
  private:
    Universidade* pUniv;
    Departamento* pDpto;

  public:
    Professor (int dia, int mes, int ano, const char* n);
    Professor ();
    ~Professor ();
    void setUniv (Universidade *u);
    void getUniv ();
    void setDpto (Departamento *d);
    void getDpto ();
};
