// C09EX09.CPP

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main(void)
{

  int I, A[10];
  fstream ARQUIVO("NUMBER.DAT", ios_base::in |
    ios_base::binary);

  ARQUIVO.read(reinterpret_cast<char*>(&A), sizeof(A));
  for (I = 0; I < 10; I++)
    {
      cout << "Elemento " << setw(2) << I + 1 << " = ";
      cout << A[I] << endl;
    }

  ARQUIVO.close();


  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
