// C04EX06.CPP

#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{

  int N, I, R;
  char RESP;

  do
    {
      cout << "\nEntre o valor da tabuada: "; cin >> N;
      cin.ignore(80, '\n');
      cout << "\n";
      I = 1;
      do
        {
          R = N * I;
          cout << setw(2) << N << " X ";
          cout << setw(2) << I << " = ";
          cout << setw(3) << R << endl;
          I++;
        }
      while (I <= 10);
      cout << "\n";
      cout << "Deseja continuar?" << endl;
      cout << "Tecle [S] p/ SIM | outra letra p/ NAO: ";
      cin.get(RESP);
      cin.ignore();
    }
  while (RESP == 'S' or RESP == 's');
  cout << endl;

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
