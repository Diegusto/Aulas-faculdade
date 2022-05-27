// C07EX31.CPP

#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstring>
#include <cstdlib>
using namespace std;

int main(void)
{

  // Definicao de variaveis e configuracao do ambiente

  typedef struct 
    {
      char  NOME[31];
      float NOTA[4];
      float MEDIA;
    } CAD_ALUNO;

  int I, J, TAMANHO;
  float SOMA_NT, SOMA_MD, MEDIA_GP;
  char ENTRANOTA[6], QUANT[15];
  CAD_ALUNO *ALUNO, *PALUNO, *PALUNOPROX, X;

  cout << setprecision(2);
  cout << setiosflags(ios::fixed);

  // Rotina para a entrada dos nomes

  cout << "Cadastro de alunos\n\n";

  cout << "Entre a quantidade de elementos: ";
  cin.getline(QUANT, sizeof(QUANT));

  TAMANHO = atoi(QUANT);
  ALUNO = new CAD_ALUNO[sizeof(CAD_ALUNO) * TAMANHO];

  // Rotina para a entrada dos nomes e notas

  PALUNO = ALUNO;

  cout << endl;
  for (I = 0; I <= TAMANHO - 1; I++)
    {
      cout << "Entre " << setw(2) << I + 1 << "o. nome: ";
      cin.getline(PALUNO->NOME, sizeof(PALUNO->NOME));
      cout << endl;
      cout << "Entre as notas:\n" << endl;
      for (J = 0; J <= 3; J++)
        {
           cout << setw(2) << J + 1 << "a. nota: ";
           cin.getline(ENTRANOTA, sizeof(ENTRANOTA) - 1);
           PALUNO->NOTA[J] = atof(ENTRANOTA);
        }
      cout << endl;
      PALUNO++;
    }

  // Processamento do calculo das medias

  PALUNO = ALUNO;
  SOMA_MD = 0;
    for (I = 0; I <= TAMANHO - 1; I++)
    {
      SOMA_NT = 0;
      for (J = 0; J <= 3; J++)
        SOMA_NT = SOMA_NT + PALUNO->NOTA[J];
      PALUNO->MEDIA = SOMA_NT / 4;
      SOMA_MD = SOMA_MD + PALUNO->MEDIA;
      PALUNO++;
    }
  MEDIA_GP = SOMA_MD / TAMANHO;

  // Classificacao dos dados

  PALUNO = ALUNO;
  for (I = 0; I < TAMANHO - 1; I++)
    {
      PALUNOPROX = PALUNO;
      PALUNOPROX++;
      for (J = I + 1; J < TAMANHO; J++)
        {
          if (strcmp(PALUNO->NOME, PALUNOPROX->NOME) > 0)
            {
              X = *PALUNO;
              *PALUNO = *PALUNOPROX;
              *PALUNOPROX = X;
            }
          PALUNOPROX++;
        }
      PALUNO++;
    }

  // Apresentacao da tabela nome/notas/media

  cout << endl;
  cout << "Relatorio Geral" << endl;
  cout << endl;
  cout << setiosflags(ios::left);
  cout << setw(41) << "Aluno";
  cout << resetiosflags(ios::left);
  cout << setiosflags(ios::right);
  cout << setw( 7) << "Nota1";
  cout << setw( 7) << "Nota2";
  cout << setw( 7) << "Nota3";
  cout << setw( 7) << "Nota4";
  cout << setw( 7) << "Media";
  cout << endl;
  cout << endl;
  PALUNO = ALUNO;
  for (I = 0; I <= TAMANHO - 1; I++)
    {
      cout << resetiosflags(ios::right);
      cout << setiosflags(ios::left);
      cout << setw(41) << PALUNO->NOME;
      cout << resetiosflags(ios::left);
      cout << setiosflags(ios::right);
      for (J = 0; J <= 3; J++)
        cout << setw( 7) << PALUNO->NOTA[J];
      cout << setw( 7) << PALUNO->MEDIA;
      cout << endl;
      PALUNO++;
    }
  cout << endl;
  cout << setw(70) << "Media Geral = " << setw( 6);
  cout << MEDIA_GP;
  cout << endl;
  cout << endl << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}

