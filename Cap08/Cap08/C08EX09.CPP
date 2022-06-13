// C08EX09.CPP

#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstdlib>
#include <cstring>
using namespace std;

// Definicao da classe pai TSALA

class TSALA
{
  public:
    TSALA(void){}; // Construtor padrao
    ~TSALA(void){}; // Destrutor padrao
  protected:
    int SALA;
};

// Definicao da classe filho TALUNO com pai TSALA

class TALUNO: public TSALA
{
  public:
    TALUNO(char NM[41], int DP) // Construt. com parametros
      {
         strcpy(NOME, NM);
         DEPENDENCIA = DP;
      };
    ~TALUNO(void){};
    void POENOTA(float PT, float FS, float FL, float HT);
    void PEGALUNO(void);
    int  PEGASALA(void);
    void POESALA(char SL[3]);
  protected:
    char  NOME[41];
    int   DEPENDENCIA;
    float PORTUGUES;
    float MATEMATICA;
    float FILOSOFIA;
    float HISTORIA;
};

void TALUNO::POENOTA(float PT, float FS, float FL, float
  HT)
{
  PORTUGUES  = PT;
  MATEMATICA = FS;
  FILOSOFIA  = FL;
  HISTORIA   = HT;
  return;
}

void TALUNO::PEGALUNO(void)
{
  cout << "\nRelatorio Escolar\n"  << endl;
  cout << "Nome do aluno......: " << NOME         << endl;
  cout << "Sala...............: " << SALA << "\n" << endl;
  cout << "Media: Portugues...: " << PORTUGUES    << endl;
  cout << "Media: Matematica..: " << MATEMATICA   << endl;
  cout << "Media: Filosofia...: " << FILOSOFIA    << endl;
  cout << "Media: Historia....: " << HISTORIA     << endl;
  if (DEPENDENCIA != 0)
    {
      if (DEPENDENCIA == 1)
        {
          cout << "\nO aluno esta com ";
          cout << DEPENDENCIA << " dependencia";
        }
      else
        {
          cout << "\nO aluno esta com ";
          cout << DEPENDENCIA << " dependencias";
        }
    }
  return;
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

// Definicao da classe filho TPOSGRAD com pai TALUNO
// e avo TSALA

class TPOSGRAD: public TALUNO
{
  public:
    TPOSGRAD(int NG, char NM[41], int DP): TALUNO(NM, DP)
      {
        GRAU = NG;
      };
    ~TPOSGRAD(void){};
    void TITULACAO();
  private:
    int GRAU;
};

void TPOSGRAD::TITULACAO(void)
{
  cout << "\nEste aluno pleiteia o titulo de: ";
  switch(GRAU)
    {
      case 1: cout << "Especialista";  break;
      case 2: cout << "Mestre";        break;
      case 3: cout << "Doutor";        break;
      case 4: cout << "Livre-docente"; break;
    }
  return;
}

char LETRA, POSGRAD[2], ESCOLHA[2], ENTRASALA[3],
  NOMEALU[41];
char NTPT[6], NTMT[6], NTFL[6], NTHT[6];
int OPCAO, CONT, ACADEMICO;

int main(void)
{
  int CADASTRO(void);

  cout << setprecision(1);
  cout << setiosflags(ios::fixed);

  cout << "\nEntrada de dados escolares\n";
  cout << "\nEscolha o tipo de curso:\n\n";
  cout << "[1] - Graduacao\n";
  cout << "[2] - Pos-Graduacao\n";
  cout << "\n==> ";
  cin.getline(ESCOLHA, sizeof(ESCOLHA));
  OPCAO = atoi(ESCOLHA);
  if (OPCAO == 1)
    {
      CADASTRO();
      TALUNO ALUNO(NOMEALU, CONT);
      ALUNO.POESALA(ENTRASALA);
      ALUNO.POENOTA(atof(NTPT), atof(NTMT), atof(NTFL),
        atof(NTHT));
      ALUNO.PEGALUNO();
    }
  if (OPCAO == 2)
    {
      cout << "\nQual curso voce faz?\n\n";
      cout << "[1] - Especializacao\n";
      cout << "[2] - Mestrado\n";
      cout << "[3] - Doutorado\n";
      cout << "[4] – Livre-docencia\n";
      cout << "\n==> ";
      cin.getline(POSGRAD, sizeof(POSGRAD));
      CADASTRO();
      ACADEMICO = atoi(POSGRAD);
      TPOSGRAD ALUNO(ACADEMICO, NOMEALU, CONT);
      ALUNO.POESALA(ENTRASALA);
      ALUNO.POENOTA(atof(NTPT), atof(NTMT), atof(NTFL),
        atof(NTHT));
      ALUNO.PEGALUNO();
      ALUNO.TITULACAO();
    }
  cout << endl;
  cout << "\nTecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}

int CADASTRO(void)
{
  CONT = 0;
  cout << "\nEntre o nome....: ";
  cin.getline(NOMEALU, sizeof(NOMEALU));
  cout << "Entre a sala....: ";
  cin.getline(ENTRASALA, sizeof(ENTRASALA));
  cout << "\nEntre as notas de:\n\n";
  cout << "Portugues.......: ";
  cin.getline(NTPT, sizeof(NTPT));
  if (atof(NTPT) < 7)
    CONT++;
  cout << "Matematica......: ";
  cin.getline(NTMT, sizeof(NTMT));
  if (atof(NTMT) < 7)
    CONT++;
  cout << "Filosofia.......: ";
  cin.getline(NTFL, sizeof(NTFL));
  if (atof(NTFL) < 7)
    CONT++;
  cout << "Historia........: ";
  cin.getline(NTHT, sizeof(NTHT));
  if (atof(NTHT) < 7)
    CONT++;
  return 0;
}
