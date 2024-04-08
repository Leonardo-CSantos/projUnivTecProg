#pragma once

#include "Disciplina.h"

class ElDisciplina 
{
  private:
    Disciplina* pDisciplina;
    ElDisciplina* pDisciplinaAnt;
    ElDisciplina* pDisciplinaProx;

  public:
    ElDisciplina ();
    ~ElDisciplina ();
    void setDisciplina (Disciplina* d);
    Disciplina* getDisciplina ();
    void setDisciplinaAnt (ElDisciplina* d);
    ElDisciplina* getDisciplinaAnt ();
    void setDisciplinaProx (ElDisciplina* d);
    ElDisciplina* getDisciplinaProx ();
};