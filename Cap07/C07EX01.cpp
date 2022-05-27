//C07EX01.cpp

#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main(void)
{

  float MD[8], SOMA = 0, MEDIA;
  int I;

  cout << setprecision(2);
  cout << setiosflags (ios::right);
  cout << setiosflags (ios::fixed);

  cout << "Calculo de media escolar\n\n";
  for (I = 0; I <= 7; I++)
    {
      cout << "Informe a " << I << "a. nota: ";
      cin >> MD[I];
      cin.ignore(80, '\n');
      SOMA += MD[I];
    }

  MEDIA = SOMA / 8;

  cout << "\nA media do grupo equivale a: " << setw(8);
  cout << MEDIA << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
