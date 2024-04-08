#include "ElAluno.h"

ElAluno::ElAluno ()
{
    pAl = NULL;
    pAlAnt = NULL;
    pAlProx = NULL;
    notap1 = 0.0;
    notap2 = 0.0;
    notafinal = 0.0;
    faltas = 0;
}

ElAluno::~ElAluno ()
{
    pAl = NULL;
    pAlAnt = NULL;
    pAlProx = NULL;
}

void ElAluno::setAluno (Aluno* a)
{
    pAl = a;
}

Aluno* ElAluno::getAluno ()
{
    return pAl;
}

void ElAluno::setAlAnt (ElAluno* a)
{
    pAlAnt = a;
}

ElAluno* ElAluno::getAlAnt ()
{
    return pAlAnt;
}

void ElAluno::setAlProx (ElAluno* a)
{
    pAlProx = a;
}

ElAluno* ElAluno::getAlProx ()
{
    return pAlProx;
}

void ElAluno::setNotap1 (float n)
{
  notap1 = n;
}

float ElAluno::getNotap1 ()
{
  return notap1;
}

void ElAluno::setNotap2 (float n)
{
  notap2 = n;
}

float ElAluno::getNotap2 ()
{
  return notap2;
}

void ElAluno::setNotafinal ()
{
  notafinal = (notap1 + notap2) / 2;
}

float ElAluno::getNotafinal ()
{
  return notafinal;
}

void ElAluno::marcarFalta ()
{
  faltas++;  
}

int ElAluno::getFaltas ()
{
  return faltas;
}