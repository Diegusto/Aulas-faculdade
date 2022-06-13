// C08EX06.CPP

#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstdlib>
using namespace std;

class TSALA
{
  public:
    int SALA;
};

class TSERIE
{
  public:
    int SERIE;
};

class TALUNO: public TSALA, public TSERIE
{
  public:
    char  NOME[41];
    float NOTA[4];
    float MEDIA;
    float CMEDIA(void);
} ALUNO;

float TALUNO::CMEDIA(void)
{
  int I;
  MEDIA = 0;
  for (I = 0; I < 4; I++)
    MEDIA += ALUNO.NOTA[I];
  MEDIA /= 4;
  return MEDIA;
}

int main(void)
{
  cout << setprecision(2);
  cout << setiosflags(ios::fixed);

  char LETRA, ENTRANOTA[6], ENTRASALA[3], ENTRASERIE[3];

  // Rotina para a entrada dos dados

  cout << "Cadastro de aluno\n";
  cout << endl;

  cout << "Informe o nome.....: ";
  cin.getline(ALUNO.NOME, sizeof(ALUNO.NOME));

  cout << "Informe a sala.....: ";
  cin.getline(ENTRASALA, sizeof(ENTRASALA));
  ALUNO.SALA = atoi(ENTRASALA);

  cout << "Informe a serie....: ";
  cin.getline(ENTRASERIE, sizeof(ENTRASERIE));
  ALUNO.SERIE = atoi(ENTRASERIE);
  cout << endl;

  cout << "Informe as notas:\n" << endl;
  for (int I = 0; I < 4; I++)
    {
      cout << setw(2) << I + 1 << "a. nota..........: ";
      cin.getline(ENTRANOTA, sizeof(ENTRANOTA));
      ALUNO.NOTA[I] = atof(ENTRANOTA);
    }
  cout << endl;
  ALUNO.CMEDIA();

  // Apresentacao dos dados

  cout << endl;
  cout << "Relatorio" << endl;
  cout << endl;
  cout << "Nome..........: " << ALUNO.NOME << endl;
  cout << "Sala..........: " << ALUNO.SALA << endl;
  cout << "Serie.........: " << ALUNO.SERIE << endl;
  cout << endl;
  for (int I = 0; I < 4; I++)
    {
      cout << setw(2) << I + 1 << "a. nota.....: ";
      cout << setw(5) << ALUNO.NOTA[I] << endl;
    }
  cout << endl;
  cout << "Media.........: " << setw(5) << ALUNO.MEDIA;
  cout << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
