// C07EX26.CPP

#include <iostream>
#include <cctype>
#include <cstdlib>
using namespace std;

int main(void)
{

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

  int MES;

  cout << "Teste de acesso a lista enumerada simulada\n\n";
  cout << "Entre um mes valido (1 ate 12): ";
  cin >> MES;
  cin.ignore(80, '\n');
 
  cout << endl;
  cout << "Mes definido = " << MES;
  cout << ", o qual em extenso equivale a ";
  cout << EXTENSO[MES-1];

  cout << endl << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}

