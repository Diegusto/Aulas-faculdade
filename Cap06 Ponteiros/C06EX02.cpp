//C06EX02.CPP

#include <iostream>
using namespace std;

int main(void)
{
   int IDADE = 25;
   int *PIDADE = 0;

   PIDADE = &IDADE;

   cout << "IDADE = " << IDADE << " | End: = " << &IDADE;
   cout << endl;
   cout << "PIDADE = " << *PIDADE;
   cout << " | End: = " << &PIDADE << endl;

   cout << endl;
   cout << "Tecle <Enter> para encerrar... ";
   cin.get();
   return 0;
}
