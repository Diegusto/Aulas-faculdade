// C02EX05.CPP

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main (void)
{
  char NOME[40], SOBRENOME [20];

  cout << "Informe seu nome ...: ";
  cin.getline(NOME, sizeof(NOME));
  cin.ignore(80, '\n');

  cout << "Informe sobrenome ...:";
  cin >> SOBRENOME;
  cin.ignore(80, '\n');

  cout << "Ola,\n" << NOME << " " << SOBRENOME;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
