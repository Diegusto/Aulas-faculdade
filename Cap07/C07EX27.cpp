// C07EX27.CPP

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

  // Definicao da matriz (vetor) de caracteres

  char EXTENSO[][10] =
    {
      "janeiro",
      "fevereiro",
      "marco",
      "abril",
      "maio",
      "junho",
      "julho",
      "agosto",
      "setembro",
      "outubro",
      "novembro",
      "dezembro"
    };

  MESES MES;

  cout << "Teste de acesso a lista enumerada\n\n";
  MES = janeiro;

  cout << "Mes definido = " << MES; 
  cout << ", o qual em extenso equivale a ";
  cout << EXTENSO[MES-1];

  cout << endl << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}

