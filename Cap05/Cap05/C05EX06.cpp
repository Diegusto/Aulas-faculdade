// C05EX06.CPP
// Verificacao Logica

#include <iostream>
#include <cctype>
using namespace std;

bool compara (int A, int B)
{
  bool RESULTADO;
  RESULTADO = (A == B);
  return RESULTADO;
}

void pausa(void)
{
  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return;
}

int main(void)
{
  int N1, N2;

  cout << "Verificacao Logica\n";

  cout << "\nEntre o 1o. Numero: "; cin >> N1;
  cin.ignore(80, '\n');

  cout << "\nEntre o 2o. Numero: "; cin >> N2;
  cin.ignore(80, '\n');

  if (compara (N1, N2))
    cout << "\nOs numeros sao iguais\n";
  else
    cout << "\nOs numeros sao diferentes\n";
}
