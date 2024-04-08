#include "Pessoa.h"

Pessoa::Pessoa (int dia, int mes, int ano, const char* nome)
{
  inicializa (dia, mes, ano, nome);
}

Pessoa::Pessoa ()
{
  inicializa (0, 0, 0);
}

Pessoa::~Pessoa ()
{

}

void Pessoa::inicializa (int dia, int mes, int ano, const char* nome)
{
  diaNa = dia;
  mesNa = mes;
  anoNa = ano;
  strcpy (nomeP, nome);
  calcIdade(23, 03, 2024);
}

char* Pessoa::getNome ()
{
  return nomeP;
}

void Pessoa::calcIdade (int dia, int mes, int ano)
{
  idade = ano - anoNa;
  if (mesNa > mes)
    idade--;
  else if (mesNa == mes && diaNa > dia)
    idade--;
}

void Pessoa::imprimeIdade ()
{
  cout << "A idade de " << getNome() << " seria " << idade << endl;
}

int Pessoa::getIdade ()
{
  return idade;
}

