// C02EX04.CPP

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main (void)
{
   char NOME[40];

  cout << "Informe seu nome: ";
  cin >> NOME;
   cin.ignore(80, '\n');

   cout << "Ola, " << NOME;
   cout << endl;

   cout << "Tecle <Enter> para encerrar... ";
   cin.get();
   return 0;
}
