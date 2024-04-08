#include "Aluno.h"

Aluno::Aluno (int dia, int mes, int ano, int ra, const char* n) :
Pessoa (dia, mes, ano, n)
{
    RA = ra;
    pUniv = NULL;
}

Aluno::Aluno () :
Pessoa ()
{
    RA = -1;
    pUniv = NULL;
}

Aluno::~Aluno ()
{
    pUniv = NULL;
}

void Aluno::setRA (int n)
{
    RA = n;
}

int Aluno::getRA ()
{
    return RA;
}

void Aluno::setUniv (Universidade* u)
{
    pUniv = u;
}

void Aluno::getUniv ()
{
  cout << nomeP << " estuda na universidade " << pUniv->getNome () << endl;
}
