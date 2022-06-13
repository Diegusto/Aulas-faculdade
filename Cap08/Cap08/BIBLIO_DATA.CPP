// BIBLIO_DATA.CPP
// Arquivo com codigo das funcoes da biblioteca DATA.h

#include <iostream>
#include "data.h"

TDATA::TDATA(void)
{
  DATA_OK = false;
}

bool TDATA::ANOBISSEXTO(void) const
{
  if (DATA_ANO % 400 == 0)
    return true;
  if (DATA_ANO % 4 == 0 and DATA_ANO % 100 != 0)
    return true;
  return false;
}

char TDATA::ULTIMODIAMES(void) const
{
  if (DATA_MES == FEVEREIRO)
    return (ANOBISSEXTO()) ? 29 : 28;
  if (DATA_MES <= JULHO)
    return (DATA_MES % 2 != 0) ? 31 : 30;
  return (DATA_MES % 2 != 0) ? 30 : 31;
}

void TDATA::VALIDADATA(void)
{
  DATA_OK = DATA_ANO >=    1 and
            DATA_ANO <= 9999 and
            DATA_MES >=    1 and
            DATA_MES <=   12 and
            DATA_DIA >=    1 and
            DATA_DIA <= ULTIMODIAMES();
  return;
}

void TDATA::ALTERADATA(short DIA, short MES, short ANO)
{
  this->DATA_DIA = DIA;
  this->DATA_MES = MES;
  this->DATA_ANO = ANO;
  VALIDADATA();
  return;
}

void TDATA::MOSTRADATA(void) const
{
  if (DATA_OK)
  {
    std::cout.fill('0');
    std::cout.width(2); std::cout << DATA_DIA << '/';
    std::cout.width(2); std::cout << DATA_MES << '/';
    std::cout.width(4); std::cout << DATA_ANO << std::endl;
  }
  else
  {
    std::cout << "**/**/****" << std::endl;
  }
  return;
}
