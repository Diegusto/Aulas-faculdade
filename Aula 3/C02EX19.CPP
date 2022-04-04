// C02EX19.CPP

#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{

  cout.setf(ios::internal);
  cout << "ios::internal positivo ..: " << setw(3) <<  1;
  cout << endl;
  cout << "ios::internal negativo ..: " << setw(3) << -1;
  cout << endl;
  cout.unsetf(ios::internal);

  cout.setf(ios::scientific);
  cout << "ios::scientific inteiro .: " << 1   << endl;
  cout << "ios::scientific real ....: " << 1.5 << endl;
  cout.unsetf(ios::scientific);

  cout.setf(ios::fixed);
  cout << "ios::fixed inteiro ......: " << 1   << endl;
  cout << "ios::fixed real .........: " << 1.5 << endl;
  cout.unsetf(ios::fixed);

  cout.setf(ios::showbase);
  cout.setf(ios::dec);
  cout << "ios::dec decimal 10 .....: " << 10  << endl;
  cout.unsetf(ios::dec);
  cout.setf(ios::hex);
  cout << "ios::hex decimal 10 .....: " << 10  << endl;
  cout.unsetf(ios::hex);
  cout.setf(ios::oct);
  cout << "ios::oct decimal 10 .....: " << 10  << endl;
  cout.unsetf(ios::oct);
  cout.unsetf(ios::showbase);

  cout.setf(ios::showpoint);
  cout << "ios::showpoint inteiro ..: " << 1   << endl;
  cout << "ios::showpoint real .....: " << 1.5 << endl;
  cout.unsetf(ios::showpoint);

  cout.setf(ios::showpos);
  cout << "ios::showpos positivo ...: " <<  1  << endl;
  cout << "ios::showpos negativo ...: " << -1  << endl;
  cout.unsetf(ios::showpos);

  cout.setf(ios::uppercase);
  cout.setf(ios::scientific);
  cout << "ios::uppercase cientif. .: " << 1.5 << endl;
  cout.setf(ios::showbase);
  cout.setf(ios::hex);
  cout << "ios::uppercase hex ......: " << 10 <<  endl;
  cout.unsetf(ios::hex);
  cout.unsetf(ios::showbase);
  cout.unsetf(ios::scientific);
  cout.unsetf(ios::uppercase);

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
