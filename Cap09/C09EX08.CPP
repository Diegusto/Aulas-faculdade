// C09EX08.CPP

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main(void)
{

  int I, A[10];
  fstream ARQUIVO("NUMBER.DAT", ios_base::out |
    ios_base::binary);

  for (I = 0; I < 10; I++)
    {
      cout << "Digite o elemento " << setw(2) << I + 1;
      cout << " - ";
      cin >> A[I];
      cin.ignore(80, '\n');
   }
  ARQUIVO.write(reinterpret_cast<char*>(&A), sizeof(A));

  ARQUIVO.close();

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
