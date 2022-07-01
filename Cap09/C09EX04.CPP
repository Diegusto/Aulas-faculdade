// C09EX04.CPP

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main(void)
{

  int I;
  float A[10];
  ofstream ARQBIN;

  ARQBIN.open("MATFLO.DBC", ios_base::binary);

  for (I = 0; I < 10; I++)
    {
      cout << "Digite o elemento " << setw(2) << I + 1;
      cout << " - ";
      cin >> A[I];
      cin.ignore(80, '\n');
    }
  ARQBIN.write(reinterpret_cast<char*>(&A), sizeof(A));

  ARQBIN.close();

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
