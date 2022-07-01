// C09EX13.CPP

#include <iostream>
#include <fstream>
using namespace std;

int main(void)
{

  fstream ARQUIVO("MATINT.DBC", ios_base::in |
    ios_base::binary);

  if (ARQUIVO.good())
    {
      cerr << "O arquivo nao pode ser criado" << endl;
      cerr << "***  arquivo existe  ***" << endl;
    }
  else
    {
      fstream ARQUIVO("MATINT.DBC", ios_base::out |
        ios_base::binary);
      cout << "*** O arquivo foi criado ***" << endl;
    }

  ARQUIVO.close();

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
