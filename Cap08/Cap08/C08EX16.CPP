// C08EX16.CPP

#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstdlib>
#include <cstring>
using namespace std;

struct TSALA
{
  public:
    TSALA(void) {};
    ~TSALA(void) {};
    int PEGASALA(void);
    void POESALA(char SL[3]);
  protected:
    int SALA;
};

int TSALA::PEGASALA(void)
{
  return SALA;
}

void TSALA::POESALA(char SL[3])
{
   SALA = atoi(SL);
   return;
}

struct TALUNO
{
  public:
    TALUNO(void) {};
    ~TALUNO(void) {};
    char  NOME[41];
    float CMEDIA(void);
    float PEGANOTA(int POS);
    void  POENOTA(char NT[6], int POS);
    float PEGAMEDIA(void);
    TSALA SALA;
  private:
    float NOTA[4];
    float MEDIA;
};

TALUNO ALUNO;

float TALUNO::CMEDIA(void)
{
  int I;
  MEDIA = 0;
  for (I = 0; I < 4; I++)
    MEDIA += ALUNO.PEGANOTA(I);
  MEDIA /= 4;
  return MEDIA;
}

float TALUNO::PEGANOTA(int POS)
{
  return NOTA[POS];
}

void TALUNO::POENOTA(char NT[6], int POS)
{
   NOTA[POS] = atof(NT);
   return;
}

float TALUNO::PEGAMEDIA(void)
{
  return MEDIA;
}

int main(void)
{
  cout << setprecision(2);
  cout << setiosflags(ios::fixed);

  char LETRA, ENTRANOTA[6], ENTRASALA[3];

  // Rotina para a entrada dos dados

  cout << "Cadastro de aluno\n";
  cout << endl;

  cout << "Informe o nome.....: ";
  cin.getline(ALUNO.NOME, sizeof(ALUNO.NOME));

  cout << "Informe a sala.....: ";
  cin.getline(ENTRASALA, sizeof(ENTRASALA));
  ALUNO.SALA.POESALA(ENTRASALA);
  cout << endl;

  cout << "Informe as notas:\n" << endl;
  for (int I = 0; I < 4; I++)
    {
      cout << setw(2) << I + 1 << "a. nota..........: ";
      cin.getline(ENTRANOTA, sizeof(ENTRANOTA));
      ALUNO.POENOTA(ENTRANOTA, I);
    }
  cout << endl;
  ALUNO.CMEDIA();

  // Apresentacao dos dados

  cout << endl;
  cout << "Relatorio" << endl;
  cout << endl;
  cout << "Nome..........: " << ALUNO.NOME << endl;
  cout << "Sala..........: " << ALUNO.SALA.PEGASALA();
  cout << endl;
  cout << endl;

  for (int I = 0; I < 4; I++)
    {
      cout << setw(2) << I + 1 << "a. nota.....: ";
      cout << setw(5) << ALUNO.PEGANOTA(I) << endl;
    }
  cout << endl;
  cout << "Media.........: ";
  cout << setw(5) << ALUNO.PEGAMEDIA() << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
