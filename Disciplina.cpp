#include "Disciplina.h"
#include "Departamento.h"

Disciplina::Disciplina (int n)
{
    setNome ();
    pDpto = NULL;
    pAlPrim = NULL;
    pAlAtual = NULL;
    maxAlunos = n;
    nAlunos = 0;
}

Disciplina::~Disciplina ()
{
  ElAluno* aux = NULL;
  while (pAlPrim != NULL)
  {
      aux = pAlPrim->getAlProx ();
      delete pAlPrim;
      pAlPrim = aux;
  }

  pDpto = NULL;
  pAlAtual = NULL;
}

void Disciplina::setNome (const char* n)
{
    strcpy (nome, n);
}

char* Disciplina::getNome ()
{
    return nome;
}

void Disciplina::setDpto (Departamento* d)
{
    pDpto = d;
}

Departamento* Disciplina::getDpto ()
{
    return pDpto;
}

void Disciplina::incluiAluno (Aluno* a)
{
    if(nAlunos < maxAlunos)
      {
        ElAluno* aux = NULL;
        aux = new ElAluno ();
        aux->setAluno (a);

        if (pAlPrim == NULL)
        {
            pAlPrim = aux;
            pAlAtual = aux;
            nAlunos++;
        }
        else
        {
            pAlAtual->setAlProx(aux);
            aux->setAlAnt(pAlAtual);
            pAlAtual = aux;
            nAlunos++;
        }
      }
    else
      cout << "Turma lotada" << endl;
}

void Disciplina::listaAlunos ()
{
  ElAluno* aux = pAlPrim;
  Aluno* alaux = NULL;
  while (aux != NULL)
    {
      alaux = aux->getAluno ();
      cout << alaux->getNome () << endl;
      aux = aux->getAlProx ();
    }
}
