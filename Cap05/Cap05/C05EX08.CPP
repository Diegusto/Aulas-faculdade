// C05EX08.CPP

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(void)
{

  cout << setprecision(10);
  cout << setiosflags(ios::fixed);

  cout << setw(14) << pow(2.0,3.0)   << endl;
  cout << setw(14) << pow(2.0,0.0)   << endl;

  cout << setw(14) << sqrt(144)      << endl;
  cout << setw(14) << sqrt(sqrt(16)) << endl;

  cout << "\nTecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
