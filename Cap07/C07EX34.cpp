// C07EX34.CPP

#include <iostream>
using namespace std;

#define produto(X, Y) ((X) * (Y))
#define troca(A, B) {int X = A; A = B; B = X;}

int main(void)
{

  int A, B;

  cout << "Entre o valor A: ";
  cin >> A;
  cin.ignore(80, '\n');

  cout << "Entre o valor B: ";
  cin >> B;
  cin.ignore(80, '\n');

  troca(A, B);

  cout << "Valor A: " << A << endl;
  cout << "Valor B: " << B << endl;

  cout << "A x B = " << produto(A, B) << endl;
	
  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}

