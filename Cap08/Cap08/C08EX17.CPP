// C08EX17.CPP

#include <iostream>
#include <cstdlib>   // funcao: atoi()
#include <string>    // funcao: substr(), c_str() - membro
#include "data.h"    // funcao: ALTERADATA(), MOSTRADATA()

using namespace std;

int main(void)
{
  TDATA DATA;
  string DTS;
  char DT[11];
  short DIA, MES, ANO;

  cout << "Entre uma data no formato DD/MM/AAAA: ";
  cin.getline(DT, sizeof(DT));

  DTS.assign(DT);

  DIA = atoi(DTS.substr(0,2).c_str());
  MES = atoi(DTS.substr(3,2).c_str());
  ANO = atoi(DTS.substr(6,4).c_str());


  DATA.ALTERADATA(DIA, MES, ANO);
  DATA.MOSTRADATA();

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
