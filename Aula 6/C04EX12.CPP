// C04EX12.CPP

#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{

  int A, B, R;


  for (A = 1, B = 1; A + B <= 15; A += 2, B++)
    {
      R = A + B;
      cout << "Resultado = " << setw(2) << R << endl;
    }
  cout << endl;

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
