// C09EX11.CPP

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main(void)
{

  int I, A[10];

  fstream ARQUIV1("VALORES.DCX", ios_base::out |
    ios_base::binary);

  fstream ARQUIV2("VALORES.DCX", ios_base::in  |
    ios_base::binary);

  cout << "Entrada de dados\n" << endl;
  for (I = 0; I < 10; I++)
    {
      cout << "Digite o elemento " << setw(2) << I + 1;
      cout << " - ";
      cin >> A[I];
      cin.ignore(80, '\n');
    }
  ARQUIV1.write(reinterpret_cast<char*>(&A), sizeof(A));

  ARQUIV1.close();

  cout << "Saida de dados\n" << endl;
  ARQUIV2.read(reinterpret_cast<char*>(&A), sizeof(A));
  for (I = 0; I < 10; I++)
    {
      cout << "Elemento " << setw(2) << I + 1 << " = ";
      cout << A[I] << endl;
    }

  ARQUIV2.close();

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
