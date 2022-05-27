// C07EX24.CPP

#include <iostream>
#include <cctype>
#include <cstdlib>
using namespace std;

int main(void)
{

  // Definicao da estrutura de enumeracao

  enum MESES
    {
      janeiro=1,
      fevereiro,
      marco,
      abril,
      maio,
      junho,
      julho,
      agosto,
      setembro,
      outubro,
      novembro,
      dezembro
    };

  MESES MES;

  cout << "Teste de acesso a lista enumerada\n\n";
  MES = janeiro;
  cout << "Mes definido = " << MES; 
  cout << " em extenso equivale a ";

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

