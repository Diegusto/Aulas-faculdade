// C05EX09.CPP

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
int main(void)
{

  cout << setprecision(6);
  cout << setiosflags(ios::fixed);
  char  STRING1[9] = "2.718281", STRING2[2] = "2";
  char  STRING3[11] = "2147483647";
  float VALOR1;
  long int VALOR2;

  VALOR1 = atof(STRING1);
  cout << "String = " << setw(9) << STRING1  << endl;
  cout << "Valor  = " << setw(9) << VALOR1   << endl;


  VALOR1 = atoi(STRING2);
  cout << "String = " << setw(2) << STRING2  << endl;
  cout << "Valor  = " << setw(2) << VALOR1   << endl;

  VALOR2 = atol(STRING3);
  cout << "String = " << setw(11) << STRING3 << endl;
  cout << "Valor  = " << setw(11) << VALOR2  << endl;

  cout << "\nTecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
