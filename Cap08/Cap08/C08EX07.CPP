// C08EX07.CPP

#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstdlib>
#include <cstring>
using namespace std;

class TSALA
{
  public:
    TSALA(void);
    ~TSALA(void);
  protected:
    int SALA;
};
TSALA::TSALA(void)
{
  cout << "Construtor: Inicializa classe TSALA" << endl;
}

TSALA::~TSALA(void)
{
  cout << "Destrutor: Libera memoria de TSALA" << endl;
}

class TALUNO: public TSALA
{
  public:
    TALUNO();
    ~TALUNO();
    char  NOME[41];
    float CMEDIA(void);
    float PEGANOTA(int POS);
    void  POENOTA(char NT[6], int POS);
    float PEGAMEDIA(void);
    int   PEGASALA(void);
    void  POESALA(char SL[3]);
  private:
    float NOTA[4];
    float MEDIA;
} ALUNO;

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

int TALUNO::PEGASALA(void)
{
  return SALA;
}

void TALUNO::POESALA(char SL[3])
{
   SALA = atoi(SL);
   return;
}

TALUNO::TALUNO(void)
{
  cout << "Construtor: Inicializa classe TALUNO" << endl;
}

TALUNO::~TALUNO(void)
{
  cout << "Destrutor: Libera memoria de TALUNO" << endl;
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
  ALUNO.POESALA(ENTRASALA);
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
  cout << "Sala..........: " << ALUNO.PEGASALA() << endl;
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
