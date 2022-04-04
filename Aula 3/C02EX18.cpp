// C02EX18.CPP

#include <iostream>
using namespace std;

int main(void)
{

  bool X;

  cout.setf(ios::boolalpha);

  X = true;
  cout << "Valor X com verdadeiro ...: " << X << endl;

  X = false;
  cout << "Valor X com falso ........: " << X << endl;

  cout.unsetf(ios::boolalpha);

  X = true;
  cout << "Valor X com verdadeiro ...: " << X << endl;

  X = false;
  cout << "Valor X com falso ........: " << X << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;

}
