// C07EX28.CPP

#include <iostream>
#include <cctype>
#include <cstdlib>
using namespace std;

int main(void)
{

  // Definicao da estrutura de enumeração

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

  int ENTRADA;
  MESES MES;

  cout << "Informe o mes desejado (de 1 ate 12): ";
  cin >> ENTRADA;
  cin.ignore(80, '\n');
  MES = MESES(ENTRADA);

  cout << endl;
  cout << "Foi informado mes " << MES; 
  cout << " que equivale a "; 
  cout << EXTENSO[MES-1];

  cout << endl << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}

