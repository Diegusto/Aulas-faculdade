// C04EX01.CPP

#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{

   int N, I, R;

   cout << "Entre o valor da tabuada: "; cin >> N;
   cin.ignore(80, '\n');
   cout << "\n";

   I = 1;
   while (I <= 10)
      {
         R = N * I;
         cout << setw(2) << N << " X ";
         cout << setw(2) << I << " = ";
         cout << setw(3) << R << endl;
         I++;
      }
   cout << endl;

   cout << "Tecle <Enter> para encerrar... ";
   cin.get();
   return 0;
}
