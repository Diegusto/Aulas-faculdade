// C09EX15.CPP

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main(void)
{

  int VALOR;
  char RESP;
  ofstream ARQUIVO;

  ARQUIVO.open("MATINT.DBC", ios_base::app |
    ios_base::binary);

  cout << endl << "Cadastro sequencial de valores" << endl;

  do
    {
      cout << endl << "Entre um valor: ";
      cin >> VALOR;
      cin.ignore(80, '\n');
      ARQUIVO.write(reinterpret_cast<char*>(&VALOR),
        sizeof(VALOR));
      cout << endl << "Deseja continuar? ";
      cout << endl << endl;
      cout << "[S] Sim \n[qualquer letra] Nao\n\n--> ";
      cin.get(RESP);
      cin.ignore();
    }
  while(toupper(RESP) == 'S');

  ARQUIVO.close();

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
