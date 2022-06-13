// C08EX10.CPP

#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

class TPESSOA
{

  public:
    TPESSOA(const char *NOME)
      {
        strcpy(TPESSOA::NOME, NOME);
      };
    ~TPESSOA(void){};

    void PEGNOME(void)
      {
        cout << NOME << endl;
        return;
      }

    virtual void PROFISSAO(void)
      {
        cout << "Atividade profissional desconhecida\n";
        cout << endl;
      }

  protected:
    char NOME[41];
};

class TMEDICO: public TPESSOA
{
  public:
    TMEDICO(const char *NOME): TPESSOA(NOME){};
    ~TMEDICO(void){};

    void PEGNOME(void)
      {
        cout << NOME << endl;
        return;
      }

    void PROFISSAO(void)
    {
      cout << "Voce possui formacao em medicina\n" << endl;
    }
};

class TADVOGADO: public TPESSOA
{
  public:
    TADVOGADO(const char *NOME): TPESSOA(NOME){};
    ~TADVOGADO(void){};

    void PEGNOME(void)
      {
        cout << NOME << endl;
        return;
      }

    void PROFISSAO(void)
    {
      cout << "Voce possui formacao em advocacia\n";
      cout << endl;
    }
};

int main(void)
{
  char LETRA;

  TADVOGADO PROFIS1("Marisa Monteiro");
  TMEDICO   PROFIS2("Carlos de Andrade");
  TPESSOA   PROFIS3("Joana Silva");

  PROFIS1.PEGNOME();
  PROFIS1.PROFISSAO();

  PROFIS2.PEGNOME();
  PROFIS2.PROFISSAO();

  PROFIS3.PEGNOME();
  PROFIS3.PROFISSAO();

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
