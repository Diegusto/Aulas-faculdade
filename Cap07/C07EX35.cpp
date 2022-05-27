// C07EX35.CPP

#include <iostream>
using namespace std;

#define produto1(X, Y) ((X) * (Y))
#define produto2(X, Y) (X * Y)

int main(void)
{
  cout << "(2 + 3) x 4 = " << produto1(2 + 3, 4) << endl;
  cout << "(2 + 3) x 4 = " << produto2(2 + 3, 4) << endl;
	
  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}

