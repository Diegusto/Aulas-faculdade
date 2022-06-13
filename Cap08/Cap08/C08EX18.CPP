// C08EX18.CPP

#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstdlib>
#include <string>
#include "data.h"
using namespace std;

// Classe TSALA

class TSALA
{
  public:
    TSALA(void) {};
    ~TSALA(void) {};
    int PEGASALA(void) const;
    void POESALA(char SL[3]);
  protected:
    int SALA;
};

int TSALA::PEGASALA(void) const
{
  return SALA;
}

void TSALA::POESALA(char SL[3])
{
   SALA = atoi(SL);
   return;
}

// Classe TALUNO
// com herança: classe TSALA e da estrutura TDATA de data.h

class TALUNO : public TSALA, public TDATA
{
  public:
    TALUNO(void) {};
    ~TALUNO(void) {};
    char  NOME[41];
    float CMEDIA(void);
    float PEGANOTA(int POS) const;
    void  POENOTA(char NT[6], int POS);
    float PEGAMEDIA(void) const;
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

float TALUNO::PEGANOTA(int POS) const
{
  return NOTA[POS];
}

void TALUNO::POENOTA(char NT[6], int POS)
{
   NOTA[POS] = atof(NT);
   return;
}

float TALUNO::PEGAMEDIA(void) const
{
  return MEDIA;
}

int main(void)
{
  cout << setprecision(2);
  cout << setiosflags(ios::fixed);

  char LETRA, ENTRANOTA[6], ENTRASALA[3], DT[11];
  string DTS;
  short DIA, MES, ANO;

  // Rotina para a entrada dos dados

  cout << "Cadastro de aluno\n";
  cout << endl;

  cout << "Informe o nome ............: ";
  cin.getline(ALUNO.NOME, sizeof(ALUNO.NOME));

  cout << "Informe a sala ............: ";
  cin.getline(ENTRASALA, sizeof(ENTRASALA));
  ALUNO.POESALA(ENTRASALA);
  cout << endl;

  cout << "Informe as notas:\n" << endl;
  for (int I = 0; I < 4; I++)
    {
      cout << setw(2) << I + 1;
      cout << "a. nota .................: ";
      cin.getline(ENTRANOTA, sizeof(ENTRANOTA));
      ALUNO.POENOTA(ENTRANOTA, I);
    }
  cout << endl;
  ALUNO.CMEDIA();
  cout << "Matricula (DD/MM/AAAA) ....: ";
  cin.getline(DT, sizeof(DT));

  DTS.assign(DT);

  DIA = atoi(DTS.substr(0,2).c_str());
  MES = atoi(DTS.substr(3,2).c_str());
  ANO = atoi(DTS.substr(6,4).c_str());

  ALUNO.ALTERADATA(DIA, MES, ANO);

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

  cout << "Matricula.....: "; ALUNO.MOSTRADATA();

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
