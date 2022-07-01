// C09EX14.CPP

#include <iostream>
#include <fstream>
using namespace std;

int main(void)
{

  fstream ARQUIVO("DADOS.PPP", ios_base::in |
    ios_base::binary);

  if (ARQUIVO.fail())
    {
      fstream ARQUIVO("DADOS.PPP", ios_base::out |
        ios_base::binary);
      cerr << "*** O arquivo foi criado ***" << endl;
    }

if (ARQUIVO.good())
    {
      cerr << "O arquivo nao foi criado" << endl;
      cerr << "***  arquivo existe  ***" << endl;
    }

  ARQUIVO.close();

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
