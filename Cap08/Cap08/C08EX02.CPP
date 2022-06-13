// C08EX02.CPP

#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstdlib>
using namespace std;

class TALUNO
{
  public:
    char  NOME[41];
    float NOTA[4];
    float MEDIA;
    float CMEDIA(void)
    {
      int I;
      MEDIA = 0;
      for (I = 0; I < 4; I++)
        MEDIA += NOTA[I];
      MEDIA /= 4;
      return MEDIA;
    }
} ALUNO;

int main(void)
{
  cout << setprecision(2);
  cout << setiosflags(ios::fixed);

  char LETRA, ENTRANOTA[6];

  // Rotina para a entrada dos dados

  cout << "Cadastro de aluno\n";
  cout << endl;

  cout << "Informe o nome.....: ";
  cin.getline(ALUNO.NOME, sizeof(ALUNO.NOME));
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
