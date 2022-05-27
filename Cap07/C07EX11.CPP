// C07EX11.CPP

#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{

  int I, TAMANHO;
  float *PMATRIZ;

  cout << setprecision(2);
  cout << setiosflags(ios::fixed);

  cout << "Entre a quantidade de elementos: ";
  cin >> TAMANHO;
  cin.ignore(80, '\n');

  PMATRIZ = new float[TAMANHO];

  cout << endl;
  for (I = 0; I <= TAMANHO - 1; I++)
    {
      cout << "Entre um valor para a variavel MATRIZ[";
      cout << I + 1 << "] = ";
      cin >> PMATRIZ[I];
      cin.ignore(80, '\n');
    }
  cout << endl;

  cout << "Os valores informados sao:\n" << endl;
  for (I = 0 ; I <= TAMANHO - 1; I++)
    {
       cout << "MATRIZ[" << I + 1 << "] = ";
       cout << setw(4) << PMATRIZ[I] << endl;
    }

  delete [] PMATRIZ;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
