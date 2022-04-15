// C04EX09.CPP

#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{

  int N, I;
  long int FAT = 1;

  cout << "\nPrograma Fatorial\n";
  cout << "\nFatorial de que valor: "; cin >> N;
  cin.ignore(80, '\n');

  for (I = 1; I <= N; I++)
    FAT *= I;
  cout << "\n";
  cout << "Fatorial de " << N << " = "<< FAT << endl;
  cout << endl;

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
