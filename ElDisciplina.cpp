#include "ElDisciplina.h"

ElDisciplina::ElDisciplina ()
{
  pDisciplina = NULL;
  pDisciplinaAnt = NULL;
  pDisciplinaProx = NULL;
}

ElDisciplina::~ElDisciplina ()
{
  
}

void ElDisciplina::setDisciplina (Disciplina* d)
{
  pDisciplina = d;
}

Disciplina* ElDisciplina::getDisciplina ()
{
  return pDisciplina;
}

void ElDisciplina::setDisciplinaAnt (ElDisciplina* d)
{
  pDisciplinaAnt = d;
}

ElDisciplina* ElDisciplina::getDisciplinaAnt ()
{
  return pDisciplinaAnt;
}

void ElDisciplina::setDisciplinaProx (ElDisciplina* d)
{
  pDisciplinaProx = d;
}

ElDisciplina* ElDisciplina::getDisciplinaProx ()
{
  return pDisciplinaProx;
}
