// C09EX12.CPP

#include <iostream>
#include <fstream>
using namespace std;

int main(void)
{

  fstream ARQUIVO("DADOS.PPP", ios_base::in |
    ios_base::binary);

  if (ARQUIVO.fail())
    {
      cerr << "O arquivo nao pode ser aberto" << endl;
      cerr << "***  arquivo inexistente  ***" << endl;
    }

  if (ARQUIVO.good())
    cout << "*** O arquivo foi aberto ***" << endl;

  ARQUIVO.close();

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
