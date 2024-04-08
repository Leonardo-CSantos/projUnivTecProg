#pragma once

#include <string.h>
#include <iostream>
using namespace std;

class Universidade
{
  private:
    char nomeU [30];
    //ListaDepartamento *Dptos;

  public:
    Universidade ();
    ~Universidade ();
    void setNome (const char *n = "");
    //void incluiDpto (ElDpto*);
    char* getNome ();
};
