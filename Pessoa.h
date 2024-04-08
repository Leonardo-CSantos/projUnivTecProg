#pragma once

#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

class Pessoa
{
  protected:
    int diaNa;
    int mesNa;
    int anoNa;
    int idade;
    char nomeP[30];

  public:
    Pessoa (int dia, int mes, int ano, const char* nome = "Fulano");
    Pessoa ();
    ~Pessoa ();
    void inicializa (int dia, int mes, int ano, const char* nome = "Fulano");
    char* getNome ();
    void calcIdade (int diaAt, int mesAt, int anoAt);
    void imprimeIdade ();
    int getIdade ();

};

