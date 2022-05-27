// C07EX25.CPP

#include <iostream>
#include <cctype>
#include <cstdlib>
using namespace std;

// Definicao de constantes

#define janeiro   1
#define fevereiro 2
#define marco     3
#define abril     4
#define maio      5
#define junho     6
#define julho     7
#define agosto    8
#define setembro  9
#define outubro  10
#define novembro 11
#define dezembro 12

int main(void)
{

  int MES;

  cout << "Teste de acesso a lista enumerada simulada\n\n";

  cout << "Entre um mes valido (1 ate 12): ";
  cin >> MES;
  cin.ignore(80, '\n');

  cout << endl;
  cout << "Mes definido = " << MES;
  cout << ", o qual em extenso equivale a ";

  switch(MES)
    {
      case janeiro   : cout << "janeiro";   break;
      case fevereiro : cout << "fevereiro"; break;
      case marco     : cout << "marco";     break;
      case abril     : cout << "abril";     break;
      case maio      : cout << "maio";      break;
      case junho     : cout << "junho";     break;
      case julho     : cout << "julho";     break;
      case agosto    : cout << "agosto";    break;
      case setembro  : cout << "setembro";  break;
      case outubro   : cout << "outubro";   break;
      case novembro  : cout << "novembro";  break;
      case dezembro  : cout << "dezembro";  break;
    }
  cout << endl << endl;

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}

