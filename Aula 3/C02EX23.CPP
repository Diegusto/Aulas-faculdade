// C02EX23.CPP

/**
  O programa seguinte demonstra o uso de linhas de
  Comentários   usadas em um codigo de programa escrito na
  linguagem de programacao C++.
  O programa apresenta a quantidade de bits de cada tipo
  de dado suportado em C++.
*/

/*
  Programa .......: C02EX23.cpp
  Autor(es) ......: Augusto Manzano
  Data ...........: 01/01/2018
  Versao .........: 1.0
  Revisao.........: 01/01/2018
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{

  unsigned short int US;
  short              SH;
  short int          SI;
  signed short int   SS;
  signed int         SD;
  unsigned int       UI;
  unsigned long int  UL;
  int                IN;
  long               LO;
  signed long int    SL;
  long int           LI;
  char               CH;
  signed char        SC;
  unsigned char      UC;
  float              FL;
  double             DO;
  long double        LD;
  bool               BO;

  cout << setiosflags(ios::right); // tabulacao a direita
  cout << "Tipos de dados e seus tamanhos em bits.\n";
  cout << endl;

  cout << "unsigned short int = " << setw(3);
  cout << sizeof(US) * 8 << "\n";
  cout << "short              = " << setw(3);
  cout << sizeof(SH) * 8 << "\n";
  cout << "short int          = " << setw(3);
  cout << sizeof(SI) * 8 << "\n";
  cout << "signed short int   = " << setw(3);
  cout << sizeof(SS) * 8 << "\n";
  cout << "signed int         = " << setw(3);
  cout << sizeof(SD) * 8 << "\n";
  cout << "unsigned int       = " << setw(3);
  cout << sizeof(UI) * 8 << "\n";
  cout << "unsigned long int  = " << setw(3);
  cout << sizeof(UL) * 8 << "\n";
  cout << "int                = " << setw(3);
  cout << sizeof(IN) * 8 << "\n";
  cout << "long               = " << setw(3);
  cout << sizeof(LO) * 8 << "\n";
  cout << "long int           = " << setw(3);
  cout << sizeof(LI) * 8 << "\n";
  cout << "signed long int    = " << setw(3);
  cout << sizeof(SL) * 8 << "\n";
  cout << "char               = " << setw(3);
  cout << sizeof(CH) * 8 << "\n";
  cout << "signed char        = " << setw(3);
  cout << sizeof(SC) * 8 << "\n";
  cout << "unsigned char      = " << setw(3);
  cout << sizeof(UC) * 8 << "\n";
  cout << "float              = " << setw(3);
  cout << sizeof(FL) * 8 << "\n";
  cout << "double             = " << setw(3);
  cout << sizeof(DO) * 8 << "\n";
  cout << "long double        = " << setw(3);
  cout << sizeof(LD) * 8 << "\n";
  cout << "bool               = " << setw(3);
  cout << sizeof(BO) * 8 << "\n";
  cout << endl;

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
