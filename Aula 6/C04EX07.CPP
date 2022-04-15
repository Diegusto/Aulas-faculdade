// C04EX07.CPP

#include <iostream>
using namespace std;

int main(void)
{

  int N, I = 1;
  long int FAT = 1;

  cout << "\nPrograma Fatorial\n";
  cout << "\nFatorial de que valor: "; cin >> N;
  cin.ignore(80, '\n');

  do
    {
       FAT *= I;
       I++;
    }
  while (I <= N);
  cout << "\n";
  cout << "Fatorial de " << N << " = "<< FAT << endl;
  cout << endl;

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
