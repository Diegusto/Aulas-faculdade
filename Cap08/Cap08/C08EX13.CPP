// C08EX13.CPP

#include <iostream>
using namespace std;

long int somatorio(int N)
{
  int S = 0;
  for (int I = 1; I <= N; I++)
    S += I;
  return S;
}

long int fatorial(int N)
{
  int F = 1;
  for (int I = 1; I <= N; I++)
    F *= I;
  return F;
}

typedef long int (*PONTEIRO_FUNCAO)(int);

int main(void)
{
  int ENTRA;
  PONTEIRO_FUNCAO RESPOSTA;

  cin >> ENTRA;
  cin.ignore(80, '\n');

  RESPOSTA = &somatorio;
  cout << (*RESPOSTA)(ENTRA) << endl;

  RESPOSTA = &fatorial;
  cout << (*RESPOSTA)(ENTRA) << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
