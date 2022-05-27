// C07EX21.CPP

#include <iostream>
using namespace std;

struct PESSOA_FISICA
{
  char CPF[15]; 
};

struct PESSOA_JURIDICA
{
  char CNPJ[20]; 
};

struct PESSOA
{
  PESSOA_FISICA   F;
  PESSOA_JURIDICA J;
};

struct CLIENTE
{
  char NOME[80];
  char TIPO; 
  PESSOA PES;
};

int main(void)
{
  CLIENTE CLI;

  cout << "Informe o nome .....: ";
  cin.getline(CLI.NOME, sizeof(CLI.NOME));

  cout << "Informe o tipo .....: ";
  cin.get(CLI.TIPO);
  cin.ignore();

  if (CLI.TIPO == 'F')
  {
    cout << "Informe o cpf ......: ";
    cin.getline(CLI.PES.F.CPF, sizeof(CLI.PES.F.CPF));
  }
  else
  {
    cout << "Informe o cnpj .....: ";
    cin.getline(CLI.PES.J.CNPJ, sizeof(CLI.PES.J.CNPJ));
  }
 
  cout << endl << "Saida de Dados" << endl << endl;
  cout << CLI.NOME << endl;
  if (CLI.TIPO == 'F')
    cout << CLI.PES.F.CPF << endl;
  else
    cout << CLI.PES.J.CNPJ << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}

