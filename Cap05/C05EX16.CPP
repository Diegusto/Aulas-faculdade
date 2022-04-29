// C05EX16.CPP

#include <iostream>
using namespace std;

int R;
extern int A, B;

void soma(void)
{
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
