// C09EX02.CPP

#include <iostream>
#include <fstream>
using namespace std;

int main(void)
{

  char MENSAGEM[51];
  ofstream ARQTXT;

  ARQTXT.open("ARQTXT.XXX", ios_base::app);

  cout << "Informe uma mensagem com ate 50 caracteres";
  cout << endl;
  cout << "--> ";
  cin.getline(MENSAGEM, sizeof(MENSAGEM));
  ARQTXT << MENSAGEM << endl;

  ARQTXT.close();

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
