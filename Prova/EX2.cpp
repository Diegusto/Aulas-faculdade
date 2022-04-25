#include <iostream>
#include <cmath>
using namespace std;

int main (void)
{

  int A, B, C, X, Y, Z;

  do {
    cout << "Entre valor positivo para [x]: ";
    cin >> X;
  } while (X < 0);

    do {
      cout << "Entre valor positivo para [Z]: ";
      cin >> Z;
    } while (Z < 0);

    A = pow(X+Y, 2);
    B = pow(Y+Z, 2);
    C = (A + B) / 2;

    cout << "Resultado [C] = " << C << endl;

    return 0;


}
