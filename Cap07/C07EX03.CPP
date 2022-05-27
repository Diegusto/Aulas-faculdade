// C07EX03.CPP

#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main(void)
{

  int A[5];
  int I, SOMA = 0;

  cout << "Somatorio de elementos impares\n\n";
  cout << setiosflags(ios::right);

  // Entrada de dados

  for (I = 0; I <= 4; I++)
    {
      cout << "Informe um valor para o elemento nr. ";
      cout << setw(2);
      cout << I + 1 << ": ";
      cin >> A[I];
      cin.ignore(80, '\n');
    }

  // Processamento par ou impar

  for (I = 0; I <= 4; I++)
    if (A[I] % 2 != 0)
       SOMA += A[I];

  // Apresentacao da soma

  cout << "\nA soma dos elementos equivale a: ";
  cout << setw(4) << SOMA << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
