// C09EX03.CPP

#include <iostream>
#include <fstream>
using namespace std;

int main(void)
{

  char MENSAGEM;
  ifstream ARQTXT;

  ARQTXT.open("ARQTXT.XXX", ios_base::in);

  while (not ARQTXT.eof())
    {
      MENSAGEM = ARQTXT.get();
      cout.put(MENSAGEM);
    }

  ARQTXT.close();

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
