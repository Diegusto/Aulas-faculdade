// C07EX20.CPP

#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstdlib>
using namespace std;

int main(void)
{
 
  // Definicao da estrutura de uniao

  union CAD_ALUNO
    {
      char  NOME[41];
      float NOTA1;
      float NOTA2;
      float NOTA3;
      float NOTA4;
    };

  CAD_ALUNO ALUNO;

  // Definicao de variaveis e configuracao do ambiente

  char ENTRANOTA[6];

  cout << setprecision(2);
  cout << setiosflags(ios::fixed);

  // Entrada de dados individualizada e sua saida
  cout << "Cadastro de aluno\n\n";

  cout << "Informe o nome .....: ";
  cin.getline(ALUNO.NOME, sizeof(ALUNO.NOME));
  cout << "Nome informado .....: " << ALUNO.NOME << endl;
  cout << endl;

  cout << "Entre as notas:\n" << endl;

  cout << "1a. nota ...........: ";
  cin.getline(ENTRANOTA, sizeof(ENTRANOTA));
  ALUNO.NOTA1 = atof(ENTRANOTA);
  cout << "1a. nota informada .: " << ALUNO.NOTA1 << endl;

  cout << "2a. nota ...........: ";
  cin.getline(ENTRANOTA, sizeof(ENTRANOTA));
  ALUNO.NOTA2 = atof(ENTRANOTA);
  cout << "2a. nota informada .: " << ALUNO.NOTA2 << endl;

  cout << "3a. nota ...........: ";
  cin.getline(ENTRANOTA, sizeof(ENTRANOTA));
  ALUNO.NOTA3 = atof(ENTRANOTA);
  cout << "3a. nota informada .: " << ALUNO.NOTA3 << endl;

 
  cout << "4a. nota ...........: ";
  cin.getline(ENTRANOTA, sizeof(ENTRANOTA));
  ALUNO.NOTA4 = atof(ENTRANOTA);
  cout << "4a. nota informada .: " << ALUNO.NOTA4 << endl;
  cout << endl;

  // Tentativa de saida geral - erro de apresentacao

  cout << "Nome informado .....: " << ALUNO.NOME << endl;
  cout << "1a. nota ...........: " << ALUNO.NOTA1 << endl;
  cout << "2a. nota ...........: " << ALUNO.NOTA2 << endl;
  cout << "3a. nota ...........: " << ALUNO.NOTA3 << endl;
  cout << "4a. nota ...........: " << ALUNO.NOTA4 << endl;

  cout << endl << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}

