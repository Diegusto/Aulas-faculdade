// C05EX13.CPP

#include <iostream>
using namespace std;

float A, B, R;

void soma(void)
{
  cin >> A;
  cin.ignore(80, '\n');
  cin >> B;
  cin.ignore(80, '\n');
  R = A + B;
  cout << R << endl;
  return;
}

int main(void)
{
  soma();
  cout << "\nTecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
