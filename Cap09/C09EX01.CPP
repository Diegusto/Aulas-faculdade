// C09EX01.CPP

#include <iostream>
#include <fstream>
using namespace std;

int main(void)
{

  ofstream ARQTXT;

  ARQTXT.open("ARQTXT.XXX", ios_base::trunc);
  ARQTXT.close();

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
