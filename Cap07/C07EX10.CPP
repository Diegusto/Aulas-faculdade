// C07EX10.CPP

#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstring>
using namespace std;

int main(void)
{

  int I, J, MEIO, COMECO, FINAL;
  char NOME[10][40], X[40], PESQ[40], RESP;
  bool ACHA;

  cout << "Leitura e pesquisa binaria de nomes\n\n";

  // Entrada das notas

  for (I = 0; I <= 9; I++)
    {
      cout << "Informe o " << setw(2) << I + 1;
      cout << "o. nome: ";
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

  do
    {
      cout << "\nEntre o valor a ser pesquisado: ";
      cin >> PESQ;
      COMECO = 0;
      FINAL = 9;
      ACHA = false;
      while (COMECO <= FINAL && ACHA == false)
        {
          MEIO = (COMECO + FINAL) / 2;
          if (strcmp(PESQ, NOME[MEIO]) == 0)
            ACHA = true;
          else
            if (strcmp(PESQ, NOME[MEIO]) < 0)
              FINAL = MEIO - 1;
            else
              COMECO = MEIO + 1;
        }
        if (ACHA == true)
          cout << PESQ << " localizado na posicao " <<
            MEIO + 1;
        else
          cout << PESQ << " nao foi localizado";
      cout << endl;
      cout << "\nContinua? [S]IM/[N]AO + <Enter>: ";
      cin >> RESP;
      RESP = toupper(RESP);
    }
  while (RESP == 'S');
  return 0;
}
