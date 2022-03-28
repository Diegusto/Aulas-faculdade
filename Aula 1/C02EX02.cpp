// C02EX02.CPP

#include <iostream>

int main (void)
{
   char NOME[40];

   std::cout << "Informe seu nome: ";
   std::cin >> NOME;
   std::cin.ignore(80, '\n');

   std::cout << "Ola, " << NOME;
   std::cout << std::endl;

   std::cout << "Tecle <Enter> para encerrar... ";
   std::cin.get();
   return 0;
}
