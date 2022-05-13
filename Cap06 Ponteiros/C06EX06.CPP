//C06EX05.CPP

#include <iostream>
using namespace std;

int main (void)
{
   int IDADE =25;
   int *PIDADE1 = 0;
   int *PIDADE2 = 0;

   PIDADE1 = &IDADE;
   PIDADE2 = PIDADE1;

   cout << "Variavel IDADE ....: " << IDADE << endl;
   cout << "Ponteiro PIDADE1 ..: " << PIDADE1 << endl;
   cout << "Ponteiro PIDADE2 ..: " << PIDADE2 << endl;

   cout << endl;
   cout << "Tecle <Enter> para encerrar... ";
   cin.get();
   return 0;
}
