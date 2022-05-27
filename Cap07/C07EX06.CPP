// C07EX06.CPP

#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main(void)
{

  int I;
  char NOME[10][40];

  cout << "Leitura e apresentacao de nomes\n\n";

  // Entrada dos nomes

  for (I = 0; I <= 9; I++)
    {
      cout << "Informe o " << setw(2) << I + 1;
      cout << "o. nome: ";
      cin.getline(NOME[I], sizeof(NOME[I]));
    }
  cout << endl;

  // Apresentacao dos nomes

  for (I = 0; I <= 9; I++)
    {
      cout << setw(2) << I + 1 << " nome: " << NOME[I];
      cout << endl;
    }

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
