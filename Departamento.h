#pragma once

#include "ElDisciplina.h"
#include <string.h>
#include <iostream>
using namespace std;

class Departamento
{
  private:
    char nomeD[30];
    ElDisciplina* pPrim;
    ElDisciplina* pAtual;

  public:
    Departamento ();
    ~Departamento ();
    void setNome (const char* n = "");
    char* getNome ();
    void incluiDisciplina (Disciplina* d);
    void listaDisciplinas ();
};
