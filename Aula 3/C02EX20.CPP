// C02EX20.CPP

#include <iostream>
#include <clocale>
#include <iomanip>
using namespace std;

int main(void)
{

  float VALOR = 1.23;

  cout << setprecision(2);
  cout << setiosflags(ios::fixed);

  cout << "Localidade atual: " << setlocale(LC_ALL, NULL);
  cout << endl;
  cout << "áéíóúÁÉÍÓÚçÇÜü" << endl;
  cout << setw(4) <<  VALOR << endl;

  cout << "Localidade atual: " << setlocale(LC_ALL, "");
  cout << endl;
  cout << "áéíóúÁÉÍÓÚçÇÜü" << endl;
  cout << setw(4) <<  VALOR << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
