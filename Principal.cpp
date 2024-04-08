#include "Principal.h"

Principal::Principal ()
{
  executar ();
}

Principal::~Principal ()
{

}

void Principal::executar ()
{
  Leonardo.inicializa(21, 6, 1999, "Leonardo");
  Leonardo.setRA(10);
  Einstein.inicializa(14, 3, 1879, "Einstein");
  Newton.inicializa (4, 1, 1643, "Newton");

  UTFPR.setNome("UTFPR");
  Princeton.setNome("Princeton");
  Cambridge.setNome("Cambridge");

  DAINF.setNome("DAINF");
  DAFIS.setNome("DAFIS");
  DAMAT.setNome("DAMAT");

  Leonardo.setUniv (&UTFPR);
  //Leonardo.setDpto (&DAINF);
  Einstein.setUniv (&Princeton);
  Einstein.setDpto (&DAFIS);
  Newton.setUniv (&Cambridge);
  Newton.setDpto (&DAMAT);

  Leonardo.imprimeIdade();
  Leonardo.getUniv();
  cout << Leonardo.getNome() << " RA: " << Leonardo.getRA() << endl;
  //Leonardo.getDpto();
  Einstein.imprimeIdade();
  Einstein.getUniv();
  Einstein.getDpto();
  Newton.imprimeIdade();
  Newton.getUniv();
  Newton.getDpto();
}
