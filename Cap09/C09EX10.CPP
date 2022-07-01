// C09EX10.CPP

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main(void)
{

  int I, A[10], B[10];

  ofstream ARQUIVO1("VALORES.DCP", ios_base::binary);
  ifstream ARQUIVO2("VALORES.DCP", ios_base::binary);

  cout << "Entrada de dados\n" << endl;
  for (I = 0; I < 10; I++)
    {
      cout << "Digite o elemento " << setw(2) << I + 1;
      cout << " - ";
      cin >> A[I];
      cin.ignore(80, '\n');
    }
  ARQUIVO1.write(reinterpret_cast<char*>(&A), sizeof(A));

  ARQUIVO1.close();

  cout << "Saida de dados\n" << endl;
  ARQUIVO2.read(reinterpret_cast<char*>(&B), sizeof(B));
  for (I = 0; I < 10; I++)
    {
      cout << "Elemento " << setw(2) << I + 1 << " = ";
      cout << B[I] << endl;
    }

  ARQUIVO2.close();

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
