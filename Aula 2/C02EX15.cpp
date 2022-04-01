// CO2EX15.CPP

#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
  cout << setiosflags(ios::fixed);

  float       P1 = 7.0/3.0;
  double      P2 = 7.0/3.0;
  long double P3 = 7.0/3.0;

  float       R1 = 10.0/9.0;
  double      R2 = 10.0/9.0;
  long double R3 = 10.0/9.0;

  cout << setprecision (6);
  cout << P1 << endl;
  cout << setprecision(15);
  cout << P2 << endl;
  cout << P3 << endl;
  cout << endl;

  cout << setprecision (6);
  cout << R1 << endl;
  cout << setprecision (15);
  cout << R2 << endl;
  cout << R3 << endl;
  cout << endl;

 cout << endl;
 cout << "Tecle <Enter> para encerrar ... ";
 cin.get();
 return 0;
}
