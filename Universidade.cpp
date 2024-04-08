#include "Universidade.h"

Universidade::Universidade ()
{

}

Universidade::~Universidade()
{

}

void Universidade::setNome (const char *n)
{
  strcpy (nomeU, n);
}

char* Universidade::getNome ()
{
  return nomeU;
}

