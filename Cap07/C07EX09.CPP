// C07EX09.CPP

#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main(void)
{

  int A[10], I, J, PESQ;
  bool ACHA;
  char RESP;
  
  cout << "Pesquisa sequencial\n\n";


  // Entrada dos valores

  for (I = 0; I <= 9; I++)
    {
      cout << "Entre " << setw(2) << I+1 << "o. valor = ";
      cin >> A[I];
      cin.ignore(80, '\n');
    }
  cout << endl;

  // Apresentacao das notas

  do
    {
      cout << endl;
      cout << "Entre o valor a ser pesquisado: ";
      cin >> PESQ;
      I = 0;
      ACHA = false;
      while (I <= 9 && ACHA == false)
        if (PESQ == A[I])
          ACHA = true;
        else
          I++;
      if (ACHA == true)
        cout << PESQ << " localizado na posicao " << I + 1;
      else
        cout << PESQ << " nao foi localizado";
      cout << endl;
      cout << "\n\nContinua? [S]IM/[N]AO + <Enter>: ";
      cin >> RESP;
      RESP = toupper(RESP);
    }
  while (RESP == 'S');
  return 0;
}
