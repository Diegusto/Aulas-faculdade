//C06EX01.CPP

#include <iostream>
using namespace std;

int main(void)
{
   int IDADE = 25;
   int *PIDADE = 0;

   PIDADE = &IDADE;

   cout << "O valor idade " << IDADE << " esta armazenado";
   cout << "no endereco de memoria " << PIDADE << endl;

   cout << endl;
   cout << "Tecle <Enter> para encerrar... ";
   cin.get();
   return 0;
}
