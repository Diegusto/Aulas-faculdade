// C09EX17.CPP

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main(void)
{

  int VALOR;
  unsigned int POS;
  char RESP;
  long TAMANHO, NR_REGS;

  cout << endl << "Pesquisa direta e escrita de valores";
  cout << endl;

  fstream ARQUIVO;

  ARQUIVO.open("MATINT.DBC", ios_base::in | ios_base::out |
    ios_base::binary);

  ARQUIVO.seekg(0, ios_base::end);
  TAMANHO = ARQUIVO.tellg();
  NR_REGS = TAMANHO / 4;

  do
    {
      cout << "\nEntre a posicao a ser alterada: ";
      cin >> POS;
      cin.ignore(80, '\n');
      cout << endl;
      if (POS >= 1 and POS <= NR_REGS) {
        cout << "Entre o novo valor: ";
        cin >> VALOR;
        cin.ignore(80, '\n');
        cout << endl;
        ARQUIVO.seekp((POS - 1) * sizeof(POS),
          ios_base::beg);
        ARQUIVO.write(reinterpret_cast<char*>(&VALOR),
          sizeof(VALOR));
        cout << "Valor " << VALOR << " na posicao ";
        cout << POS  << endl; }
      else
        cerr << "Posicao informada - invalida" << endl;
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
