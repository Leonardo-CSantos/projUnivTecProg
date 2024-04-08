#include "Departamento.h"

Departamento::Departamento ()
{
    setNome();
    pPrim = NULL;
    pAtual = NULL;
}

Departamento::~Departamento ()
{
    ElDisciplina* aux = NULL;
    while (pPrim != NULL)
    {
        aux = pPrim->getDisciplinaProx ();
        delete pPrim;
        pPrim = aux;
    }
  
    pAtual = NULL;
}

void Departamento::setNome (const char* n)
{
  strcpy (nomeD, n);
}

char* Departamento::getNome ()
{
  return nomeD;
}

void Departamento::incluiDisciplina (Disciplina* d)
{
    ElDisciplina* aux = NULL;
    aux = new ElDisciplina ();
    aux->setDisciplina (d);
    d->setDpto (this);
  
    if (pPrim == NULL)
    {
        pPrim = aux;
        pAtual = aux;
    }
    else
    {
        
        pAtual->setDisciplinaProx (aux);
        aux->setDisciplinaAnt (pAtual);
        pAtual = aux;
    }
}

void Departamento::listaDisciplinas ()
{
    Disciplina* daux = NULL;
    ElDisciplina* aux = pPrim;
    cout << "Lista de Disciplinas do Departamento " << getNome () << endl;
    while (daux != NULL)
    {
        daux = aux->getDisciplina ();
        cout << daux->getNome () << endl;
        aux = aux->getDisciplinaProx ();
    }
}
