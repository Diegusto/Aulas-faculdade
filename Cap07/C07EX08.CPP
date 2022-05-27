// C07EX08.CPP

#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstring>
using namespace std;

int main(void)
{
  int I, J;
  char NOME[10][40], X[40];
  cout << "Leitura e apresentacao de nomes ordenados\n\n";

  // Entrada de nomes

  for (I = 0; I <= 9; I++)
    {
      cout << "Entre " << setw(2) << I + 1 << "o. nome: ";
      cin.getline(NOME[I], sizeof(NOME[I]));
    }
  cout << endl;


  // Classificacao dos nomes

  for (I = 0; I <= 8; I++)
    for (J = I + 1; J <= 9; J++)
      if (strcmp(NOME[I], NOME[J]) > 0)
        {
          strcpy(X, NOME[I]);
          strcpy(NOME[I], NOME[J]);
          strcpy(NOME[J], X);
        }

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
