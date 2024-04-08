#include "Professor.h"
#include "Departamento.h"

Professor::Professor (int dia, int mes, int ano, const char* n) :
Pessoa (dia, mes, ano, n)
{
  pUniv = NULL;
  pDpto = NULL;
}

Professor::Professor () :
Pessoa ()
{
  pUniv = NULL;
  pDpto = NULL;
}

Professor::~Professor ()
{
  pUniv = NULL;
  pDpto = NULL;
}

void Professor::setUniv (Universidade *u)
{
  pUniv = u;
}

void Professor::getUniv ()
{
  cout << nomeP << " estuda na universidade " << pUniv->getNome () << endl;
}

void Professor::setDpto (Departamento *d)
{
  pDpto = d;
}


void Professor::getDpto ()
{
  cout << nomeP << " faz parte do Departamento " << pDpto->getNome () << endl;
}


